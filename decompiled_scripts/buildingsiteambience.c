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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	if (unk_0xC11469DCA6FC3BB5(67))
	{
		if (unk_0x84E8E29EBD4A46D2() != 2)
		{
			func_4(19);
		}
		func_3();
	}
	func_2(19);
	unk_0xCEA4E87102552C46(1);
	while (!unk_0x7BC40F912450F8F4("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x056EEE594CF5D9BA(-147f, -1005f, 28f);
	while (func_1(70))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_4(19);
	func_3();
}

int func_1(int iParam0)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97353.f_7341.f_99.f_58[iParam0];
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
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

void func_3()
{
	unk_0x4A9A3B22FEE42DA6();
	unk_0xA056824FDB80EA80();
	unk_0x5E8B6D17FF91CD59();
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
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iVar0], iVar1))
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_7341.f_99.f_217[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

