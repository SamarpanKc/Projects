// Disply largest samallest and middle

#include <stdio.h>

int main() {
    int day;
    printf("Enter number 1 upto 7: ");
    scanf("%d", &day);
    
    switch(day){
    	case 1:
    		printf("\nSUNDAY\n");
    		break;
    	case 2:
    		printf("\nMONDAY\n");
    		break;
    	case 3:
    		printf("\nTUESDAY\n");
    		break;
    	case 4:
    		printf("\nWEDNESDAY\n");
    		break;
    	case 5:
    		printf("\nTHRUSDAY\n");
    		break;
    	case 6:
    		printf("\nFRIDAY\n");
    		break;
    	case 7:
    		printf("\nSATURDAY\n");
    		break;
	}

    return 0;
}
