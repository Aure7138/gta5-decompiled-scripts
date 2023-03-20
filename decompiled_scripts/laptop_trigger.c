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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar1;
	char* sVar2;
	var uVar3[25];
	bool bVar29;
	struct<3> Var30;
	int iVar33;
	struct<3> Var34;
	bool bVar37;
	int iVar38;
	int iVar39;
	bool bVar40;
	
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_45 = -1;
	uVar0 = uScriptParam_0;
	if (!unk_0x86CCCD2FAE9D5E65(uVar0))
	{
		unk_0xC23A229F78DAD92A();
	}
	if (unk_0x8D841F1DD3FA555F(3))
	{
		func_16();
		unk_0xC23A229F78DAD92A();
	}
	if (func_15(13) || func_15(14))
	{
		func_16();
		unk_0xC23A229F78DAD92A();
	}
	if (Global_31301)
	{
		func_16();
		unk_0xC23A229F78DAD92A();
	}
	if (Global_67716)
	{
		unk_0xC23A229F78DAD92A();
	}
	bVar1 = false;
	sVar2 = "tvscreen";
	bVar29 = true;
	Var30 = { unk_0xB6AE0DAE06D56288(uVar0, 1) - unk_0xC99223BD7E489FC6(uVar0) * Vector(0.6f, 0.6f, 0.6f) };
	Var30.f_2 = (Var30.f_2 + 0.5f);
	while (bVar29)
	{
		if (unk_0x86CCCD2FAE9D5E65(uVar0))
		{
			if (Global_1585029)
			{
				if (!bVar1)
				{
					iVar33 = unk_0x14B7103DBD149FFE(uVar0);
					if (iVar33 == joaat("prop_laptop_01a"))
					{
						unk_0x48ADCBD0499AD36B(unk_0xB6AE0DAE06D56288(uScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var34 = { unk_0x1FC13B3C61DF24B9(uVar0, 2) };
						uVar0 = unk_0xF364195A57BB7AE3(joaat("prop_laptop_lester2"), unk_0xB6AE0DAE06D56288(uVar0, 1), 0, 1, 0);
						unk_0x3A45EB0810EBE71C(uVar0, Var34, 2, 1);
						bVar1 = true;
					}
				}
			}
			if (unk_0x4B84C218090E2BF3(uVar0))
			{
				func_16();
				unk_0xC23A229F78DAD92A();
			}
		}
		if (((!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && unk_0x86CCCD2FAE9D5E65(uVar0)) && !unk_0x521385D8214D27C4()) && unk_0x7DF7DE8C76D7F346(unk_0xEC537F0C0E8265EE()))
		{
			if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0x74D4E5ACB4DAF9B8(uVar0))
			{
				bVar37 = false;
				iVar38 = unk_0x382F30F9319DA363(unk_0x81873881071CD9FE(), &uVar3, -1);
				iVar39 = 0;
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (!unk_0x930F8FBB8E9537CC(uVar3[iVar39]))
					{
						if (unk_0x0BAE7BE122182FA8(uVar3[iVar39], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar37 = true;
						}
						else if (unk_0x0BAE7BE122182FA8(uVar3[iVar39], "MP_COMMON_MISS", "HACK_LOOP", 3))
						{
							bVar37 = true;
						}
					}
					iVar39++;
				}
				if (Global_16)
				{
					bVar37 = true;
				}
				if ((((((((((!bVar37 && !func_14(0)) && !unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0)) && !func_13()) && unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Var30, 0.6f, 0.6f, 0.8f, 0, 1, 1)) && unk_0xDA30F533CC45C7AE(unk_0x81873881071CD9FE()) == unk_0xDA30F533CC45C7AE(iVar0)) && !unk_0x236D8AD7EE179F46(Global_2359301, 15)) && !func_12()) && !(Global_69020 && func_11())) && !(!Global_69020 && func_10())) && !(Global_69020 && unk_0x236D8AD7EE179F46(Global_1607808.f_14, 24)))
				{
					if (iLocal_45 == -1)
					{
						if (bVar1)
						{
							func_9(&iLocal_45, 1, "MPLA_BILL", 0, 0, 0);
						}
						else
						{
							func_9(&iLocal_45, 1, "BROWSEINPUTTRIG", 0, 0, 0);
						}
					}
					if (func_8(iLocal_45, 1))
					{
						if (iLocal_45 != -1)
						{
							func_6(&iLocal_45);
						}
						if (!bVar1)
						{
							func_5(0);
							if (!iLocal_46)
							{
								func_1();
								iLocal_46 = 1;
							}
							bVar40 = true;
							while (bVar40)
							{
								if (!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), unk_0xB6AE0DAE06D56288(iVar0, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_67713 = 1;
								}
								if (Global_67710 || Global_67713)
								{
									bVar40 = false;
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							while (Global_67710)
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							unk_0x4EDE34FBADD967A6(1000);
							iLocal_46 = 0;
						}
					}
				}
				else
				{
					if (iLocal_45 != -1)
					{
						func_6(&iLocal_45);
					}
					if (unk_0x86CCCD2FAE9D5E65(uScriptParam_0))
					{
						if (!unk_0xEBC80CF8CF0257A5(uScriptParam_0))
						{
							bVar29 = false;
						}
					}
				}
			}
			else if (iLocal_45 != -1)
			{
				func_6(&iLocal_45);
			}
		}
		else
		{
			if (iLocal_45 != -1)
			{
				func_6(&iLocal_45);
			}
			bVar29 = false;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (bVar1)
	{
		if (unk_0x65C3F2BC8E812C5B(sVar2))
		{
			unk_0xEDF7AB85BA8D981F(sVar2);
		}
	}
}

void func_1()
{
	if (func_4() || func_3())
	{
		func_2();
	}
}

void func_2()
{
	Global_2428865.f_630 = 1;
}

var func_3()
{
	return Global_2428865.f_609;
}

bool func_4()
{
	return unk_0x236D8AD7EE179F46(Global_2428865.f_2, 11);
}

void func_5(int iParam0)
{
	Global_67719 = iParam0;
	switch (Global_67719)
	{
		case 3:
			Global_67717 = 0;
			break;
		
		case 4:
			Global_67717 = 3;
			break;
	}
	if (unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_69020 && func_11())
	{
		return;
	}
	if (!Global_69020 && func_10())
	{
		return;
	}
	if (!unk_0x06D4A1BE3DF77306("appInternet"))
	{
		unk_0xE0013E74AB6963DC("appInternet");
	}
	while (!unk_0x06D4A1BE3DF77306("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 3584);
	unk_0xD25F9F5A80824C77("appInternet");
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_7(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_7(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x7DF7DE8C76D7F346(unk_0xEC537F0C0E8265EE()))
	{
		return 0;
	}
	if (func_14(0))
	{
		return 0;
	}
	if (unk_0x521385D8214D27C4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/] == 1 && Global_36143[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36143[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36143[iVar0 /*19*/].f_5 = 1;
			Global_36143[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36143[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36143[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0x968BF1C2C695B61A(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF33755A765033580())
	{
		if (!*iParam0 == -1)
		{
			func_6(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/] = 1;
			Global_36143[iVar0 /*19*/].f_1 = Global_36266;
			Global_36266++;
			Global_36143[iVar0 /*19*/].f_4 = 0;
			Global_36143[iVar0 /*19*/].f_17 = 0;
			Global_36143[iVar0 /*19*/].f_5 = 0;
			Global_36143[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36143[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36143[iVar0 /*19*/].f_6 = iParam3;
			Global_36143[iVar0 /*19*/].f_18 = unk_0x8F56512BDA9F6921();
			Global_36143[iVar0 /*19*/].f_7 = 0;
			Global_36143[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xB318FDA0D1ABDB20(sParam4))
			{
				Global_36143[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36143[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36143[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36143[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

var func_10()
{
	return Global_67711;
}

var func_11()
{
	return Global_1699204;
}

int func_12()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), -1) == unk_0x81873881071CD9FE())
		{
			return 1;
		}
	}
	return 0;
}

int func_13()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_16()
{
	if (iLocal_45 != -1)
	{
		func_6(&iLocal_45);
	}
}

