package lab3;

@license(LGPL);
//
// TODO documentation
//
network Network
{
    
    
    parameters:
        int n = default(4);
        
    submodules:
        node[n]: Node;
        hub: Hub;
        
    connections:
        for i=0..n-1
        {
        	hub.outhub++ --> node[i].in;
        	node[i].out --> hub.inhub++;
        }
        
}

