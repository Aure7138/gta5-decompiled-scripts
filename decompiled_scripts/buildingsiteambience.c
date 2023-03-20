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
	if (unk_0x7547D7CF93115D6D(67))
	{
		if (unk_0x26AE414A8D829787() != 2)
		{
			func_4(19);
		}
		func_3();
	}
	func_2(19);
	unk_0xD19A0D6084034A69(1);
	while (!unk_0xDBB45AE299F05694("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x637E22A95F4846EE(-147f, -1005f, 28f);
	while (func_1(70))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_4(19);
	func_3();
}

int func_1(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
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
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
	return 1;
}

void func_3()
{
	unk_0x6B08A54AEE3B5574();
	unk_0x21FEE1ED00A9086E();
	unk_0x883793591E631A3B();
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
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

