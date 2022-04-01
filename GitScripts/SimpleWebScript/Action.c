Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	lr_start_transaction("Homepage");
	
	// web_reg_find("Text={searchTerm}", LAST);

	web_url("www.hpe.com", 
		"URL=https://www.hpe.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Homepage", LR_AUTO);


	lr_think_time(10);


	lr_start_transaction("Login");

	web_url("www.hpe.com", 
		"URL=https://www.hpe.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Login", LR_AUTO);

	return 0;
}