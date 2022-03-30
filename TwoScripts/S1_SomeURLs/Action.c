Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	lr_start_transaction("S1_T1_Google");

	// web_reg_find("Text=search", LAST);

	web_url("www.google.com", 
		"URL=https://www.google.com/ncr", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S1_T1_Google", LR_AUTO);


	lr_think_time(10);


	lr_start_transaction("S1_T2_MicroFocus");

	//web_reg_find("Text=enterprise products", LAST);

	web_url("www.microfocus.com", 
		"URL=https://www.microfocus.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S1_T2_MicroFocus", LR_AUTO);


	lr_think_time(10);


	lr_start_transaction("S1_T3_Dell");

	//web_reg_find("Text=Desktops", LAST);

	web_url("www.dell.com", 
		"URL=https://www.dell.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S1_T3_Dell", LR_AUTO);

	return 0;
}