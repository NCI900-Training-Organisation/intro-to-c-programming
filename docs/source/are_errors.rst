Common ARE Errors
===================================

Bad Requests
-----------------------------------

.. figure:: figs/1.jpg

This error is often caused by issues with cookies or cache. To resolve it, open another tab and log in again, or try using incognito mode.

Illegal Characters
-----------------------------------

.. figure:: figs/2.jpg

.. figure:: figs/3.png

This issue occurs when special characters are copied into the ARE forms. To fix it, delete the entries and manually type the values into the forms.

Hook Rejected
-----------------------------------

.. figure:: figs/4.png

.. code-block::

    Resource Usage on 2025-03-13 11:13:31:
    Job Id:             136906625.gadi-pbs
    Project:            vp91
    Exit Status:        -17 (Job execution failed due to hook rejection; delete the job at end)
    Service Units:      0.00
    NCPUs Requested:    12                     NCPUs Used: 12              
                                                CPU Time Used: 00:00:00        
    Memory Requested:   95.0GB                Memory Used: 0B              
    NGPUs Requested:    1                 GPU Utilisation: 0%              
                                            GPU Memory Used: 0B              
    Walltime requested: 08:00:00            Walltime Used: 00:00:00        
    JobFS requested:    10.0GB                 JobFS used: 0B              

This error is related to a PBS hook rejection. Relaunch the job to resolve the issue.

Error Saving the File
-----------------------------------

.. figure:: figs/7.png

This error occurs when a file with the same name already exists and might be owned by another user. Rename the file and try saving it again.

Not a Member of the Project
-----------------------------------

.. code-block::

    qsub: Error: You are not a member of project vp91. You must be a member of a project to submit a job under that project.

This error occurs if you are not a member of the project you are trying to submit a job under, or if you recently joined the project. Wait for 20 minutes and try again.

Phusion Passenger Error
-----------------------------------

.. figure:: figs/8.png

This error indicates that the user's home directory is full. Delete some files to free up space and resolve the issue.
