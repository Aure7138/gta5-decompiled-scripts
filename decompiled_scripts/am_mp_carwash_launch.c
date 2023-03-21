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
	if (unk_0x09952BA662A7629B(joaat("am_mp_carwash_launch")) > 1)
	{
		unk_0xA232817B0B36F2E5();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0x945226432ACF160F();
		unk_0xAC09235E2065C253(0);
	}
	else
	{
		unk_0xA232817B0B36F2E5();
	}
	if (Global_2621550)
	{
		if (unk_0x09952BA662A7629B(131838674) == 0)
		{
			unk_0xA9515FF24FA319E3(131838674);
			while (!unk_0x9C29C619BDECB0C6(131838674))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(131838674, &ScriptParam_0, 23, 1624);
		}
		unk_0xA232817B0B36F2E5();
	}
	if (func_8(unk_0x2A5EB8B0FE590B91()))
	{
	}
	iVar6 = 0;
	while (iVar6 == 0)
	{
		if (((func_5(unk_0x0FFED3E94261A832(), 1) || func_4()) || !func_3(unk_0x0FFED3E94261A832())) || func_2())
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
	iVar0 = unk_0x3732B96D7A1859B4();
	iVar1 = unk_0xCAEDBF30E3EA14FC(sVar2);
	if (unk_0x09952BA662A7629B(iVar1) == 0)
	{
		unk_0x5C727A4B63D5C338(sVar2);
		while (!unk_0x7AE6E004B57B6658(sVar2))
		{
			unk_0x5C727A4B63D5C338(sVar2);
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x3732B96D7A1859B4() > iVar0 + 20000)
			{
				unk_0xA232817B0B36F2E5();
			}
		}
		if (unk_0x7AE6E004B57B6658(sVar2))
		{
			unk_0xE81651AD79516E48(sVar2, 1624);
			unk_0x57667D0A25494543(sVar2);
		}
	}
	unk_0xA232817B0B36F2E5();
}

Vector3 func_1(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25533[iVar0 /*23*/][0 /*3*/];
}

var func_2()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

bool func_3(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 6);
}

int func_4()
{
	int iVar0;
	
	iVar0 = Global_2434604;
	if (unk_0xAA4F14DA15DB0B51(Global_1621674[iVar0 /*35*/].f_13, 0) && Global_1621674[iVar0 /*35*/].f_22 == 2)
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
	if (Global_1592456[iParam0 /*635*/] == -1)
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
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

bool func_8(var uParam0)
{
	if (!unk_0x2137828D03306CAF(uParam0))
	{
		return 0;
	}
	return !unk_0xA9A04898798AE9E6(uParam0, 0);
}

