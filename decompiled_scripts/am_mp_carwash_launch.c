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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	struct<3> Var3;
	int iVar6;
	
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
	sLocal_22 = "NULL";
	fLocal_25 = 80f;
	fLocal_26 = 140f;
	fLocal_27 = 180f;
	fLocal_30 = 0f;
	fLocal_34 = -0.0375f;
	fLocal_35 = 0.17f;
	iLocal_38 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	Var3 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x968BF1C2C695B61A(joaat("am_mp_carwash_launch")) > 1)
	{
		unk_0xC23A229F78DAD92A();
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		unk_0x15378F974E08496E();
		unk_0xE6E19E3BBABCBC24(0);
	}
	else
	{
		unk_0xC23A229F78DAD92A();
	}
	if (Global_2621550)
	{
		if (unk_0x968BF1C2C695B61A(131838674) == 0)
		{
			unk_0x0A3E2A43DEA2DB9D(131838674);
			while (!unk_0x55D66FAE859776D2(131838674))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(131838674, &ScriptParam_0, 23, 1424);
		}
		unk_0xC23A229F78DAD92A();
	}
	if (func_8(unk_0x81873881071CD9FE()))
	{
	}
	iVar6 = 0;
	while (iVar6 == 0)
	{
		if (((func_5(unk_0x1329891157A54C63(), 1) || func_4()) || !func_3(unk_0x1329891157A54C63())) || func_2())
		{
			iVar6 = 0;
		}
		else
		{
			iVar6 = 1;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xB7A628320EFF8E47(Var3, func_1(157)) < unk_0xB7A628320EFF8E47(Var3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = unk_0x48E480685981C7D4();
	iVar1 = unk_0x8DAF7A748E41AD46(sVar2);
	if (unk_0x968BF1C2C695B61A(iVar1) == 0)
	{
		unk_0xE0013E74AB6963DC(sVar2);
		while (!unk_0x06D4A1BE3DF77306(sVar2))
		{
			unk_0xE0013E74AB6963DC(sVar2);
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x48E480685981C7D4() > iVar0 + 20000)
			{
				unk_0xC23A229F78DAD92A();
			}
		}
		if (unk_0x06D4A1BE3DF77306(sVar2))
		{
			unk_0xE81651AD79516E48(sVar2, 1424);
			unk_0xD25F9F5A80824C77(sVar2);
		}
	}
	unk_0xC23A229F78DAD92A();
}

Vector3 func_1(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25250[iVar0 /*23*/][0 /*3*/];
}

var func_2()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

bool func_3(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_128, 6);
}

int func_4()
{
	int iVar0;
	
	iVar0 = Global_2422670;
	if (unk_0x236D8AD7EE179F46(Global_1605110[iVar0 /*33*/], 0) && Global_1605110[iVar0 /*33*/].f_9 == 2)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_6(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_6(int iParam0)
{
	return func_7(iParam0);
}

var func_7(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

bool func_8(var uParam0)
{
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	return !unk_0x930F8FBB8E9537CC(uParam0);
}

