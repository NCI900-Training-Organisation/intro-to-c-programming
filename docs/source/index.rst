Name of the Workshop
=================================================

This repository provides an introduction to the concepts of parallel programming using Python.

.. note::

   This project is a template for creating documentation for NCI training workshops.  
   Please update the `index.rst`; setting tables in `use-jupyterlab.md` (delete page if not used) and `conf.py` to match the workshop.
   Add content files under `docs/source/tutorial`. Content can be `rst`, `md` or `ipynb` files, thanks to the `myst-nb` extension. 
   
.. note::
   To configure the markdown format, see the `conf.py` file.



Contents
--------
.. toctree::
    :maxdepth: 1
    :caption: Setup and Prerequisites

    prerequisite.rst
    outcomes.rst  
    modules.rst
    packages.rst
    use-jupyterlab.md
    are_errors.rst

.. toctree::
    :maxdepth: 4
    :caption: Tutorial
    :numbered:
    
    tutorial/intro.rst
    tutorial/tutorial.rst
    tutorial/sample-notebook.ipynb
    references

   