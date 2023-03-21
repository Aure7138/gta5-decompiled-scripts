#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xBCA819F9975BEDFA(83))
	{
		func_10();
	}
	unk_0x7314960FF9575FFA(0);
	unk_0x21E7933CCC7B3724(&(Global_101700.f_8975.f_25), 1);
	func_7();
	unk_0x97225621CA125FF2(1);
	if (!unk_0x25BD4C26D84038CD())
	{
		unk_0x50FD1894558DE186(0);
	}
	iLocal_0 = unk_0xB50E108F09B8EC7A("OPENING_CREDITS");
	while (!unk_0xFF84A94166FBB351(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x25BD4C26D84038CD())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x94E3E074F38DF86C() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x1B76B77EDF24A933())
	{
		func_7();
		if (!unk_0x48B8265059381CD0(Global_101700.f_8975.f_25, 1))
		{
			unk_0x90101FEE397F4A7E(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x94E3E074F38DF86C() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x94E3E074F38DF86C() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x94E3E074F38DF86C() > iLocal_1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_8975.f_25), 1);
				if (unk_0x8DC7318AEB3586A1() || unk_0xEF4E5E47AF0D4480())
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
	Global_91530 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_91530.f_7 = iParam0;
	Global_91530.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xEAC9A8A194DF8F91(iLocal_0, "HIDE_LOGO");
	unk_0xDCEB60B79ECB219E("STRING");
	unk_0xBAB00B98D1E61BEE(sParam0);
	unk_0x1798EBF9408190D3();
	unk_0x44983883E630A945();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xEAC9A8A194DF8F91(iLocal_0, "SHOW_LOGO");
	unk_0xDCEB60B79ECB219E("STRING");
	unk_0xBAB00B98D1E61BEE(sParam0);
	unk_0x1798EBF9408190D3();
	unk_0x584CF9CAE83942E5(fParam1);
	unk_0x584CF9CAE83942E5(fParam2);
	unk_0x584CF9CAE83942E5(fParam3);
	unk_0x584CF9CAE83942E5(fParam4);
	unk_0x584CF9CAE83942E5(fParam5);
	unk_0x584CF9CAE83942E5(fParam6);
	unk_0x584CF9CAE83942E5(fParam7);
	unk_0x44983883E630A945();
}

void func_7()
{
	unk_0x406D7A3B92830257();
	unk_0xD1BB2AD73E7FC3A7(2, 199, 1);
	unk_0x4ED9ECF3735CB826(7);
	func_8();
}

void func_8()
{
	unk_0xF6EFB598FD123B39();
	func_9();
}

void func_9()
{
	Global_17151.f_134 = 1;
}

void func_10()
{
	unk_0xEB79FECD9022AAF0(&(Global_101700.f_8975.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x33CBABDFE7B17924(&iLocal_0);
	}
	unk_0x4ED9ECF3735CB826(4);
	unk_0x97225621CA125FF2(0);
	unk_0x7314960FF9575FFA(1);
	unk_0x921053BAF754303D();
}

