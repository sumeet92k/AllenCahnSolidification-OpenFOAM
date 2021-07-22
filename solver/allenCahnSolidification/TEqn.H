fvScalarMatrix TEqn
(
	Cv*dim_t*fvm::ddt(T)
    -( Kt*dim_x2*fvm::laplacian(T) + Lf*6.0*phi*(1.0-phi)*dim_t*fvc::ddt(phi) )
);

TEqn.solve();