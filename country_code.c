/*
zip->country V1.0:
By Fongoh Martin Tayong
25/10/13: 8:25am.

-------------------Updated: 26/10/13, 8:40am----------------------------------
-------------------Verdion: zip->country V1.2--------------------------------
------------------Addition: User adds thy own country and zip code------------




*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
This structure will hold the zip code and the respective country read from the file
This value, the zip code will be used to test with the users input.
*/
struct nodee
{
	char country[30];
	int code;
}conv={0, 0};

/*
This function gives the user the opportunity for the user to update his/her list of 
country and their respective code. Not realy working a
*/

/*
void add_code(FILE *fp)
{
	char convcountry[30];
	
	fflush(stdin);
	printf("\nCountry : ");
	fgets(convcountry, 30, stdin);
//scanf("%s", conv.country, 29);
	strtok(conv.country, "\n");
	fflush(stdin);
	
	printf("\ntzip_code : ");
	scanf("%d", &conv.code);



	if((fp=fopen("zip_code.txt", "a+"))==NULL)
	{	printf("File not found\n\n"); exit(1);	}//problem finding or reading from the file.
/*File opened succesfully in append mode*/
/*Appending the users inputs to the file/
	fprintf(fp, "%d\t", conv.code);
	fprintf(fp, "%s\n", conv.country);
	fclose(fp);



}

*/


int main()
{

puts("------------------------ZIP CODE - > COUNTRY 1.0------------------------------------------");

/*Create memory to hold the code and country name at testing*/

//conv= malloc(sizeof *conv);


	int give, i;
	printf("Give me the code and i will give u the country:");
	scanf("%d", &give);


FILE *fp;
if
(
(fp=fopen("zip_code.txt", "r"))==NULL)
	{	printf("File not found\n"); exit(1);	}

/*file opened succesfully*/

while(!feof(fp))
{

	fscanf(fp, "%d", &conv.code);
	fgets(conv.country, 30, fp);

	if (conv.code == give)
	{
		strtok(conv.country, "\n");
		printf("Found it\n\n"
			"%s - - - - - - - - - - - - > +%d\n", conv.country, conv.code);
		puts("\nHope u found it useful.\nUpgrades are always welcome"
		     "\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
		exit(1);
	}
	

}

fclose(fp);


	printf("\n___Sorry_____\nCountry with code %d not in the list.\n", conv.code);
	fflush(stdin);
	//add_code(fp);

	printf("Upgrade to a newer version to have more countries and their zip codes codes\n\n", give);



return 0;

}
