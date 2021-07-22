Info<< "Reading fields\n" << endl;

volScalarField phi
(
	IOobject
	(
		"phi",
		runTime.timeName(),
		mesh,
		IOobject::MUST_READ,
		IOobject::AUTO_WRITE
	),
	mesh
);

volScalarField T
(
	IOobject
	(
		"T",
		runTime.timeName(),
		mesh,
		IOobject::MUST_READ,
		IOobject::AUTO_WRITE
	),
	mesh
);

IOdictionary phaseChangeProperties
(
    IOobject
    (
        "phaseChangeProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ_IF_MODIFIED,
    IOobject::NO_WRITE
    )
);

dimensionedScalar M
(
	phaseChangeProperties.lookup("M")
);

// dimensionedScalar kappa
// (
// 	phaseChangeProperties.lookup("kappa")
// );

dimensionedScalar Kt
(
	phaseChangeProperties.lookup("Kt")
);

dimensionedScalar Cv
(
	phaseChangeProperties.lookup("Cv")
);

dimensionedScalar Lf
(
	phaseChangeProperties.lookup("Lf")
);

dimensionedScalar K
(
	phaseChangeProperties.lookup("K")
);

dimensionedScalar W
(
	phaseChangeProperties.lookup("W")
);

dimensionedScalar Tm
(
	phaseChangeProperties.lookup("Tm")
);


dimensionedScalar dim_t
(
	phaseChangeProperties.lookup("dim_t")
);

dimensionedScalar dim_x1
(
	phaseChangeProperties.lookup("dim_x1")
);

dimensionedScalar dim_x2
(
	phaseChangeProperties.lookup("dim_x2")
);