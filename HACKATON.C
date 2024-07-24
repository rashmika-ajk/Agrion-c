#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

typedef struct {
    char name[20];
    int growth;
    int water;
} Crop;

int main()
{
    int c,i;
    char color[50];
    char texture[50];
    char location[100];
    char soilType[50];
    char usercrop[30];
 char season[20];
int choice;
int numTips;
int randomIndex;
char   *tips[] = {
        "Pick the right spot. It is always better to take small steps towards big wins.",
        "Pick a type.",
        "Work on the soil.",
        "Grab basic gardening tools.",
        "Pick your plants.",
        "Plan It Out.",
        "Garden Beds.",
        "Plant With Care."
    };
int choicee;
Crop myCrop;
    strcpy(myCrop.name, "Wheat");
 myCrop.growth = 0;
    myCrop.water = 0;
    

    printf("Welcome to NinX\nThis is Nix! Your assistant in this journey full of wonder.\nWhat do you want to do today ?\n");
    printf("1. Random fact about agriculture.\n");
    printf("2. Learn how to do agriculture.\n");
    printf("3. Try out our game if you haven't yet!\n");
    printf("4. Explore gardening tips.\n");
    printf("Please tell me your choice : ");
    scanf("%d",&c);
    switch (c)
    {
        case 1:
        
    srand(time(NULL));
    choice = rand() % 6 + 1;

    switch (choice)
    {
        case 1:
            printf("Half the habitable land on earth is used for farming.\n");
            break;
        case 2:
            printf("About 1/4 of the world's population works in agriculture.\n");
            break;
        case 3:
            printf("The world raises and eats a lot of cows.\n");
            break;
        case 4:
            printf("2.9 million organic farmers worldwide.\n");
            break;
        case 5:
            printf("Some plants need cold weather to flower.\n");
            break;
        case 6:
            printf("Crayons are grown - from soybeans.\n");
            break;
    }
    break;


    // CASE 2 STARTED HERE BELOW 

    case 2:
    printf("Do you know the type of your soil ?\n1.Yes\n2.No\n");
    scanf("%d",&i);
    if(i==2)
    {
        printf("Then let me help you to find the type of your soil.\n");

    printf("Color of the soil: ");
    scanf("%s", color);
    
    printf("Texture of the soil: ");
    scanf("%s", texture);

    printf("Location where the soil is found: ");
    scanf(" %[^\n]s", location);
    printf("\nBased on your description:\n");

    // Red Soil done
    if (strcmp(color, "red") == 0 && (strstr(location, "Karnataka") || strstr(location, "Andhra Pradesh") || strstr(location, "Tamil Nadu") || strstr(location, "Telangana") || strstr(location, "Kerala"))) {
        strcpy(soilType, "Red Soil");
        printf("You may have %s.\n", soilType);
        printf("Characteristics:\n");
        printf(" - Color: Pronounced reddish hue (light pink to deep red).\n");
        printf(" - Texture: Clayey, loamy, or sandy.\n");
        printf(" - Location: Tropical and subtropical areas.\n");
        printf("Observation: Red soil may be identified if there is a significant red tint to the soil, especially when it is dry.\n");
    }
    // Black Soil identified
    else if (strcmp(color, "black") == 0 && strstr(location, "Deccan Plateau")) {
        strcpy(soilType, "Black Soil");
        printf("You may have %s.\n", soilType);
        printf("Characteristics:\n");
        printf(" - Color: Deep black to dark brown.\n");
        printf(" - Texture: Clayey to sandy clay loam.\n");
        printf(" - Moisture Retention: Good moisture retention qualities.\n");
        printf("Location: Deccan Plateau region, including Maharashtra, Madhya Pradesh, Chhattisgarh, Gujarat, Karnataka, Telangana.\n");
    }
    // Alluvial Soil donw
    else if (strstr(location, "river valleys") || strstr(location, "floodplains")) {
        strcpy(soilType, "Alluvial Soil");
        printf("You may have %s.\n", soilType);
        printf("Characteristics:\n");
        printf(" - Location: River valleys and floodplains.\n");
        printf(" - Color: Light grey to yellowish-brown.\n");
        printf(" - Texture: Mix of sand, silt, and clay; typically loamy.\n");
        printf(" - Structure: Loose, crumbly aggregates when moistened.\n");
    }
    // Laterite Soil donw
    else if (strcmp(color, "red") == 0 && strstr(location, "lateritic plateaus")) {
        strcpy(soilType, "Laterite Soil");
        printf("You may have %s.\n", soilType);
        printf("Characteristics:\n");
        printf(" - Color: Red to brownish-red due to high iron oxides content.\n");
        printf(" - Texture: Coarse-textured, often gravel or grit.\n");
        printf(" - Hardness: Becomes extremely hard when dry.\n");
        printf("Elements of the landscape: Lateritic plateaus, cliffs, and escarpments.\n");
    }
    // Mountain and Forest Soil done
    else if (strstr(location, "mountains") || strstr(location, "forests")) {
        strcpy(soilType, "Mountain and Forest Soil");
        printf("You may have %s.\n", soilType);
        printf("Characteristics:\n");
        printf(" - Color: Varies based on water flow, organic matter, and local geology.\n");
        printf(" - Texture: Well-balanced with clay, silt, and sand.\n");
        printf(" - Plants: Look for native trees, bushes, and other plants adapted to mountain and forest conditions.\n");
    }
    // Desert Soil done
    else if (strstr(location, "arid") || strstr(location, "desert")) {
        strcpy(soilType, "Desert Soil");
        printf("You may have %s.\n", soilType);
        printf("Characteristics:\n");
        printf(" - Location: Arid and semi-arid areas with little yearly precipitation.\n");
        printf(" - Color: Light gray to reddish-brown.\n");
        printf(" - Texture: Sand- or loamy-textured with large particles.\n");
        printf(" - Low Moisture Content: Typically low moisture content.\n");
    }
    // Arid Soil done
    else if (strstr(location, "arid") || strstr(location, "semi-arid")) {
        strcpy(soilType, "Arid Soil");
        printf("You may have %s.\n", soilType);
        printf("Characteristics:\n");
        printf(" - Location: Areas with little annual precipitation.\n");
        printf(" - Color: Light gray to reddish-brown.\n");
        printf(" - Texture: Sandy or sandy-loam with coarse particles.\n");
        printf(" - Low Moisture Content: Typically low moisture content.\n");
    }
    // Peat and Marshy Soil donee
    else if (strstr(location, "peatlands") || strstr(location, "bogs") || strstr(location, "swamps") || strstr(location, "marshes")) {
        strcpy(soilType, "Peat and Marshy Soil");
        printf("You may have %s.\n", soilType);
        printf("Characteristics:\n");
        printf(" - Location: Wetland environments like peatlands, bogs, swamps, and marshes.\n");
        printf(" - Color: Dark brown to black due to high organic matter.\n");
        printf(" - Texture: Fibrous or spongy texture; retains water.\n");
        printf(" - Smell: Earthy or mossy scent due to degrading organic matter.\n");
    }
    else {
        strcpy(soilType, "Unknown Soil");
        printf("Sorry, we couldn't identify the soil type based on your description.\n");
    }
    }
    if(i==1)
    {
        printf("\nPlease enter the soil type : ");
    scanf("%s", soilType);
    }

    //QUESTION 2- SEASON BASED SHORTLISED CROPS after question 1 soil typ found
    printf("\nNow that we know the type of soil, What season do you plan to grow crops in ?((e.g: Kharif, Rabi, Zaid))\n");
   
    scanf("%s", season);
    if (strcmp(soilType, "Red Soil") == 0) 
    {
        printf("You have identified the soil as Red Soil.\n");
        printf("Crops suitable for Red Soil in %s season:\n", season);
        if (strcmp(season, "Kharif") == 0) {
            printf(" - Rice, Cotton, Groundnut (Peanut), Turmeric\n");
        } else if (strcmp(season, "Rabi") == 0) {
            printf(" - Wheat, Barley, Mustard, Gram (Chickpea)\n");
        } else if (strcmp(season, "Zaid") == 0) {
            printf(" - Vegetables like cucumber, pumpkin, and bitter gourd\n");
            printf(" - Watermelon and muskmelon\n");
        } else {
            printf("Invalid season input.\n");
        }
    }
    else if (strcmp(soilType, "Black Soil") == 0)
     {
    printf("You have identified the soil as Black Soil.\n");
    printf("Crops suitable for Black Soil in %s season:\n", season);
    if (strcmp(season, "Kharif") == 0) {
        printf(" - Cotton, Soybean, Groundnut (Peanut), Turmeric\n");
    } else if (strcmp(season, "Rabi") == 0) {
        printf(" - Wheat, Gram (Chickpea), Sesame (Til)\n");
    } else if (strcmp(season, "Zaid") == 0) {
        printf(" - Sunflower, Sugarcane\n");
        printf(" - Certain vegetables like tomatoes and bell peppers\n");
    } else {
        printf("Invalid season input.\n");
    }
     }
    // Alluvial Soil crop listing
    else if (strcmp(soilType, "Alluvial Soil") == 0) {
    printf("You have identified the soil as Alluvial Soil.\n");
    printf("Crops suitable for Alluvial Soil in %s season:\n", season);
    if (strcmp(season, "Kharif") == 0) {
        printf(" - Sugarcane, Maize, Jute\n");
    } else if (strcmp(season, "Rabi") == 0) {
        printf(" - Wheat, Barley, Oilseeds (Mustard, Sunflower)\n");
    } else if (strcmp(season, "Zaid") == 0) {
        printf(" - Vegetables like cucumber, pumpkin, and bitter gourd\n");
        printf(" - Cash crops: Sugarcane, Cotton, Oilseeds, Tobacco\n");
        printf(" - Food crops: Rice, Wheat, Barley\n");
    } else {
        printf("Invalid season input.\n");
    }
  }//ALUVIAL SOIL DONE

  //LATERITE SOIL CROPS
  else if (strcmp(soilType, "Laterite Soil") == 0) {
    printf("You have identified the soil as Laterite Soil.\n");
    printf("Crops suitable for Laterite Soil in %s season:\n", season);
    if (strcmp(season, "Kharif") == 0) {
        printf(" - Rice, Cashew, Coconut\n");
    } else if (strcmp(season, "Rabi") == 0) {
        printf(" - Groundnut, Sweet Potato, Turmeric\n");
    } else if (strcmp(season, "Zaid") == 0) {
        printf(" - Certain vegetables, such as tomatoes, okra (ladyfinger), and pumpkin\n");
        printf(" - Chilies\n");
    } else {
        printf("Invalid season input.\n");
    }
}// Laterite done

// Mountain and Forest Soil cropsss
else if (strcmp(soilType, "Mountain and Forest Soil") == 0) {
    printf("You have identified the soil as Mountain and Forest Soil.\n");
    printf("Crops suitable for Mountain and Forest Soil in %s season:\n", season);
    if (strcmp(season, "Kharif") == 0) {
        printf(" - Maize, Millets, Buckwheat\n");
    } else if (strcmp(season, "Rabi") == 0) {
        printf(" - Barley, Potatoes, Peas\n");
    } else if (strcmp(season, "Zaid") == 0) {
        printf(" - Vegetables like spinach, lettuce, and radishes\n");
        printf(" - Strawberries\n");
    } else {
        printf("Invalid season input.\n");
    }
}//Mount done
    
    // Desert Soil crops
else if (strcmp(soilType, "Desert Soil") == 0) {
    printf("You have identified the soil as Desert Soil.\n");
    printf("Crops suitable for Desert Soil in %s season:\n", season);
    if (strcmp(season, "Kharif") == 0) {
        printf(" - Pearl Millet (Bajra), Sorghum (Jowar), Moong (Green Gram)\n");
    } else if (strcmp(season, "Rabi") == 0) {
        printf(" - Wheat, Barley, Mustard\n");
    } else if (strcmp(season, "Zaid") == 0) {
        printf(" - Cucumber, Muskmelon, Watermelon\n");
    } else {
        printf("Invalid season input.\n");
    }
}// desert done

// Arid Soil crops
else if (strcmp(soilType, "Arid Soil") == 0) {
    printf("You have identified the soil as Arid Soil.\n");
    printf("Crops suitable for Arid Soil in %s season:\n", season);
    if (strcmp(season, "Kharif") == 0) {
        printf(" - Pearl Millet (Bajra), Sorghum (Jowar), Maize\n");
    } else if (strcmp(season, "Rabi") == 0) {
        printf(" - Wheat, Barley, Oilseeds (Mustard, Sunflower)\n");
    } else if (strcmp(season, "Zaid") == 0) {
        printf(" - Certain vegetables like tomatoes, cucumbers, and bell peppers\n");
        printf(" - Melons\n");
    } else {
        printf("Invalid season input.\n");
    }
}// ARID SOIL OVER
    else {
	printf("Invalid soil type input.\n");
    }
    printf("\n\nBased on the above crops, what crop are you interested to grow ?\n");
    scanf("%s", usercrop);
if (strcmp(usercrop, "Rice") == 0)
{printf("-Land Preparation:\nPlow the field to break up the soil and improve aeration.\nLevel the field to ensure uniform water distribution.\n");
printf("-Water Management:\nRice requires a lot of water, especially during the growing season. Ensure proper irrigation to keep the soil consistently moist but not waterlogged.\nConstruct bunds or ridges to manage water levels effectively.\n");
printf("-Seed Selection:\nChoose high-quality rice seeds adapted to the local climate and soil conditions.\nUse certified seeds to ensure better yield and disease resistance.\n");
printf("-Seedbed Preparation:\nStart by preparing a seedbed for germinating rice seeds.\nTransplant the seedlings to the main field once they reach the appropriate height (typically around 20-25 days).\n");
printf("-Planting:\nIn red soil, rice is usually transplanted rather than direct-seeded.\nPlant the seedlings in rows, maintaining proper spacing.\n");
printf("-BUDGET: around RS 18000 per acre.\n-MARKET PRICE:average Rice price is ₹3381.66/Quintal.\n");
}



break;


//CASE 2 CLOSEED AND CASE 3 STARTS NOW -
   case 3:


    srand(time(NULL));

    do {
	printf("\n1. Display Crop Status\n");
	printf("2. Water Crop\n");
	printf("3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choicee);

	switch (choicee) {
	    case 1:
		printf("\nCrop Status:\n");
		printf("%s | Growth: %d | Water: %d\n", myCrop.name, myCrop.growth, myCrop.water);
		break;

	    case 2:
		myCrop.water += rand() % 5 + 1;
		printf("\nYou watered your crop!\n");

		myCrop.growth += rand() % 3 + 1;
		myCrop.water -= rand() % 3 + 1;

		if (myCrop.water < 0) {
		    myCrop.water = 0;
		}

		printf("%s | Growth: %d | Water: %d\n", myCrop.name, myCrop.growth, myCrop.water);
		break;

	    case 3:
		printf("Exiting the game. Goodbye!\n");
		break;

	    default:
		printf("Invalid choice. Try again.\n");
	}
    } while (choice != 3);

   break;
   //GAMER SECTION OVER NOW FINAL CASE 4

   case 4:

    numTips = sizeof(tips) / sizeof(tips[0]);
    srand(time(NULL));
    randomIndex = rand() % numTips;
    printf("\n%s\n", tips[randomIndex]);

    break;
    //CASE 4 ENDS AFTER DISPLAYING TIP
}//SWITCH CASE ENDS here

return 0;
   
}
