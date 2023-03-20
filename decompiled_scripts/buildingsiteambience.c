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
	if (unk_0xD63E63DFACCEB80E(67))
	{
		if (unk_0x3EFB3EBE849BDD7F() != 2)
		{
			func_4(19);
		}
		func_3();
	}
	func_2(19);
	unk_0x12988F278DF9017C(1);
	while (!unk_0x0B3C0074C96B047B("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC2F963747405AF25(-147f, -1005f, 28f);
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
	return Global_97358.f_7341.f_99.f_58[iParam0];
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
	if (unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

void func_3()
{
	unk_0x6B58B7E3B16C7FA9();
	unk_0xF0F2723B5E3BA442();
	unk_0xE60DEFFB2A853900();
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
	if (unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iVar0], iVar1))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_7341.f_99.f_217[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

