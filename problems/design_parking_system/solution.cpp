class ParkingSystem {
    private:
     int ss, ms, bs;
    
public:
    ParkingSystem(int big, int medium, int small) {
        ss = small;
        ms = medium;
        bs = big;
    }
    
    bool addCar(int carType) {
        switch(carType) {
		    case 1:
                if(bs != 0) { bs--; return true; }
                break;
                
		    case 2:
                if(ms!= 0) { 
                    ms--;
                            return true;
                           }
                break;
                
    		case 3:
	    		if(ss != 0) { 
                    ss--; 
                             return true;
                }
		    	break;
                
		    default:
    			break;
        }

		return false;
    }
    

};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */