#include<stdio.h>
#include<stdlib.h>
int p=0, k=0;
struct block
{
	int scheme;
	int ageU;
	int ageL;
	int gender;
	int caste;
	int occupation;
	struct block *chain;
};
struct block *first=NULL, *last=NULL, *x=NULL;
void snames(struct block* a);
void sdetails(int s);
int main()
{
	struct block *nb1 = (struct block *)malloc(sizeof(struct block));
	first=nb1;
	last=nb1;
	last->scheme=1;
	last->ageU=0;
	last->ageL=0;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb2 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb2;
	last=nb2;
	last->scheme=2;
	last->ageU=18;
	last->ageL=1000;
	last->gender=1;
	last->caste=0;
	last->occupation=0;
	last->chain=NULL;
	struct block *nb3 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb3;
	last=nb3;
	last->scheme=3;
	last->ageU=1000;
	last->ageL=18;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb4 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb4;
	last=nb4;
	last->scheme=4;
	last->ageU=1000;
	last->ageL=18;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb5 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb5;
	last=nb5;
	last->scheme=5;
	last->ageU=1000;
	last->ageL=18;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb6 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb6;
	last=nb6;
	last->scheme=6;
	last->ageU=1000;
	last->ageL=18;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb7 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb7;
	last=nb7;
	last->scheme=7;
	last->ageU=1000;
	last->ageL=18;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb8 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb8;
	last=nb8;
	last->scheme=8;
	last->ageU=1000;
	last->ageL=18;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb9 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb9;
	last=nb9;
	last->scheme=9;
	last->ageU=1000;
	last->ageL=18;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb10 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb10;
	last=nb10;
	last->scheme=10;
	last->ageU=1000;
	last->ageL=18;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb11 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb11;
	last=nb11;
	last->scheme=11;
	last->ageU=1000;
	last->ageL=18;
	last->gender=1;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb12 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb12;
	last=nb12;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb13 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb13;
	last=nb13;
	last->scheme=13;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb14 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb14;
	last=nb14;
	last->scheme=14;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb15 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb15;
	last=nb15;
	last->scheme=15;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb16 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb16;
	last=nb16;
	last->scheme=16;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=3;
	last->chain=NULL;
	struct block *nb17 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb17;
	last=nb17;
	last->scheme=17;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=1;
	last->chain=NULL;
	struct block *nb18 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb18;
	last=nb18;
	last->scheme=18;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=1;
	last->chain=NULL;
	struct block *nb19 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb19;
	last=nb19;
	last->scheme=19;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=1;
	last->chain=NULL;
	struct block *nb20 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb20;
	last=nb20;
	last->scheme=20;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=1;
	last->chain=NULL;
	struct block *nb21 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb21;
	last=nb21;
	last->scheme=21;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=1;
	last->chain=NULL;
	struct block *nb22 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb22;
	last=nb22;
	last->scheme=22;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=1;
	last->chain=NULL;
	struct block *nb23 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb23;
	last=nb23;
	last->scheme=23;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=2;
	last->chain=NULL;
	struct block *nb24 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb24;
	last=nb24;
	last->scheme=24;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=2;
	last->chain=NULL;
	struct block *nb25 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb25;
	last=nb25;
	last->scheme=25;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=1;
	last->chain=NULL;
	struct block *nb26 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb26;
	last=nb26;
	last->scheme=26;
	last->ageU=1000;
	last->ageL=18;
	last->gender=0;
	last->caste=0;
	last->occupation=1;
	last->chain=NULL;
	struct block *nb27 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb27;
	last=nb27;
	last->scheme=27;
	last->ageU=1000;
	last->ageL=0;
	last->gender=0;
	last->caste=0;
	last->occupation=4;
	last->chain=NULL;
	struct block *nb28 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb28;
	last=nb28;
	last->scheme=28;
	last->ageU=1000;
	last->ageL=0;
	last->gender=0;
	last->caste=0;
	last->occupation=4;
	last->chain=NULL;
	struct block *nb29 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb29;
	last=nb29;
	last->scheme=29;
	last->ageU=18;
	last->ageL=14;
	last->gender=1;
	last->caste=0;
	last->occupation=4;
	last->chain=NULL;
	struct block *nb30 = (struct block *)malloc(sizeof(struct block));
	last->chain=nb30;
	last=nb30;
	last->scheme=30;
	last->ageU=18;
	last->ageL=14;
	last->gender=0;
	last->caste=0;
	last->occupation=4;
	last->chain=NULL;
	int a, g, c, o, s;
	printf("Enter your age: ");
	scanf("%d", &a);
	printf("\nSelect your gender: \n1. Female\n2. Male\n3. Others\n");
	scanf("%d", &g);
	printf("\nSelect your caste: \n1. SC\n2. ST\n3. General\n4. OBC\n");
	scanf("%d", &c);
	printf("\nSelect your occupation: \n1. Farmer\n2. Fishermen\n3. Entrepreneurs\n4. Students\n");
	scanf("%d", &o);
	printf("\nSchemes you are eligible for:\n");
	x = first;
	for(int i=0; i<29; i++)
	{
		if((x->gender==g||x->gender==0)&&(x->caste==c||x->caste==0)&&(x->occupation==o)&&(a<x->ageU && a>x->ageL))
		{
			snames(x);
			k++;
		}
		
		x=x->chain;
	}
	if(k==0)
	printf("None");
	for(int j=0; j<100; j++)
	{
		if (p==0&&k!=0)
		{
		printf("\nEnter the Scheme No. to view more\n");
		scanf("%d", &s);
		sdetails(s);
		}
		else
		break;
	}
	
	return 0;
}
void snames(struct block* a)
{
	switch (a->scheme)
	{
		case 1: printf("\nScheme No.: 1      Scheme name: Mahila-E-haat\n");
				break;
		case 2: printf("\nScheme No.: 2      Scheme name: Working women hostels\n");
				break;
		case 3: printf("\nScheme No.: 3      Scheme name: Annapurna Scheme\n");
				break;
		case 4: printf("\nScheme No.: 4      Scheme name: Stree Shakti Package For Women Entrepreneurs\n");
				break;
		case 5: printf("\nScheme No.: 5      Scheme name: Bharatiya Mahila Bank Business Loan\n");
				break;
		case 6: printf("\nScheme No.: 6      Scheme name: Dena Shakti Scheme\n");
				break;
		case 7: printf("\nScheme No.: 7      Scheme name: Udyogini Scheme\n");
				break;
		case 8: printf("\nScheme No.: 8      Scheme name: Cent Kalyani Scheme\n");
				break;
		case 9: printf("\nScheme No.: 9      Scheme name: Mahila Udyam Nidhi Scheme\n");
				break;
		case 10: printf("\nScheme No.: 10    Scheme name: Mudra Yojana Scheme For Women\n");
				break;
		case 11: printf("\nScheme No.: 11    Scheme name: Orient Mahila Vikas Yojana Scheme\n");
				break;
		case 12: printf("\nScheme No.: 12    Scheme name: Multiplier Grants Scheme (MGS) for IT Research and Development\n");
				break;
		case 13: printf("\nScheme No.: 13     Scheme name: Modified Special Incentive Package Scheme (M-SIPS)\n");
				break;
		case 14: printf("\nScheme No.: 14     Scheme name: The Venture Capital Assistance Scheme\n");
				break;
		case 15: printf("\nScheme No.: 15     Scheme name: Credit Guarantee\n");
				break;
		case 16: printf("\nScheme No.: 16     Scheme name: Raw Material Assistance\n");
				break;
		case 17: printf("\nScheme No.: 17     Scheme name: E-NAM\n");
				break;
		case 18: printf("\nScheme No.: 18     Scheme name: National Mission For Sustainable Agriculture (NMSA)\n");
				break;
		case 19: printf("\nScheme No.: 19     Scheme name: Paramparagat Krishi Vikas Yojana (PKVY)\n");
				break;
		case 20: printf("\nScheme No.: 20     Scheme name: Pradhan Mantri Fasal Bima Yojana (PMFBY)\n");
				break;
		case 21: printf("\nScheme No.: 21     Scheme name: Gramin Bhandaran Yojna\n");
				break;
		case 22: printf("\nScheme No.: 22     Scheme name: Livestock insurance Scheme\n");
				break;
		case 23: printf("\nScheme No.: 23     Scheme name: Scheme on Fisheries Training and Extension\n");
				break;
		case 24: printf("\nScheme No.: 24     Scheme name: National Scheme on Welfare of Fishermen\n");
				break;
		case 25: printf("\nScheme No.: 25     Scheme name: Micro Irrigation Fund (MIF)\n");
				break;
		case 26: printf("\nScheme No.: 26     Scheme name: Pradhan Mantri Krishi Sinchai Yojana (PMKSY)\n");
				break;
		case 27: printf("\nScheme No.: 27     Scheme name: Sarva Shiksha Abhiyan\n");
				break;
		case 28: printf("\nScheme No.: 28     Scheme name: Rashtriya Madhyamik Shiksha Abhiyan (RMSA) \n");
				break;
		case 29: printf("\nScheme No.: 29     Scheme name: National Scheme of Incentives to Girls for Secondary Education\n");
				break;
		case 30: printf("\nScheme No.: 30     Scheme name: Saakshar Bharat Mission\n");
				break;	
	}
}
void sdetails(int s)
{
	switch (s)
	{
		case 1: printf("\n1. Mahila-E-haat \nMahila e-Haat is an online marketing platform for women launched by the government with objectives to provide access to markets to thousands of women, who make products and are spread all over the country. Mahila e haat endeavour is to help women to make financial and economic choices for women across the country, a unique online platform where participants can display their products. This initiative will provide access to markets to thousands of women who make products but have little access to markets and are spread all over the country.");
				break;
		case 2: printf("\n2. Working women hostels\nThe objective of the scheme is to promote the availability of safe and conveniently located accommodation for working women, with daycare facility for their children, wherever possible, in urban, semi-urban, or even rural areas where employment opportunity for women exist.");
				break;
		case 3: printf("\n3. Annapurna Scheme\nThis scheme is offered by the State Bank of Mysore for those women entrepreneurs who are setting up food catering industry in order to sell packed meals, snacks, etc. The amount granted as a loan under this scheme can be used to fulfill the working capital needs of the business like buying utensils and other kitchen tools and equipment. Under this loan, a guarantor is required along with the assets of the business being pledged as collateral security. Further, the maximum amount of money that is granted is ₹50,000 which has to re-paid in monthly installments for 36 months, however, after the loan is sanctioned, the lender doesn’t have to pay the EMI for the first month. The interest rate is determined depending upon the market rate");
				break;
		case 4: printf("\n4. Stree Shakti Package For Women Entrepreneurs\nThis scheme is offered by most of the SBI branches to women who have 50% share in the ownership of a firm or business and have taken part in the state agencies run Entrepreneurship Development Programmes (EDP). The scheme also offers a discounted rate of interest by 0.50% in case the amount of loan is more than ₹2 lakhs.");
				break;
		case 5: printf("\n5. Bharatiya Mahila Bank Business Loan\nThis loan is a support system for budding women entrepreneurs looking to start new ventures in the fields of the retail sector, loan against property, MICRO loans, and SME loans. The maximum loan amount under this loan goes up to ₹20 crores in case of manufacturing industries and also a concession is available to the extent of 0.25% on the interest rate and interest rates usually range from 10.15% and higher. Additionally, under the Credit Guarantee Fund Trust for Micro and Small Enterprises (CGTMSE), there is no requirement of collateral security for a loan of up to ₹1 crore.");
				break;
		case 6: printf("\n6. Dena Shakti Scheme\nThis scheme is provided by Dena bank to those women entrepreneurs in the fields of agriculture, manufacturing, micro-credit, retail stores, or small enterprises; who are in need of financial assistance. The interest rate is also decreased by 0.25% along with the maximum loan amount being ₹20 lakhs for retail trade; education and housing whereas ₹50,000 under the microcredit.");
				break;
		case 7: printf("\n7. Udyogini Scheme\nThis scheme is offered by Punjab and Sind Bank so as to provide women entrepreneurs involved in Agriculture, retail and small business enterprises to get loans for business at flexible terms and concessional interest rates. The maximum amount of loan under this scheme for women between the age bracket of 18-45 years is ₹1 lakhs but your family income is also taken into consideration and is set at ₹45,000 per annum for SC/ST women.");
				break;
		case 8: printf("\n8. Cent Kalyani Scheme\nThe scheme is offered by the Central Bank of India with the aim of supporting women in starting a new venture or expanding or modifying an existing enterprise. This loan can be availed by women who are involved in village and cottage industries, micro, small and medium enterprises, self-employed women, agriculture and allied activities, retail trade, and government-sponsored programs. This scheme requires no collateral security or guarantor and charges no processing fees. And the maximum amount that can be granted under the scheme is Rs. 100 lakhs.");
				break;
		case 9: printf("\n9. Mahila Udyam Nidhi Scheme\nThis scheme is launched by Punjab National Bank and aims at supporting the women entrepreneurs involved in the small scale industries by granting them soft loans that can be repaid over a period of 10 years. Under this scheme there are different plans for beauty parlors, day care centres, purchase of auto rickshaws, two-wheelers, cars, etc. the maximum amount granted under this scheme is ₹10 lakhs and the interest depends upon the market rates.");
				break;
		case 10: printf("\n10. Mudra Yojana Scheme For Women\nThis scheme has been launched by the Govt. of India for individual women wanting to start small new enterprises and businesses like beauty parlors, tailoring units, tuition centres, etc. as well as a group of women wanting to start a venture together. The loan doesn’t require any collateral security and can be availed as per 3 schemes –\ni. Shishu – loan amount is limited to ₹50,000 and can be availed by those businesses that are in their initial stages.\nii. Kishor – loan amount ranges between ₹50,000 and ₹5 lakhs and can be availed by those who have a well-established enterprise.\niii. Tarun – loan amount is ₹10 lakhs and can be availed by those businesses that are well established but require further funds for the purpose of expansion.\nIf the loan is granted, a Mudra card will be given to you which functions the same way as a credit card however the funds available are limited to 10% of the loan amount granted to you.");
				break;
		case 11: printf("\n11. Orient Mahila Vikas Yojana Scheme\nThis scheme is provided by Oriental Bank of Commerce to those women who hold a 51% share capital individually or jointly in a proprietary concern. No collateral security is required for loans of ₹10 lakhs up to ₹25 lakhs in case of small-scale industries and the period of repayment is 7 years. A concession on the interest rate of up to 2% is given.");
				break;
		case 12: printf("\n12. Multiplier Grants Scheme (MGS) for IT Research and Development\nLaunched by Department of Electronics and Information Technology (DeitY), MGS has been launched to ‘encourage collaborative R&D between industry and academics/ R&D institutions for development of products and packages. This startup scheme is valid till March 31st, 2020, and have a corpus of Rs 36 crore for Startups, incubator/academia/accelerators engaged in electronics and information technology domain. Applicable Industries: Artificial Intelligence, Technology, Hardware, Internet of Things, IT Services, Enterprise Software, Analytics.");
				break;
		case 13: printf("\n13. Modified Special Incentive Package Scheme (M-SIPS)\nLaunched by Department of Electronics and Information Technology (DeitY) and supported by Center for Development of Advanced Computing or CDAC, M-SIPS aims to ‘promote large-scale manufacturing in the Electronic System Design and Manufacturing (ESDM) sector. Besides infusing the startups with funds for expansion, M-SIPS will also provide subsidy up to 25% in establishing offices, research centers in SEZs, all over the nation. Applicable Industries: IT Hardware, Medical-tech, Solar Power, Automobiles, Healthcare, Semiconductors, Processors/Electronica, LEDs, LCDs, Avionics, Industrial Electronics, Nano-Electronics, Biotech, Strategic Electronics, Telecom and more.");
				break;
		case 14: printf("\n14. The Venture Capital Assistance Scheme\nLaunched in 2012 by Small Farmers’ Agri-Business Consortium (SFAC), this special scheme aims to assist agriculture based entrepreneurs to kickstart their agri-business. SFAC has tied up with 42 banks, which help them to disperse interest-free loans to farmers (individuals/groups), partnership firms, self-help groups, agriculture pass out/graduates, agri-preneurs, producer groups, and companies.");
				break;
		case 15: printf("\n15. Credit Guarantee\nCredit Guarantee Fund Trust for Micro and Small Enterprises (CGTMSE) has launched this unique Government scheme to help assist retailers, educational institutes, self-help groups, farmers and SMEs. Basically, the Credit Guarantee scheme has been launched to smoothen credit delivery system, as guarantee cover up to 85% is provided to the SMEs for loans up to Rs 5 lakh.");
				break;
		case 16: printf("\n16. Raw Material Assistance\nNational Small Industries Corporation or NSIC has launched Raw Material Assistance scheme, which aims to assist manufacturers and MSMEs with procuring raw materials, both indigenous & imported. As per the Government Schemes helps the manufacturer’s to focus on the quality of their products, as they can avail low-interest loans and financial help to get raw materials.");
				break;
		case 17: printf("\n17. E-NAM\nNational Agriculture Market (eNAM) is a pan-India electronic trading portal which networks the existing APMC mandis to create a unified national market for agricultural commodities. Small Farmers Agribusiness Consortium (SFAC) is the lead agency for implementing eNAM under the aegis of Ministry of Agriculture and Farmers' Welfare, Government of India.\nVision\nTo promote uniformity in agriculture marketing by streamlining of procedures across the integrated markets, removing information asymmetry between buyers and sellers and promoting real time price discovery based on actual demand and supply.\nMission\nIntegration of APMCs across the country through a common online market platform to facilitate pan-India trade in agriculture commodities, providing better price discovery through transparent auction process based on quality of produce along with timely online payment.");
				break;
		case 18: printf("\n18. National Mission For Sustainable Agriculture (NMSA)\nNational Mission for Sustainable Agriculture (NMSA) has been formulated for enhancing agricultural productivity especially in rainfed areas focusing on integrated farming, water use efficiency, soil health management and synergizing resource conservation. NMSA will cater to key dimensions of 'Water use efficiency', 'Nutrient Management' and 'Livelihood diversification' through adoption of sustainable development pathway by progressively shifting to environmental friendly technologies, adoption of energy efficient equipments, conservation of natural resources, integrated farming, etc.");
				break;
		case 19: printf("\n19. Paramparagat Krishi Vikas Yojana (PKVY)\nThe Paramparagat Krishi Vikas Yojana (PKVY), an initiative to promote organic farming in the country, was launched by the NDA government in 2015. According to the scheme, farmers will be encouraged to form groups or clusters and take to organic farming methods over large areas in the country.\nThe aim is to form 10,000 clusters over the next three years and bring about five lakh acres of agricultural area under organic farming. The government also intends to cover the certification costs and promote organic farming through the use of traditional resources. To avail the scheme, each cluster or group must have 50 farmers willing to take up organic farming under the PKVY and possess a total area of at least 50 acres. Each farmer enrolling in the scheme will be provided INR 20,000 per acre by the government spread over three years time.");
				break;
		case 20: printf("\n20. Pradhan Mantri Fasal Bima Yojana (PMFBY)\nPradhan Mantri Fasal Bima Yojana (PMFBY) is the government sponsored crop insurance scheme that integrates multiple stakeholders on a single platform.\nObjectives\n1. To provide insurance coverage and financial support to the farmers in the event of failure of any of the notified crop as a result of natural calamities, pests & diseases.\n2. To stabilise the income of farmers to ensure their continuance in farming.\n3. To encourage farmers to adopt innovative and modern agricultural practices.\n4. To ensure flow of credit to the agriculture sector.");
				break;
		case 21: printf("\n21. Gramin Bhandaran Yojna\nObjective of this Scheme:\nCreate scientific storage capacity with allied facilities in rural areas.\nTo meet the requirements of farmers for storing farm produce, processed farm produce and agricultural inputs.\nPromotion of grading, standardization and quality control of agricultural produce to improve their marketability.\nPrevent distress sale immediately after harvest by providing the facility of pledge financing and marketing credit by strengthening agricultural marketing infrastructure in the country.");
				break;
		case 22: printf("\n22. Livestock insurance Scheme\nThis scheme aims to provide protection mechanism to the farmers and cattle rearers against any eventual loss of their animals due to death and to demonstrate the benefit of the insurance of livestock to the people and popularize it with the ultimate goal of attaining qualitative improvement in livestock and their products.");
				break;
		case 23: printf("\n23. Scheme on Fisheries Training and Extension\nIt was launched to provide training for fishery sector so as to assist in undertaking fisheries extension programmes effectively.");
				break;
		case 24: printf("\n24. National Scheme on Welfare of Fishermen\nThis scheme was launched to provide financial assistance to fishers for construction of house, community hall for recreation and common working place. It also aims to install tube-wells for drinking water and assistance during lean period through saving cum relief component.");
				break;
		case 25: printf("\n25. Micro Irrigation Fund (MIF)\nThe government approved a dedicated Rs5,000 crore fund to bring more land area under micro-irrigation as part of its objective to boost agriculture production and farmers income. The fund has been set up under NABARD, which will provide this amount to states on concessional rate of interest to promote micro-irrigation, which currently has a coverage of only 10 million hectares as against the potential of 70 million hectares.");
				break;
		case 26: printf("\n26. Pradhan Mantri Krishi Sinchai Yojana (PMKSY)\nHar Khet ko Pani Prime Minister Krishi Sinchayee Yojana Government of India is committed to accord high priority to water conservation and its management. To this effect Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) has been formulated with the vision of extending the coverage of irrigation 'Har Khet ko pani' and improving water use efficiency 'More crop per drop' in a focused manner with end to end solution on source creation, distribution, management, field application and extension activities.");
				break;
		case 27: printf("\n27. Sarva Shiksha Abhiyan :\nAn inclusive scheme for imparting education to all\nThe Government of India has launched many projects to promote the schemes of teaching and devices of training throughout nation since the year 2000. All the state governments are being provided proper guidelines and financial assistance. New educational institutions are being established with the construction of school buildings, supplementary classrooms and laboratories play grounds, safe drinking water, toilets etc. Employment of regular and well qualified teaching and official staff is very essential and is being taken care of. The students are being given assistance of free textbooks, uniforms, sports’ equipments and support for improving learning under the Sarva Shiksha Abhiyan Scheme.");
				break;
		case 28: printf("\n28. Rashtriya Madhyamik Shiksha Abhiyan (RMSA) :\nRashtriya Madhyamik Shiksha Abhiyan (RMSA) Programme has been projected by Government of India since March, 2009, to improve upon the accessibility and quality of secondary education. This plan has raised the rate of enrollment from 52% during 2005-2006 to about 75%. The implementation of this scheme targets discarding barrier of gender, caste and creed, socio-economic and disability fence and also gives universal reach to secondary level education by the present year of 2017.");
				break;
		case 29: printf("\n29. National Scheme of Incentives to Girls for Secondary Education\nThe central government of India has taken an extraordinary decision to enhance the enrollment of young girls (in the age group of 14 to 18 years) at secondary stage. This centrally sponsored scheme projected w.e.f. May, 2008, provides encouragement to girls to progress for secondary education and beyond. National Scheme of Incentives to Girls for Secondary Education Website.");
				break;
		case 30: printf("\n30. Saakshar Bharat Mission\nSaakshar Bharat is a Program was designed and implemented in the year 2009 with an important motif of raising the national literacy level to 80 percent. Higher concentration was laid on educating adult women so that the gap between rate of literacy for females and males should not be more than 10 percent under the objectives of Saakshar Bharat Mission this is nice approach in context to 2017. More so, another aspect of scheme involved the overall promotion of Reading, Writing and Arithmetic (3’ R). Saakshar Bharat Mission Prerak salary is as per the norms of the Government.");
				break;
		
	}
	printf("\npress 0 to continue, any other key to exit\n");
	scanf("%d", &p);
}