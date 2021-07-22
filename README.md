# AllenCahnSolidification-OpenFOAM
The folder contains the solver and the case files in OpenFOAM for solving the Allen-Cahn equation coupled with the thermal diffusion equation. The solver and case files have been tested in OpenFOAM-in-Box v18.10 using both serial and parallel execution. For a simpler 1D explanation of the equations involved in this solver, go through the Jupyter notebook published at https://github.com/sumeet92k/Materials-Modeling-2020/blob/main/tutorials/12_allen_cahn_solidification.ipynb .
### Solver
The `solver` directory contains the solver, which is to be compiled by running the command wclean followed by wmake. Note the location of the executable generated.
Based upon the version of OpenFOAM, you may need to toggle commenting either of these lines 52/53 in file allenCahnSolidification.C:
```
   while (simple.loop(runTime))
// while (simple.loop())
```
### Case files
The `cases` contains 2D and 3D case files. The job submission script is `cray_small.pbs` for submission to the cray cluster. In this file, change the name of the executable to the one generated above on compiling the solver. For parallel execution, have a look at the file `system/decomposeParDict`.
