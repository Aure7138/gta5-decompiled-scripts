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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0xD4BE58A7E3E102AC(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				uLocal_46 = unk_0x1FAFE9BB9D8960C1("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0x08EA887200715AD9(uLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0x2339A26AEFD8D159(uLocal_46, "SET_MISSION_TITLE", ScriptParam_0.f_0, ScriptParam_0.f_1, 0, 0, 0);
				unk_0xB7C49D7D97A4310B(uLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_0.f_2, ScriptParam_0.f_2, ScriptParam_0.f_2, -1082130432, -1082130432);
				if (ScriptParam_0.f_5.f_1 != -1f && !unk_0x79FCE4565761C974(ScriptParam_0.f_5.f_2))
				{
					unk_0x97530F0FA2B1E05E(uLocal_46, "SET_TOTAL", unk_0xBBDA792448DB5A89(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f, ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0xB7C49D7D97A4310B(uLocal_46, "SET_MEDAL", unk_0xBBDA792448DB5A89(ScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xB7C49D7D97A4310B(uLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_0.f_66 + 1)
				{
					unk_0xF1BC72CEC2746995(uLocal_46, "SET_DATA_SLOT");
					unk_0xD02F24F3E2DB263A(ScriptParam_0.f_9[iVar0 /*7*/]);
					unk_0xD02F24F3E2DB263A(ScriptParam_0.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0xD02F24F3E2DB263A(2);
						unk_0xD02F24F3E2DB263A(0);
						unk_0xD02F24F3E2DB263A(0);
						unk_0x759AC38FBC6CCA9E("STRING");
						unk_0xC5B1209EEC9E6603(unk_0xF34EE736CF047844((ScriptParam_0.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0x81019766FF500CCA();
						if (!unk_0x79FCE4565761C974(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0x79FCE4565761C974(ScriptParam_0.f_9[iVar0 /*7*/].f_5) && !unk_0x79FCE4565761C974(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x759AC38FBC6CCA9E(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
							unk_0xA89C789CC9FEF523(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
							unk_0x81019766FF500CCA();
						}
					}
					else
					{
						unk_0xD02F24F3E2DB263A(ScriptParam_0.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0xD435957F6275B434(ScriptParam_0.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x759AC38FBC6CCA9E("NUMBER");
							unk_0x10D1E89D0C3D279B(ScriptParam_0.f_9[iVar0 /*7*/].f_3, 2);
							unk_0x81019766FF500CCA();
						}
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0xD435957F6275B434(ScriptParam_0.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x759AC38FBC6CCA9E("NUMBER");
							unk_0x10D1E89D0C3D279B(ScriptParam_0.f_9[iVar0 /*7*/].f_4, 2);
							unk_0x81019766FF500CCA();
						}
						if (!unk_0x79FCE4565761C974(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0x79FCE4565761C974(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							func_18(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0xAC7C2DE2DDC7AF03();
					iVar0++;
				}
				if (ScriptParam_0.f_5 != 0 && !unk_0x79FCE4565761C974(ScriptParam_0.f_5.f_2))
				{
					unk_0xF1BC72CEC2746995(uLocal_46, "SET_TOTAL");
					unk_0xD02F24F3E2DB263A(ScriptParam_0.f_5);
					if (!unk_0x79FCE4565761C974(ScriptParam_0.f_5.f_3))
					{
						func_18(ScriptParam_0.f_5.f_3);
					}
					else
					{
						unk_0xD435957F6275B434(ScriptParam_0.f_5.f_1);
					}
					func_18(ScriptParam_0.f_5.f_2);
					unk_0xAC7C2DE2DDC7AF03();
				}
				unk_0xF1BC72CEC2746995(uLocal_46, "DRAW_MENU_LIST");
				unk_0xAC7C2DE2DDC7AF03();
				func_12(1);
				func_9(&uLocal_47);
				if (!func_8(Global_111560.f_19092, 4096))
				{
					func_6(&(Global_111560.f_19092), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&uLocal_47) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f) || unk_0x260395BA7F0C83CB()) || Global_30880)
				{
					func_19();
				}
				else
				{
					func_1(1);
					unk_0x1C65AC18AFC2CA39(uLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0xE903ECDFE48824C4(10))
					{
						unk_0x0AF55029F939BA65(10);
					}
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_19();
}

void func_1(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

float func_2(var uParam0)
{
	if (func_5(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x9B35D07DCD0F0B43());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x393E9918BC37548A())
	{
		iVar2 = unk_0x169A8AC9F93C2727();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9B35D07DCD0F0B43()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	if (!func_5(uParam0))
	{
		func_10(uParam0);
	}
}

void func_10(var uParam0)
{
	func_11(uParam0, 0f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_3(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - fParam1);
	unk_0xA1E7A40E1F56E511(uParam0, 1);
	unk_0x3B76114EC84D5812(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

int func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_16()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

bool func_17()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_18(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

void func_19()
{
	unk_0x749CA887CB0AFEC9(&uLocal_46);
	Global_30880 = 0;
	func_1(0);
	unk_0x9C9E32388A7886A2();
}

