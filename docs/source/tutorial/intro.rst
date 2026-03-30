Heading level 2 (Section)
==========================

.. admonition:: Overview
   :class: Overview

    * **Tutorial:** 10 min

        **Objectives:**
            #. Learn the how Numba works.





Heading level 3 (Subsection)
----------------------------

Heading level 4 (Sub-subsection)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Heading level 5 (Paragraph)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Heading level 6 (Subparagraph)
+++++++++++++++++++++++++++++++

Heading level 7 (Lowest level)


Add Imgaes
-----------------

.. image:: ../figs/performance.png


Bullets
---------------------------

 
1. **Annotation and Compilation**: When you use Numba's `@jit` decorator on a Python function, Numba 
first analyzes the function's code. This analysis determines how to compile the function to improve performance. 
You can also provide type hints to help Numba generate more efficient machine code.

2. **Type Inference**: Numba performs type inference on the function’s inputs and outputs. It determines the 
types of variables and ensures that operations are optimized for those types. For example, it might optimize
arithmetic operations for specific numerical types.

3. **Machine Code Generation**: Based on the type information and analysis, Numba generates machine code 
tailored to the function. This code is designed to run directly on the hardware, bypassing the overhead of the 
Python interpreter.

Code Blocks
--------------

..  code-block:: python
    :linenos:

    import numba
    from numba import jit, int32, prange, vectorize, float64, cuda


Notes
--------------

.. note::
 1.  python3/3.11.0
 2.  papi/7.0.1
 3.  openmpi/4.0.1
 4.  cuda/12.3.2
 5.  gcc/14.2.0

Explanations
---------------

.. admonition:: Explanation
   :class: attention
   
    #. Numba is a JIT compiler that optimizes Python code for performance.
    #. It compiles functions at runtime, allowing for efficient execution of numerical computations.
    #. The `@jit` decorator is used to mark functions for optimization.
    #. Numba can handle different input types and adapt its compilation accordingly.


Importance
---------------

.. important::
   In practice weight updates do not happen after  every individual sample; instead, they occur after each batch of data, depending on the **batch size** used. 

Exercise
---------------

.. admonition:: Exercise
   :class: todo

    1. Examine the program *src/distributed_data_parallel.py*. What the changes from data_parallel.ipynb?
    2. Examine the job script *job_scripts/distributed_data_parallel.pbs*.
    3. Run the program using the job script *job_scripts/distributed_data_parallel.pbs*.



.. admonition:: Key Points
   :class: hint

    #. Numba uses simple annonations to parallelise code.
