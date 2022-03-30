Action()
{

	// SELECT YOUR ENVIRONMENT
	
	// PRODUCTION ENVIRONMENT:
	lr_save_string("www.microfocus.com", "EnvURL");
		
	// STAGING ENVIRONMENT:
	//lr_save_string("www.staging-microfocus.com", "EnvURL");
	
	lr_save_timestamp("pTS", LAST);
	
	web_url("AUT", 
		"URL=https://{EnvURL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Mode=HTTP", 
		LAST);

	return 0;
}