
# Run Jupyter Notebooks on Gadi 
ARE (Australian Research Environment) gives you access to NCI’s Gadi supercomputer and data collections, all from a simple, graphical interface. ARE consists of a number of applications that support your research such as Virtual Desktop, JupyterLab, Terminal, etc.   

# Cluster Access
1. [Create an NCI account ](https://my.nci.org.au/mancini)using **institution email**
2. Join necessary NCI projects for resources allocation (e.g. compute, dataset, software modules, etc.)
    - [vp91:NCI Training Project](https://aus01.safelinks.protection.outlook.com/?url=https%3A%2F%2Fmy.nci.org.au%2Fmancini%2Fproject%2Fvp91&data=05%7C02%7CZhuochen.Wu%40anu.edu.au%7Cf5a89cc20ce54084a5a408dda23d8170%7Ce37d725cab5c46249ae5f0533e486437%7C0%7C0%7C638845107242745767%7CUnknown%7CTWFpbGZsb3d8eyJFbXB0eU1hcGkiOnRydWUsIlYiOiIwLjAuMDAwMCIsIlAiOiJXaW4zMiIsIkFOIjoiTWFpbCIsIldUIjoyfQ%3D%3D%7C0%7C%7C%7C&sdata=U5QIrogOxO%2FbxR8Y7FGaB8tA1hzCGOzqP4QiFiqv5XU%3D&reserved=0)
    - other projects may be needed depending on the notebook you are running
    
# Launch JupyterLab Session on ARE

## Login to ARE

Open [https://are.nci.org.au](https://are.nci.org.au) in a new tab, and log in with your **NCI account, NOT email**.
You will see a dashboard page as shown after login.
Each App will be run as an **interactive session/job** connected to Gadi. In this tutorial we will start a  JupyterLab session.

```{figure} figs/ARE_Login_Page.png
:alt: ARE Login Page
:width: 50%
:name: are-login-page
:align: center
```
## New JupyterLab Session

Click on the **JupyterLab** tile from the Dashboard, this will open the setting page for a new Jupyter session. We will fill in circled fields next.  

```{figure} figs/ARE_click_jupyter.png
:alt: Click JupyterLab tile
:width: 50%
:name: are-click-jupyter
:align: center
```

## Basic Settings
Depending on the notebook you are running, you may need to adjust the settings. If you are attending a workshop, you should use the settings specified in the workshop.
Setting form has free text input boxes. So we can **copy the example values** below and paste over to the form. 
> 
> | Field                 | Value                        |
> |-------------------------|------------------------------|
> | **Walltime (hours):**   | `1`                          |
> | **Queue:**              | `normal`                     |
> | **Compute Size:**       | `small`                      |
> | **Project:**            | `vp91`                       |
> | **Storage:**            | `gdata/vp91+scratch/vp91`    |

```{figure} figs/ARE_settings.png
:alt: Setting page for JupyterLab session
:width: 70%
:name: are-settings
:align: center
```

Input boxes can also be used as dropdown selection. If you need to use different NCI projects when working on your project you might find the dropdown function helpful.
 
## Advanced Settings

Click on  **Show advanced settings** at the end of page. This will expand the form with extra fields. 

```{figure} figs/ARE_show_adv_settings.png
:alt: Show advanced settings checkbox
:width: 70%
:name: are-show-adv-settings
:align: center
```

Some field names are similar, check the **field names** carefully. 

>  
> | Field                 | Value                        |
> |-------------------------|------------------------------|
> | **Modules**   | `python3/3.11.0 cuda/12.8.0` |
> | **Python or Conda virtual environment base**| `/scratch/data/vp91/Training-Venvs/intro-to-dask`| 
>   

```{figure} figs/ARE_adv_settings.png
:alt: Advanced settings section
:width: 70%
:name: are-adv-settings
:align: center
```


## Launch Session

Make sure the setting fields and values are filled correctly, and then click on the **Launch** button at the bottom of the setting page.

Now you will see the green <u>*Session was successfully created*</u> message at the top, and **Queued** status is shown on the right side of the JupyterLab session block as shown below. Wait for the session to start.
The wait time depends on the number of cores as well as time requested.
 
```{figure} figs/ARE_queued.png
:alt: Session queued
:width: 70%
:name: are-queued
:align: center
```

## Open JupyterLab
Once the requested resources are allocated, the session will start and the status will change to **Running**.
The **Jupyter** path should start with <u>*the virtual environment base value*</u> used in settings, then point to <u>*/bin/jupyter*</u>.

```{figure} figs/ARE_running.png
:alt: Session running
:width: 70%
:name: are-running
:align: center
```

Confirm the Jupyter path of your session is correct, and click on **Open JupyterLab**. This will open a new browser tab with JupyterLab interface. 

```{figure} figs/JupyterLab_UI.png
:alt: JupyterLab UI
:width: 70%
:name: jupyterlab-ui
:align: center
```

**Congratulations, you are all set for the workshop!**

# ARE FAQs

## Unable to Log In

**Error:**`Bad Request: Requested resource does not exist.`  
**Possible Cause:** This error is often caused by issues with browser cookies or cache.   
**Solution:** Open another tab and log in again, or try using incognito mode.  

**Error:**`We are sorry, but something went wrong.`  
**Possible Cause:** Exceeding the /home file system quota on Gadi.   
**Diagnosis**: You will be able to confirm this by executing the **`quota -s`** command on Gadi's <u>login node</u>. If this is the case, see the usage of Gadi's HOME using the **`du -h --max-depth=1 ~`** command.  
**Solution:** Deleting/moving files from your Gadi's HOME directory to keep the usage below the quota.  

**Error:**`Web application could not be started by the Phusion Passenger(R) application server...`   
**Possible Cause:** Exceeding the /home file system quota on Gadi.   
**Diagnosis**: You will be able to confirm this by executing the **`quota -s`** command on Gadi's <u>login node</u>. If this is the case, see the usage of Gadi's HOME using the **`du -h --max-depth=1 ~`** command.  
**Solution:** Deleting/moving files from your Gadi's HOME directory to keep the usage below the quota.  
  
**Error:**`Web application could not be started by the Phusion Passenger(R) application server...`  
**Possible Cause:** Exceeding the /home file system quota on Gadi.   
**Diagnosis**: You will be able to confirm this by executing the **`quota -s`** command on Gadi's <u>login node</u>. If this is the case, see the usage of Gadi's HOME using the **`du -h --max-depth=1 ~`** command.  
**Solution:** Deleting/moving files from your Gadi's HOME directory to keep the usage below the quota.  
## Unable to Launch Session
**Error: **`qsub: Error: You are not a member of project vp91. You must be a member of a project to submit a job under that project.`   
**Possible Cause:** You are not a member of the project used, or if you recently joined the project and system is syncing account status.   
**Solution:** Wait for 20 minutes and try again.  

**Error: **`Failed to submit session with the following error: usage: qsub [-a date_time]… If this job failed to submit because of an invalid job name please ask your administrator to configure OnDemand to set the environment variable OOD_JOB_NAME_ILLEGAL_CHARS.`  
**Possible Cause:** Special characters are submitted into the setting form.  
**Solution:** Check the setting page values or manually type the values into the form.  

**Error:**`Disk quota exceeded @ dir_s_mkdir - /home/<institution_code>/<username>/ondemand/data/sys/dashboard/batch_connect/sys/desktop_vnc/ncigadi/output/<session_ID>`  
**Possible Cause:** Exceeding the /home file system quota on Gadi.   
**Diagnosis**: You will be able to confirm this by executing the **`quota -s`** command on Gadi's <u>login node</u>. If this is the case, see the usage of Gadi's HOME using the **`du -h --max-depth=1 ~`** command.  
**Solution:** Deleting/moving files from your Gadi's HOME directory to keep the usage below the quota.  

**Error:** `unix listener: cannot bind to path /home/<institution_code>/<username>/.ssh/<session_ID>: No such file or directory. Your connection to the remote server has been terminated.`  
**Possible Cause:** SSH folder is not properly setup in your account.
**Diagnosis: **You will be able to confirm this by executing the **`ls -lah ~`** command on Gadi's <u>login node</u>. If there is no .ssh in the output or the folder permission is not correct, follow below steps to resolve the issue.
**Solution:** 
1. Login to Gadi terminal
2. Execute the following commands:

`mkdir -p ~/.ssh`  
`chmod 700 ~/.ssh`

## Check Debug Log for Other Issues

If your issue is not solved above, please follow these instructions to check the session log or report the issue:
1. Go to **my interactive sessions** by clicking one of the buttons on the page:

```{figure} figs/ARE_my_interactive_session_buttons.png
:alt: My Interactive Sessions
:width: 70%
:name: are-my-interactive-sessions
:align: center
```

2. On the Session block, click **Debug Log** link

```{figure} figs/ARE_log_link.png
:alt: Debug Log link
:width: 70%
:name: are-log-link
:align: center
```
## Report Issue to Helpdesk

1. Copy **Debug Log** link (if job is still running then use the **Session id** link).
2. Send a new email to **help@nci.org.au**, include:
    - **Subject: "ARE"** and short description of issue
    - **Body:** 
        - **A more detailed issue description.**
        - **Debug Log/Session id Link: **The **link** you copied.
        - **Operating System:** e.g. Windows 11, MacOSX 13, Debian Linux etc.
        - **Browser: **e.g. Firefox 102, Chrome 103, Edge 103
        - **Connection:** e.g. Wired network at ANU, Wireless at Home etc.


# JupyterLab Usage

## Interface

The JupyterLab workspace consists of a [main work area](https://jupyterlab.readthedocs.io/en/stable/user/interface.html#main-area) containing tabs of documents and activities, a collapsible [left sidebar](https://jupyterlab.readthedocs.io/en/stable/user/interface.html#left-sidebar), and a [menu bar](https://jupyterlab.readthedocs.io/en/stable/user/interface.html#menu-bar).

The left sidebar contains a [file browser](https://jupyterlab.readthedocs.io/en/stable/user/files.html#working-with-files), the [list of running kernels and terminals](https://jupyterlab.readthedocs.io/en/stable/user/running.html#running), the Dask extension of JupyterLab, Table of Contentions and Extension Manager.

```{figure} figs/JupyterLab_UI.png
:alt: JupyterLab interface
:width: 70%
:name: jupyterlab-interface
:align: center
```


## Running Notebook

Double-click on a notebook (.ipynb) file to open it in the main area. Selected cell is highlighted in blue.
**Run Selected Cell** 

Press: **Shift + Enter** 
or 
Click: the **run button** on toolbar 



# JupyterLab FAQs

## Server Connection Error


**Error:**`"Server Connection Error. A connection to the Jupyter server could not be established. JupyterLab will continue trying to reconnect. Check your network connection or Jupyter server configuration." `
**Possible Cause:** Reached requested job <u>Walltime</u> or exceeding requested <u>JOBFS</u> size. 
**Diagnosis**: You will be able to confirm this by checking session log file: `$HOME/ondemand/data/sys/dashboard/batch_connect/sys/jupyter/ncigadi/output/<session_ID>/output.log` on Gadi.
**Solution:** Re-launching the JupyterLab session by either requesting more Walltime or JOBFS (available under the "Advanced options ..."), based on the cause of the issue.
## Saving File Error


**Error:**`"Unexpected error while saving file: … [Errno 13] Permission denied: '…' "`
**Possible Cause:** This error occurs when a file with the same name already exists and might be owned by another user.
**Diagnosis**: Check the file directory on the left panel of JupyterLab page that you are saving the file in your own folder, not other users.
**Suggestion**: Rename the file and try saving it again.

