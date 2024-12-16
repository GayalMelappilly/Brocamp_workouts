for(j=0;j<limit*2-i*2-1;j++){
			if(i>0 && count<limit/2){
                printf("* ");
				if(j==(mid-count)){
					for(k=0;k<count;k++){
						printf(" ");
					}
					count++;
				}
			}else{
				printf("* ");
			}
		}