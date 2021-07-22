fvScalarMatrix phiEqn
(
	dim_t*fvm::ddt(phi)
    +M*( 2.0*W*phi*(1.0-phi)*(1.0-2*phi) - K*dim_x2*fvm::laplacian(phi) + Lf*(T-Tm)*6.0*phi*(1.0-phi)/Tm )
);

phiEqn.solve();