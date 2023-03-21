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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
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
	iLocal_17 = -1;
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	Var3 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x7832F791572D5809(joaat("am_mp_carwash_launch")) > 1)
	{
		unk_0xBEE2834559A8897A();
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		unk_0x11103F6657466FF8();
		unk_0x0BDEAF4CD9510F40(0);
	}
	else
	{
		unk_0xBEE2834559A8897A();
	}
	if (Global_2621550)
	{
		if (unk_0x7832F791572D5809(131838674) == 0)
		{
			unk_0x089FF988344A3611(131838674);
			while (!unk_0x388802672AA51883(131838674))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(131838674, &ScriptParam_0, 23, 1424);
		}
		unk_0xBEE2834559A8897A();
	}
	if (func_8(unk_0x0031992CA618A445()))
	{
	}
	iVar6 = 0;
	while (iVar6 == 0)
	{
		if (((func_5(unk_0x3D35F9864E4640B1(), 1) || func_4()) || !func_3(unk_0x3D35F9864E4640B1())) || func_2())
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
	iVar0 = unk_0x31CD6E9F83C10233();
	iVar1 = unk_0x50B7853132D8438E(sVar2);
	if (unk_0x7832F791572D5809(iVar1) == 0)
	{
		unk_0xC397DDF7C577BD55(sVar2);
		while (!unk_0xBE2C96D0FF6F8282(sVar2))
		{
			unk_0xC397DDF7C577BD55(sVar2);
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x31CD6E9F83C10233() > iVar0 + 20000)
			{
				unk_0xBEE2834559A8897A();
			}
		}
		if (unk_0xBE2C96D0FF6F8282(sVar2))
		{
			unk_0xE81651AD79516E48(sVar2, 1424);
			unk_0xADA0A4C226503297(sVar2);
		}
	}
	unk_0xBEE2834559A8897A();
}

Vector3 func_1(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25533[iVar0 /*23*/][0 /*3*/];
}

var func_2()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 0);
}

bool func_3(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_140, 6);
}

int func_4()
{
	int iVar0;
	
	iVar0 = Global_2434915;
	if (unk_0x2A3398C6222EB190(Global_1622678[iVar0 /*35*/].f_13, 0) && Global_1622678[iVar0 /*35*/].f_22 == 2)
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
	if (Global_1593076[iParam0 /*647*/] == -1)
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
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

bool func_8(var uParam0)
{
	if (!unk_0x76B3C79DE564AFC6(uParam0))
	{
		return 0;
	}
	return !unk_0x7A6C051038031EFA(uParam0, 0);
}

