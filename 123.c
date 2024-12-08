#include<stdio.h>
int main(){
	int i , j, choice ,n,count , pos , value ,target ;
	int arr[100]; 
	do{
		
	printf("\n MENU \n \n");
 	printf("1.Nhap so phan tu va gia tri cho mang.\n");
 	printf("2.In ra cac phan tu trong mang.\n");
 	printf("3.Dem so luong cac so nguyen to co trong mang.\n");
 	printf("4.Tim gia tri nho thu 2 trong mang.\n");
 	printf("5.Them mot phan tu vao mang o vi tri cu the.\n");
 	printf("6.Xoa phan tu tai vi tri cu the.\n");
 	printf("7.Sap xep mang theo thu tu giam dan (Insertion sort).\n");
 	printf("8.Tim kiem 1 phan tu bang Binary Search.\n");
 	printf("9.Xoa toan bo phan tu trung lap va in toan bo phan tu doc nhat.\n");
 	printf("10.Dao nguoc thu tu cac phan tu co trong mang.\n");
 	printf("11.Sap xep mang theo thu tu tang dan.\n");
 	printf("12.Tim gia tri lon thu hai trong mang.\n");
 	printf("13.Dem so luong so hoan hao.\n");
 	printf("14.In cac phan tu la so chan va sau do la cac phan tu so le.\n");
 	printf("15.Thoat.\n");
 	printf("Lua chon cua ban: ");
 	scanf("%d", &choice);
 	switch (choice ){
 		case 1 : 
		 printf ("Moi nhap vao so phan tu cho mang :");
		 scanf("%d",&n); 
		 if(n<0|| n >100){
		 	printf("So nhap vao khong hop le "); 
		 }else{
		 	for(i=0;i<n;i++){
		 		printf("Moi ban nhap vao phan tu thu %d :",i+1);
				 scanf("%3d",&arr[i]); 
			 } 
		 } 
 		break; 
 		case 2 : 
 		for(i=0;i<n;i++){
		 printf("arr[%d]=%d\n",i,arr[i]);
	}
 		break; 
 		case 3: 
 		for(i=0;i<n;i++){ 
 		for (j=2 ; j*j <=arr[i];j++ ){
 			if(arr[i]%j ==0 ){
 				count ++ ; 
			 } 
		 }

	for(i=0;i<n;i++){
	
		  if (count !=0 ) {
 	  	printf ("%d",arr[i]); 
	   }else{
	   	printf("Khong co phan tu nao la so nguyen to ") ;
	   } 
}
 	}
 	  break; 
 	  case 4 :
 	   
	   for(i=0;i<n-1;i++){ 
	   	for (j=0;j<n-1-i;j++){
	   		if(arr[j+1]<arr[j]) {
	   			int temp=arr[j];
				   arr[j]=arr[j+1];
				   arr[j+1]=temp; 
			   }
		   } 
	   	
	   } 
	    //for(i=0;i<n;i++){
	    //	printf ("%3d",arr[i]); 
	//	}
	    	printf("Phan tu nho thu hai trong mang la %d",arr[1]); 
	break; 
 	case 5 :
	 printf("Moi ban nhap vao vi tri muon them phan tu : ");
	 scanf ("%d",&pos) ;
	 printf("Moi ban nhap vao so muon them: ");
	 scanf("%d",&value ) ;
	 if (pos <0 || pos > n){
	 	printf("Khong hop le "); 
	 }else {
	 	for(i=n; i> pos ;i--){
	 		arr[i]=arr[i-1]; 
		 } 
		 arr[pos ]= value ;
		 n++; 
	 } 
 	
 	for (i=0;i<n;i++){
 		printf("%3d",arr[i]); 
	 } 
 	break ;
	  case 6 : 
	  printf (" Moi ban nhap vao vi tri muon xoa:");
	  scanf("%d",pos);
	   if (pos <0 || pos > n){
	 	printf("Khong hop le "); 
	 }else {
	 	for ( i=pos; i<n-1; i++){
	 		arr[i]=arr[i+1] ;
		 } 
		 n--;
		  for (i=0;i<n;i++){
 		printf("%3d",arr[i]); 
	 } 
}
	 break ;
	 
	case 7 :
	for (i=1; i<n ; i++){
		int key = arr[i];
		j=i-1 ; 
		while(j>=0 && key >arr[j]){
			arr[j+1]=arr[j];
			j--; 
		} 
		arr[j+1]=key; 
	} 
 	 
 	for (i=0; i<n ; i++){
 		printf("%3d",arr[i]); 
	 } 
 	break ;
	 case 8:
	 	printf ("Moi ban nhap vao phan tu muon tim kiem : ");
		 scanf("%d",&target ) ;
	  for (i=0;i<n;i++){
	  	 if (arr[i]==target ){
	  	 	count ++; 
	  	 	printf ("So ban muon tim la phan tu %d nam o vi tri %d",target ,i+1 ) ;
		   }
	  } 
 	if (count == 0){
 		printf ("Phan tu ban tim kiem khong co trong mang "); 
	 } 
 	break ; 
 	case 9 : 
	 for(i=0;i<n;i++){
	 	same= arr[i] ;
	 	for (j=1;j<n-1-i;j++){
	 		if(arr[j]!=arr[i]){
	 			; 
			 } 
		 } 
	 } 
 	break; 
 	case 11:
	 for(i=1;i<n;i++){
	 	key = arr[i];
		 j=i-1 ;
		 while (j>=0&&arr[j]>key){
		 	arr[j+1]=arr[j];
			 j--; 
		 } 
		 arr[j+1 ]=key ; 
	 } 
 	
 	for(i=0;i<n;i++){
	    	printf ("%3d",arr[i]); 
		}
 	
 	break; 
 	case 12: 
 	
 	 for(i=0;i<n-1;i++){ 
	   	for (j=0;j<n-1-i;j++){
	   		if(arr[j+1]<arr[j]) {
	   			int temp=arr[j];
				   arr[j]=arr[j+1];
				   arr[j+1]=temp; 
			   }
		   } 
	   	
	   } 
	    	printf("Phan tu lon thu hai trong mang la %d",arr[n-1]); 
	break; 
	case 13 :
	 
 	
 	case 15:
printf("Hen gap lai ");
default : 
printf("Lua chon khong hop le ");	  
 	
	 } 
		
		
		
		
		
		
		
		
		
		
		
		
		
	}while(choice !=15); 
	
	
	
	
	
	
	
	
	
	
	return 0; 
} 
