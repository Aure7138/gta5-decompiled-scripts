#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x2170E7BC25114A22(83))
	{
		func_10();
	}
	unk_0x4D3AB35C1BAB7738(0);
	unk_0x4EA098C870B73AB7(&(Global_101652.f_8959.f_25), 1);
	func_7();
	unk_0x82047209FE8411F9(1);
	if (!unk_0x7E3640C27B17457C())
	{
		unk_0x0FBCFDA15A0FB2D5(0);
	}
	iLocal_0 = unk_0x542F16A736FAC9A6("OPENING_CREDITS");
	while (!unk_0x52622CA85B1C304B(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x7E3640C27B17457C())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x84A97C70FFDEC0C8() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x30A37E559346657F())
	{
		func_7();
		if (!unk_0xF44A5E894FE76438(Global_101652.f_8959.f_25, 1))
		{
			unk_0x131F832AD6923854(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x84A97C70FFDEC0C8() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x84A97C70FFDEC0C8() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x84A97C70FFDEC0C8() > iLocal_1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_8959.f_25), 1);
				if (unk_0xEA51091322A50774() || unk_0x2D337DD29A7ABD30())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_10();
}

void func_1()
{
	Global_91525 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_91525.f_7 = iParam0;
	Global_91525.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x3B6EF6403E3F1CAC(iLocal_0, "HIDE_LOGO");
	unk_0x0BBDB952BE56A9DF("STRING");
	unk_0x4C51E4FBCD1D8830(sParam0);
	unk_0xCB329F559FA7DCD0();
	unk_0xBBAAC5B2437ACF2A();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x3B6EF6403E3F1CAC(iLocal_0, "SHOW_LOGO");
	unk_0x0BBDB952BE56A9DF("STRING");
	unk_0x4C51E4FBCD1D8830(sParam0);
	unk_0xCB329F559FA7DCD0();
	unk_0x573CAEB6F4A4E750(fParam1);
	unk_0x573CAEB6F4A4E750(fParam2);
	unk_0x573CAEB6F4A4E750(fParam3);
	unk_0x573CAEB6F4A4E750(fParam4);
	unk_0x573CAEB6F4A4E750(fParam5);
	unk_0x573CAEB6F4A4E750(fParam6);
	unk_0x573CAEB6F4A4E750(fParam7);
	unk_0xBBAAC5B2437ACF2A();
}

void func_7()
{
	unk_0x517E18EC5A3C4790();
	unk_0x2A29D86854DC4BC0(2, 199, 1);
	unk_0xCF1B9EC03D5AB61E(7);
	func_8();
}

void func_8()
{
	unk_0x71FDE8325C7F02BE();
	func_9();
}

void func_9()
{
	Global_17151.f_134 = 1;
}

void func_10()
{
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_8959.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x4292FC2ED4EC4212(&iLocal_0);
	}
	unk_0xCF1B9EC03D5AB61E(4);
	unk_0x82047209FE8411F9(0);
	unk_0x4D3AB35C1BAB7738(1);
	unk_0x01DFCA3621B68C4A();
}

