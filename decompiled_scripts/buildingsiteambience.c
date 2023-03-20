#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	if (unk_0x524AF15206846700(67))
	{
		if (unk_0x998ABBAD6623E9BD() != 2)
		{
			func_4(19);
		}
		func_3();
	}
	func_2(19);
	unk_0x229773841C1D2E13(1);
	while (!unk_0x8D888C6E405B18D7("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x0F51FE16320D4174(-147f, -1005f, 28f);
	while (func_1(70))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_4(19);
	func_3();
}

int func_1(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x26545538B51562AD(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_3()
{
	unk_0xE57736DF156A23CE();
	unk_0x23B1DA900D65FF0C();
	unk_0x7C3AA2D27E16E2AD();
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

