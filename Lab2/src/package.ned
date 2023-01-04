package lab2;

@license(LGPL);
//
// TODO documentation
//
network lab2
{
    @display("bgb=1010,417");
    submodules:
        p1: P1 {
            @display("p=126.75,197.73001");
        }
        p2: P2 {
            @display("p=775.71,204.0675");
        }
    connections:
        p1.P1_out --> p2.P2_in;
        p2.P2_out --> p1.P1_in;
}

