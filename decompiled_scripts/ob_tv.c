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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char cLocal_62[64] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (unk_0xD4BE58A7E3E102AC(2))
	{
		func_68();
	}
	if (unk_0xD4B321D9096B01FC(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_67();
		if (unk_0xD4B321D9096B01FC(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_66() && !func_65())) && !func_64(iLocal_43))
			{
				func_68();
			}
			if ((unk_0x16587C6F71675106() && unk_0xD2F18A1388CC0E5C() != 3) && unk_0x9995D24FB0AFE632() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (unk_0xFF7F17A26DDE7E1F(iScriptParam_0, 0))
			{
				func_68();
			}
			if (unk_0xA887AF38A5D654D0(iScriptParam_0))
			{
				if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
				{
					func_62();
					if (unk_0x35D31BEBAFD53DE6(iScriptParam_0) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_43 == 5)
							{
								if (func_58(18) == 1 && func_58(20) == 0)
								{
									uLocal_41 = unk_0x73F8CC0B0C5165E0(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x38A905E2EBBBFAA7(uLocal_41))
									{
										unk_0x356D713428EC2DCA(uLocal_41, 9);
									}
									unk_0x9C9E32388A7886A2();
								}
							}
							if (iLocal_43 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0xF7909C0B8EF9E847("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x42E1D2373042F69A(0);
								Global_30796[iLocal_43 /*11*/].f_2 = 0;
								Global_30796[iLocal_43 /*11*/].f_6 = 1;
								Global_30796[iLocal_43 /*11*/] = unk_0xBAC643F143880136(0, 2);
								Global_30796[iLocal_43 /*11*/].f_1 = 0;
								Global_30796[iLocal_43 /*11*/].f_4 = 0;
								Global_30796[iLocal_43 /*11*/].f_7 = 0;
								Global_30796[iLocal_43 /*11*/].f_8 = 0;
								Global_30796[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&uLocal_26);
								func_53();
								func_52();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x6ABAFD7C604ED364(iLocal_37) && unk_0x5E95611B21B292B0(iLocal_37, 1119092736))
							{
								if (func_44() || Global_30796[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_43(&iLocal_42);
							}
							break;
						
						case 2:
							func_53();
							if (!func_64(iLocal_43))
							{
								func_43(&iLocal_42);
								if (func_42("TV_HLP1"))
								{
									unk_0x0D23E3918F7AF11B(1);
								}
							}
							if (unk_0xD4B321D9096B01FC(iLocal_37))
							{
								if (!unk_0x0975E9E48EA2CC7B(iLocal_37))
								{
									unk_0x2BBEC4B37B923F4B(iLocal_37, 1, 0);
								}
							}
							if (unk_0xD4B321D9096B01FC(iLocal_39))
							{
								if (!unk_0x0975E9E48EA2CC7B(iLocal_39))
								{
									unk_0x2BBEC4B37B923F4B(iLocal_39, 1, 0);
								}
							}
							if (unk_0xD4B321D9096B01FC(iLocal_38))
							{
								if (unk_0x0975E9E48EA2CC7B(iLocal_38))
								{
									unk_0x2BBEC4B37B923F4B(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x2553916E420E8EF0(&cLocal_46, "NULL"))
							{
								unk_0x0E7DFCFC6E6D9A0C(&cLocal_46, 0);
							}
							unk_0x06706E4C88E16980(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0xD4B321D9096B01FC(iLocal_40))
							{
								unk_0x72BC228496D41F20(iLocal_40);
							}
							if (!func_64(iLocal_43))
							{
								if ((Global_30796[iLocal_43 /*11*/] == 3 || Global_30796[iLocal_43 /*11*/] == 2) || Global_30796[iLocal_43 /*11*/] == -1)
								{
									Global_30796[iLocal_43 /*11*/] = unk_0xBAC643F143880136(0, 2);
								}
								unk_0x19BB161DB3C4DBE2(Global_30796[iLocal_43 /*11*/]);
								unk_0xA60ED9E6322FC33E(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_30796[iLocal_43 /*11*/];
								iLocal_45 = Global_30796[iLocal_43 /*11*/].f_1;
								unk_0x2305B7531ECC2837(iLocal_44, func_41(iLocal_45), Global_30796[iLocal_43 /*11*/].f_9);
								unk_0x19BB161DB3C4DBE2(iLocal_44);
								if (Global_30796[iLocal_43 /*11*/].f_7)
								{
									Global_30796[iLocal_43 /*11*/].f_5 = 0;
									Global_30796[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_30796[iLocal_43 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_30796[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_30796[iLocal_43 /*11*/].f_7 && func_64(iLocal_43))
							{
								Global_30796[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_43))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (unk_0x5419F19FCF3A6315() == -1)
								{
									unk_0x19BB161DB3C4DBE2(Global_30796[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_38(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_30796[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_43(&iLocal_42);
							}
							Global_30796[iLocal_43 /*11*/].f_5 = 0;
							Global_30796[iLocal_43 /*11*/].f_4 = 0;
							Global_30796[iLocal_43 /*11*/].f_1 = 0;
							Global_30796[iLocal_43 /*11*/].f_2 = 0;
							Global_30796[iLocal_43 /*11*/].f_7 = 0;
							Global_30796[iLocal_43 /*11*/].f_8 = 0;
							Global_30796[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			unk_0x9C9E32388A7886A2();
		}
	}
	func_68();
	unk_0x9C9E32388A7886A2();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_30796[iLocal_43 /*11*/] = unk_0x5419F19FCF3A6315();
	}
	fLocal_30 = unk_0x780D45440FEEE179();
	unk_0x19BB161DB3C4DBE2(-1);
	func_4();
	if (unk_0x222F76006659B0EB(joaat("family5")) == 0)
	{
		if (!unk_0x2553916E420E8EF0(&cLocal_46, "NULL"))
		{
			unk_0x0E7DFCFC6E6D9A0C(&cLocal_46, 1);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x0D23E3918F7AF11B(1);
	}
	func_3();
	func_52();
	if (unk_0xD4B321D9096B01FC(iLocal_38))
	{
		if (!unk_0x0975E9E48EA2CC7B(iLocal_38))
		{
			unk_0x2BBEC4B37B923F4B(iLocal_38, 1, 0);
		}
	}
	unk_0x0F0D2D4C28FFD383(0);
	func_2();
}

void func_2()
{
	if (unk_0xE434AB6E3DE89861())
	{
		if (iLocal_87 == 1)
		{
			unk_0x37F2DD92A7BA5948();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x2419788BC7E0A733(iLocal_35);
		if (unk_0xD4B321D9096B01FC(iLocal_37))
		{
			if (unk_0x7F375072508F738F(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x7F375072508F738F(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x2BBEC4B37B923F4B(iLocal_37, 0, 0);
				if (unk_0x7F375072508F738F(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x6276EB2A4CC7B039(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x6276EB2A4CC7B039(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_39))
	{
		unk_0x2BBEC4B37B923F4B(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
		if (unk_0x1F70CA72458DB6BD(uLocal_78))
		{
			unk_0x0472F75F711AABCE(uLocal_78, 0);
		}
		unk_0xDC5BA18043353983(uLocal_78, 0);
		unk_0xB489E71A45CDC02F(0);
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), 0);
			unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
			unk_0x33BF981A2389AF13(unk_0x0FA8183DAD2B3203(), Local_31, 1, 0, 2);
			if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
				}
			}
			unk_0x2BBEC4B37B923F4B(unk_0x0FA8183DAD2B3203(), 1, 0);
		}
		if (!unk_0x2553916E420E8EF0(&cLocal_62, "NULL"))
		{
			if (unk_0x6FE3A7E505FEC20C(&cLocal_62))
			{
				unk_0x8E3496DF5BF7F24D(&cLocal_62);
			}
		}
		if (unk_0xD4B321D9096B01FC(iLocal_39))
		{
			unk_0x2BBEC4B37B923F4B(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0, 0, 0);
		unk_0x0F0D2D4C28FFD383(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x7FFD059D4FA38133(unk_0x7C7787D2D7139A85());
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 1);
		func_14(1);
		unk_0x0C90AD17B16DE260();
		unk_0x695A752EE2ABAEDE();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x31634D65216B86B6())
			{
				unk_0x623942A4F366F9BB(0);
			}
			if (!func_13())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_14(0);
		unk_0x418A0C9B89A8D0B1();
		Global_61477 = 0;
		if (bParam1)
		{
			unk_0x0BDD50D0AE4552F2();
		}
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 0);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x393E9918BC37548A())
		{
			if (((((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_10(unk_0x7C7787D2D7139A85())) && !func_7(unk_0x7C7787D2D7139A85(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
			}
		}
		else if (((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_10(unk_0x7C7787D2D7139A85())) && !bParam4) && !bParam5)
		{
			unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
		}
		Global_76575 = 0;
	}
}

bool func_6()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312745;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0xC4741D7AA5AAF9B6() != iParam0 && uParam2)
		{
			unk_0x0696366AB240E4CD(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 13);
	}
}

int func_15()
{
	if (!func_64(iLocal_43))
	{
		if (((((((func_31(&uLocal_26) >= 1f && unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x1B15167A6E6F7820(iLocal_37) == unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203())) && !func_30(8, -1)) && !unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0)) && unk_0x9BD87928F74C75F1(unk_0x0FA8183DAD2B3203(), Local_31, 90f)) && !unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) && !unk_0x16587C6F71675106())
		{
			if (iLocal_42 == -1)
			{
				func_29();
				func_28(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_26(iLocal_42, 1))
			{
				func_43(&iLocal_42);
				func_55(&uLocal_26);
				Global_30796[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0x71464AEF5F97BED3("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x9964F5BBD9415AB7(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				unk_0x0D23E3918F7AF11B(1);
			}
			func_2();
			func_43(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0x1F4FA01F906F33E5(2, 222);
		if (unk_0x26BB91778477F482(2, 222))
		{
			func_43(&iLocal_42);
			func_28(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		unk_0x572062A62138FBA2(2, 200, 1);
		if (unk_0x0975E9E48EA2CC7B(unk_0x0FA8183DAD2B3203()))
		{
			unk_0x2BBEC4B37B923F4B(unk_0x0FA8183DAD2B3203(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
			{
				unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 0, 0);
			}
		}
		unk_0x40984840FC30EC06();
		unk_0xF791EEF18A831849(unk_0x0FA8183DAD2B3203());
		func_23(1, 1);
		unk_0x1F4FA01F906F33E5(2, 222);
		func_17(0);
		if (unk_0x26BB91778477F482(2, 222) || (unk_0x59415A8719336539(2) && unk_0x38CEC20C56D8586B(2, 200)))
		{
			func_43(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		unk_0xA1E7A40E1F56E511(&Global_7357, 2);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_20())
		{
			func_19(1, 1);
		}
		else
		{
			func_19(0, 0);
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

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
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

bool func_20()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

int func_21(int iParam0)
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

bool func_22()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_24(0))
		{
			if (!iLocal_22)
			{
				if (unk_0x71464AEF5F97BED3("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x9964F5BBD9415AB7(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x5419F19FCF3A6315() == 0)
				{
					unk_0x19BB161DB3C4DBE2(1);
				}
				else
				{
					unk_0x19BB161DB3C4DBE2(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0xDA4EDC173CB56A18(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x780D45440FEEE179();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xA60ED9E6322FC33E(fVar2);
				iLocal_24 = unk_0x9B35D07DCD0F0B43();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x780D45440FEEE179();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xA60ED9E6322FC33E(fVar2);
				iLocal_24 = unk_0x9B35D07DCD0F0B43();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x71464AEF5F97BED3("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x9964F5BBD9415AB7(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x9B35D07DCD0F0B43() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0xDA4EDC173CB56A18(2, 218) - 127);
	if (iParam0 || unk_0x83666F9FB8FEBD4B() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			unk_0xC1B1E9A034A63A62(0);
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0x585CBFD90CDD9817("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0xE0DE60FCD6596E42(uLocal_78, 100f);
		unk_0x0472F75F711AABCE(uLocal_78, 1);
		unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
		if (unk_0xD4B321D9096B01FC(iLocal_39))
		{
			unk_0x2BBEC4B37B923F4B(iLocal_39, 0, 0);
		}
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), 1);
			unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
			if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
			{
				unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x33BF981A2389AF13(unk_0x0FA8183DAD2B3203(), Local_31, -1, 0, 2);
			unk_0x2BBEC4B37B923F4B(unk_0x0FA8183DAD2B3203(), 0, 0);
		}
		if (!unk_0x2553916E420E8EF0(&cLocal_62, "NULL"))
		{
			if (!unk_0x6FE3A7E505FEC20C(&cLocal_62))
			{
				unk_0x7D17F1A2E0EEDBB9(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0, 0, 0);
		unk_0x0F0D2D4C28FFD383(1);
		iLocal_85 = 1;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xD699DB8EAB756F25(unk_0x7A8732CFB5113E77()))
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (unk_0x33D7ABC47E81DCF9())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/] == 1 && Global_42116[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42116[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42116[iVar0 /*32*/].f_5 = 1;
			Global_42116[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42116[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42116[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
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
		if (Global_42116[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x222F76006659B0EB(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x16587C6F71675106())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
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
		if (!Global_42116[iVar0 /*32*/])
		{
			Global_42116[iVar0 /*32*/] = 1;
			Global_42116[iVar0 /*32*/].f_1 = Global_42317;
			Global_42317++;
			Global_42116[iVar0 /*32*/].f_4 = 0;
			Global_42116[iVar0 /*32*/].f_29 = 0;
			Global_42116[iVar0 /*32*/].f_5 = 0;
			Global_42116[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42116[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42116[iVar0 /*32*/].f_6 = iParam3;
			Global_42116[iVar0 /*32*/].f_31 = unk_0x429EE9FF15BB9033();
			Global_42116[iVar0 /*32*/].f_7 = 0;
			Global_42116[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x9591DE0F00127F2A(sParam4))
			{
				Global_42116[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42116[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42116[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42116[iVar0 /*32*/].f_12 = 0;
				Global_42116[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42116[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_29()
{
	if (unk_0xE434AB6E3DE89861())
	{
		if (iLocal_87 == 0)
		{
			unk_0x413ACB106B495BB1("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

float func_31(var uParam0)
{
	if (func_34(uParam0))
	{
		if (func_33(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_32(bool bParam0)
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

bool func_33(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 2);
}

bool func_34(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 1);
}

void func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	unk_0x2419788BC7E0A733(iLocal_35);
	unk_0xF314976CA3E17AC7(4);
	unk_0x42713436F16E83BB(1);
	unk_0x9677F295B289E9DA(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x2419788BC7E0A733(unk_0x48553A531109FD72());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x6321488E002E4CEF(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_30796[iLocal_43 /*11*/].f_7 = 0;
	Global_30796[iLocal_43 /*11*/] = unk_0x5419F19FCF3A6315();
	fLocal_30 = unk_0x780D45440FEEE179();
	if (unk_0x6FE3A7E505FEC20C(&cLocal_62))
	{
		unk_0x8E3496DF5BF7F24D(&cLocal_62);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x0D23E3918F7AF11B(1);
	}
	func_43(&iLocal_42);
	unk_0x19BB161DB3C4DBE2(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_52();
}

int func_38(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_39(unk_0x7C7787D2D7139A85()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_39(int iParam0)
{
	return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x393E9918BC37548A())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		unk_0x367DA79FE620711B(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x41410A69AD49AFCD(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_41(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_42(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

void func_43(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/])
		{
			Global_42116[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_44()
{
	if (func_31(&uLocal_26) < 1f)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if ((!unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x9BD87928F74C75F1(unk_0x0FA8183DAD2B3203(), Local_31, 90f)) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (unk_0x1B15167A6E6F7820(iLocal_37) != unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (Global_95627)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (Global_30796[iLocal_43 /*11*/].f_8)
	{
		func_43(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_28(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_26(iLocal_42, 1))
	{
		func_43(&iLocal_42);
		func_55(&uLocal_26);
		Global_30796[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0x71464AEF5F97BED3("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x9964F5BBD9415AB7(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_45(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_51((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111560.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111560.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111560.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111560.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111560.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111560.f_10189[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_46();
	}
}

void func_46()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111296 = 0;
	Global_111297 = 0;
	Global_111298 = 0;
	Global_111299 = 0;
	Global_111300 = 0;
	Global_111301 = 0;
	Global_111302 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111560.f_10189.f_3853;
	Global_111560.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111560.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111560.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111296++;
					fVar1 = (fVar1 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111297++;
					fVar2 = (fVar2 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111298++;
					fVar3 = (fVar3 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111299++;
					fVar4 = (fVar4 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111300++;
					fVar5 = (fVar5 + (Global_111560.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111301++;
					fVar6 = (fVar6 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111302++;
					fVar7 = (fVar7 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111279 > 0)
	{
		if (Global_111296 == Global_111279)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111280 > 0)
	{
		if (Global_111297 == Global_111280)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111281 > 0)
	{
		if (Global_111298 == Global_111281)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111282 > 0)
	{
		if (Global_111299 == Global_111282)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111283 > 0)
	{
		if (((Global_111300 == Global_111283 || (Global_111283 * 10 / Global_111300) < 41) || Global_111300 > Global_111286) || Global_111300 == Global_111286)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_10189.f_3856, 14))
			{
				if (Global_111300 == Global_111283)
				{
					unk_0x4CC49AB39D518992(joaat("num_rndevents_completed"), Global_111283, 0);
					unk_0xA1E7A40E1F56E511(&(Global_111560.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111284 > 0)
	{
		if (Global_111301 == Global_111284)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111285 > 0)
	{
		if (Global_111302 == Global_111285)
		{
			fVar7 = 5f;
		}
	}
	Global_111560.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111300 > Global_111286 || Global_111300 == Global_111286)
	{
		iVar9 = Global_111286;
	}
	else
	{
		iVar9 = Global_111300;
	}
	unk_0x41410A69AD49AFCD(joaat("num_missions_completed"), Global_111296, 1);
	unk_0x41410A69AD49AFCD(joaat("num_missions_available"), Global_111279, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_completed"), Global_111297, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_available"), Global_111280, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_completed"), Global_111298, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_available"), Global_111281, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_completed"), Global_111299, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_available"), Global_111282, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_available"), Global_111286, 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_completed"), (Global_111302 + Global_111301), 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_available"), (Global_111285 + Global_111284), 1);
	Global_111303 = (Global_111296 * 100 / Global_111279);
	Global_111305 = ((Global_111298 + Global_111297) * 100 / (Global_111281 + Global_111280));
	Global_111304 = ((Global_111299 + iVar9) * 100 / (Global_111282 + Global_111286));
	Global_111306 = ((Global_111301 + Global_111302) * 100 / (Global_111284 + Global_111285));
	unk_0x59D058AC496948FE(joaat("total_progress_made"), Global_111560.f_10189.f_3853, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_story_missions"), Global_111303, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_ambient_missions"), Global_111304, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_oddjobs"), Global_111305, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853))
	{
		func_50(13, unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853));
	}
	if (!unk_0x8FA5860B1A123955())
	{
		if (!Global_76577)
		{
			if (func_49() == 2 == 0 && !unk_0x393E9918BC37548A())
			{
				if (unk_0x56BDC2B0945F6D74())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
	{
		return 0;
	}
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

bool func_48(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

int func_49()
{
	return Global_30736;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x7FA0488109D2A795(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x968D4E056664C967(iParam0, iParam1);
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_52()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x1473B221A4507333("tvscreen"))
	{
		unk_0x1B0419132F8658B5("tvscreen");
		iLocal_35 = -1;
		unk_0x2419788BC7E0A733(unk_0x48553A531109FD72());
	}
}

void func_53()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_54();
	}
	if (unk_0x1473B221A4507333("tvscreen"))
	{
		unk_0x1B0419132F8658B5("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0xD4B321D9096B01FC(iLocal_37))
	{
		func_68();
	}
	iVar0 = unk_0x7F375072508F738F(iLocal_37);
	unk_0x0D4D70259A823FB9("tvscreen", 0);
	unk_0x58121333AB1E3EA0(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x5CB10E901C846824(iVar0))
		{
			if (!unk_0xD4B321D9096B01FC(iLocal_37))
			{
				func_68();
			}
			if (!unk_0xA887AF38A5D654D0(iLocal_37))
			{
				func_68();
			}
			if (!unk_0x1473B221A4507333("tvscreen"))
			{
				unk_0x0D4D70259A823FB9("tvscreen", 0);
			}
			if (!unk_0x5CB10E901C846824(iVar0))
			{
				unk_0x58121333AB1E3EA0(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0x9F932A236AD1D911("tvscreen");
	func_3();
}

void func_54()
{
	if (unk_0xD4B321D9096B01FC(iLocal_37))
	{
		if (unk_0x7F375072508F738F(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0x366EC9EEE4362C87(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x5A2B7C446C0CF087(iLocal_37, uLocal_34);
	unk_0x860A5CC30A0EF207(iLocal_37, 1);
	unk_0x2BBEC4B37B923F4B(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x366EC9EEE4362C87(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x5A2B7C446C0CF087(iLocal_39, uLocal_34);
	unk_0x860A5CC30A0EF207(iLocal_39, 1);
	unk_0x2BBEC4B37B923F4B(iLocal_39, 0, 0);
}

void func_55(var uParam0)
{
	func_56(uParam0, 0f);
}

void func_56(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_32(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - fParam1);
	unk_0xA1E7A40E1F56E511(uParam0, 1);
	unk_0x3B76114EC84D5812(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_57()
{
}

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

void func_59()
{
	Local_31 = { unk_0xACE5E491FC1B0D37(iLocal_37, 1) };
	uLocal_34 = unk_0xD2809C7F7FD79247(iLocal_37);
	func_61();
	if (unk_0x7F375072508F738F(iLocal_37) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			Local_79 = { -9.8135f, -1440.913f, 31.3654f };
			Local_82 = { 0f, 0f, -134.3211f };
			Local_88 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x7F375072508F738F(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x7F375072508F738F(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			Local_79 = { 2.5724f, 527.9989f, 176.1619f };
			Local_82 = { 0f, 0f, -29.9488f };
			Local_88 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x7F375072508F738F(iLocal_37) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			Local_79 = { -1160.502f, -1520.76f, 10.7393f };
			Local_82 = { 0f, 0f, 60.061f };
			Local_88 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x7F375072508F738F(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x7F375072508F738F(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			Local_79 = { -802.8972f, 172.537f, 74.5801f };
			Local_82 = { 0f, 0f, -69.0273f };
			Local_88 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x7F375072508F738F(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			Local_79 = { -808.3051f, 171.2623f, 77.2822f };
			Local_82 = { 1.8886f, 0f, 110.9232f };
			Local_88 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()
{
	iLocal_38 = unk_0x366EC9EEE4362C87(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x5A2B7C446C0CF087(iLocal_38, uLocal_34);
	unk_0x2BBEC4B37B923F4B(iLocal_38, 1, 0);
	unk_0x860A5CC30A0EF207(iLocal_38, 1);
}

void func_61()
{
	unk_0x2305B7531ECC2837(0, func_41(1), 0);
	if (func_58(22))
	{
		unk_0x2305B7531ECC2837(1, func_41(12), 0);
	}
	else
	{
		unk_0x2305B7531ECC2837(1, func_41(2), 0);
	}
}

void func_62()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_30796[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0xD4B321D9096B01FC(iLocal_40))
			{
				unk_0x04F5A8AA60EC662B(iLocal_40, 0);
			}
			if (unk_0xD4B321D9096B01FC(iLocal_37))
			{
				unk_0x04F5A8AA60EC662B(iLocal_37, 0);
			}
			if (unk_0xD4B321D9096B01FC(iLocal_39))
			{
				unk_0x04F5A8AA60EC662B(iLocal_39, 0);
			}
			if (unk_0xD4B321D9096B01FC(iLocal_38))
			{
				unk_0x04F5A8AA60EC662B(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0xD4B321D9096B01FC(iLocal_40))
		{
			unk_0x04F5A8AA60EC662B(iLocal_40, 1);
		}
		if (unk_0xD4B321D9096B01FC(iLocal_37))
		{
			unk_0x04F5A8AA60EC662B(iLocal_37, 1);
		}
		if (unk_0xD4B321D9096B01FC(iLocal_39))
		{
			unk_0x04F5A8AA60EC662B(iLocal_39, 1);
		}
		if (unk_0xD4B321D9096B01FC(iLocal_38))
		{
			unk_0x04F5A8AA60EC662B(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_63(int iParam0)
{
	return Global_41396 == iParam0;
}

int func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30796[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0x98EF8A03317B1185() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (Global_95621 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

void func_67()
{
}

void func_68()
{
	if (iLocal_43 == -1)
	{
		unk_0x9C9E32388A7886A2();
	}
	func_43(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_30796[iLocal_43 /*11*/].f_6 = 0;
		Global_30796[iLocal_43 /*11*/].f_7 = 0;
		Global_30796[iLocal_43 /*11*/].f_8 = 0;
		Global_30796[iLocal_43 /*11*/].f_4 = 0;
		Global_30796[iLocal_43 /*11*/].f_5 = 0;
		Global_30796[iLocal_43 /*11*/].f_2 = 0;
		Global_30796[iLocal_43 /*11*/] = -1;
		Global_30796[iLocal_43 /*11*/].f_1 = 0;
		Global_30796[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x0D23E3918F7AF11B(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_69();
	if (unk_0x6FE3A7E505FEC20C(&cLocal_62))
	{
		unk_0x8E3496DF5BF7F24D(&cLocal_62);
	}
	unk_0x56948C95D7FBC33B();
	func_2();
	unk_0x9C9E32388A7886A2();
}

void func_69()
{
	func_52();
	if (unk_0xD4B321D9096B01FC(iLocal_37))
	{
		if (unk_0x7F375072508F738F(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x377C9F2989832369(&iLocal_37);
			unk_0xE0AC40EF164A2569(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_39))
	{
		unk_0x377C9F2989832369(&iLocal_39);
		unk_0xE0AC40EF164A2569(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xD4B321D9096B01FC(iLocal_38))
	{
		unk_0x377C9F2989832369(&iLocal_38);
		unk_0xE0AC40EF164A2569(joaat("prop_tt_screenstatic"));
	}
}

