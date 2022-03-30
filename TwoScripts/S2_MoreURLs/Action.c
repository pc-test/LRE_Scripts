Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	lr_start_transaction("S2_T1_Apple");

	// web_reg_find("Text=iPhone", LAST);

	web_url("www.apple.com", 
		"URL=https://www.apple.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S2_T1_Apple", LR_AUTO);


	lr_think_time(10);


	lr_start_transaction("S2_T2_Microsoft");

	// web_reg_find("Text=Surface", LAST);

	web_url("www.microsoft.com", 
		"URL=https://www.microsoft.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S2_T2_Microsoft", LR_AUTO);


	lr_think_time(10);


	lr_start_transaction("S2_T3_HPE");

	// web_reg_find("Text=Surface", LAST);

	web_url("www.hpe.com", 
		"URL=https://www.hpe.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S2_T3_HPE", LR_AUTO);
	
	return 0;
}
