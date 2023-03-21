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
	if (unk_0x78BF2001491914AC(2))
	{
		func_66();
	}
	if (unk_0x2137828D03306CAF(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_65();
		if (unk_0x2137828D03306CAF(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((unk_0x0AFBA1AD6DC1C540() && unk_0xD7037D74D866BD7D() != 3) && unk_0xE858C2EA240D3C68() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0x88BEBC460DCD33CC(iScriptParam_0))
			{
				func_66();
			}
			if (unk_0x9F6E8D8D1BBF7A81(iScriptParam_0))
			{
				if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
				{
					func_60();
					if (unk_0xE86A53C202B21FAB(iScriptParam_0) < 950)
					{
						func_66();
					}
					switch (iLocal_29)
					{
						case 0:
							func_57();
							if (iLocal_43 == 5)
							{
								if (func_56(18) == 1 && func_56(20) == 0)
								{
									uLocal_41 = unk_0x607B28D95F96CBAD(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0xF1E6140FC1C16FF9(uLocal_41))
									{
										unk_0x962FCDF622507549(uLocal_41, 9);
									}
									unk_0xA232817B0B36F2E5();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0x1153E15B2F6A2882("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xE43BA08EA2C094EF(0);
								Global_25282[iLocal_43 /*11*/].f_2 = 0;
								Global_25282[iLocal_43 /*11*/].f_6 = 1;
								Global_25282[iLocal_43 /*11*/] = unk_0x895FB9FE885E36ED(0, 2);
								Global_25282[iLocal_43 /*11*/].f_1 = 0;
								Global_25282[iLocal_43 /*11*/].f_4 = 0;
								Global_25282[iLocal_43 /*11*/].f_7 = 0;
								Global_25282[iLocal_43 /*11*/].f_8 = 0;
								Global_25282[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&uLocal_26);
								func_51();
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0xDFE6DCAAD8FD78A5(iLocal_37) && unk_0x7659EAAF617FD593(iLocal_37, 1119092736))
							{
								if (func_42() || Global_25282[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_41(&iLocal_42);
							}
							break;
						
						case 2:
							func_51();
							if (!func_62(iLocal_43))
							{
								func_41(&iLocal_42);
								if (func_40("TV_HLP1"))
								{
									unk_0x7D53B6FFAEDA810A(1);
								}
							}
							if (unk_0x2137828D03306CAF(iLocal_37))
							{
								if (!unk_0x18570CCBAF7F635C(iLocal_37))
								{
									unk_0x4C1FCB3943DAF647(iLocal_37, 1, 0);
								}
							}
							if (unk_0x2137828D03306CAF(iLocal_39))
							{
								if (!unk_0x18570CCBAF7F635C(iLocal_39))
								{
									unk_0x4C1FCB3943DAF647(iLocal_39, 1, 0);
								}
							}
							if (unk_0x2137828D03306CAF(iLocal_38))
							{
								if (unk_0x18570CCBAF7F635C(iLocal_38))
								{
									unk_0x4C1FCB3943DAF647(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x35302CD5A5D37EED(&cLocal_46, "NULL"))
							{
								unk_0x6E4B8D274EF24EDE(&cLocal_46, 0);
							}
							unk_0xEAC20229E3D7C3DF(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x2137828D03306CAF(iLocal_40))
							{
								unk_0x5FFE1F9A935C464A(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25282[iLocal_43 /*11*/] == 3 || Global_25282[iLocal_43 /*11*/] == 2) || Global_25282[iLocal_43 /*11*/] == -1)
								{
									Global_25282[iLocal_43 /*11*/] = unk_0x895FB9FE885E36ED(0, 2);
								}
								unk_0x3CAF4F919E264957(Global_25282[iLocal_43 /*11*/]);
								unk_0x67A346B3CDB15CA5(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25282[iLocal_43 /*11*/];
								iLocal_45 = Global_25282[iLocal_43 /*11*/].f_1;
								unk_0x9DD5A62390C3B735(iLocal_44, func_39(iLocal_45), Global_25282[iLocal_43 /*11*/].f_9);
								unk_0x3CAF4F919E264957(iLocal_44);
								if (Global_25282[iLocal_43 /*11*/].f_7)
								{
									Global_25282[iLocal_43 /*11*/].f_5 = 0;
									Global_25282[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25282[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25282[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25282[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25282[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_36(iLocal_43))
							{
								func_35();
								iLocal_29 = 5;
							}
							else
							{
								func_33();
								if (unk_0xDD9E56BEE94B29F9() == -1)
								{
									unk_0x3CAF4F919E264957(Global_25282[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_36(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25282[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_41(&iLocal_42);
							}
							Global_25282[iLocal_43 /*11*/].f_5 = 0;
							Global_25282[iLocal_43 /*11*/].f_4 = 0;
							Global_25282[iLocal_43 /*11*/].f_1 = 0;
							Global_25282[iLocal_43 /*11*/].f_2 = 0;
							Global_25282[iLocal_43 /*11*/].f_7 = 0;
							Global_25282[iLocal_43 /*11*/].f_8 = 0;
							Global_25282[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0xA232817B0B36F2E5();
		}
	}
	func_66();
	unk_0xA232817B0B36F2E5();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25282[iLocal_43 /*11*/] = unk_0xDD9E56BEE94B29F9();
	}
	fLocal_30 = unk_0x2EE9DB356CCCE150();
	unk_0x3CAF4F919E264957(-1);
	func_4();
	if (unk_0x09952BA662A7629B(joaat("family5")) == 0)
	{
		if (!unk_0x35302CD5A5D37EED(&cLocal_46, "NULL"))
		{
			unk_0x6E4B8D274EF24EDE(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
	func_3();
	func_50();
	if (unk_0x2137828D03306CAF(iLocal_38))
	{
		if (!unk_0x18570CCBAF7F635C(iLocal_38))
		{
			unk_0x4C1FCB3943DAF647(iLocal_38, 1, 0);
		}
	}
	unk_0x62140B83CEC61D67(0);
	func_2();
}

void func_2()
{
	if (unk_0x5018862FF5D9F844())
	{
		if (iLocal_87 == 1)
		{
			unk_0x6A4F9C3E95612289();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x2E894CF49D1F7D61(iLocal_35);
		if (unk_0x2137828D03306CAF(iLocal_37))
		{
			if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x4C1FCB3943DAF647(iLocal_37, 0, 0);
				if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xA55ED9111DC832BC(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0xA55ED9111DC832BC(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x2137828D03306CAF(iLocal_39))
	{
		unk_0x4C1FCB3943DAF647(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
		if (unk_0xF0A915CB71B8E167(uLocal_78))
		{
			unk_0xD429163073BD3A47(uLocal_78, 0);
		}
		unk_0x1E2E6AAAD9AE1286(uLocal_78, 0);
		unk_0x164CA344DBD7B6F3(0);
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), 0);
			unk_0x654FFF4D16298AC5(unk_0x2A5EB8B0FE590B91());
			unk_0x6B823DB6B46BB1F2(unk_0x2A5EB8B0FE590B91(), Local_31, 1, 0, 2);
			if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
				}
			}
			unk_0x4C1FCB3943DAF647(unk_0x2A5EB8B0FE590B91(), 1, 0);
		}
		if (!unk_0x35302CD5A5D37EED(&cLocal_62, "NULL"))
		{
			if (unk_0x8BEECCAAE312A5BA(&cLocal_62))
			{
				unk_0x40F160C3038ECAF5(&cLocal_62);
			}
		}
		if (unk_0x2137828D03306CAF(iLocal_39))
		{
			unk_0x4C1FCB3943DAF647(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0x62140B83CEC61D67(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xFEDBEA905C0956B1(unk_0x0FFED3E94261A832());
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 1);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 1);
		func_14(1);
		unk_0x2200CE3F471C6FE7();
		unk_0xFF9AC2CB876656B2();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3813EBE69CF8CAD2())
			{
				unk_0xE40123A348A5FEDA(0);
			}
			if (!func_13())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_69798 = 1;
	}
	else
	{
		func_14(0);
		unk_0x5827AA638AD6DBC3();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x387F543932786998();
		}
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 0);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x591AF4C50B46E014())
		{
			if (((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_10(unk_0x0FFED3E94261A832())) && !func_7(unk_0x0FFED3E94261A832(), 0)) && !func_6())
			{
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_10(unk_0x0FFED3E94261A832()))
		{
			unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
		}
		Global_69798 = 0;
	}
}

bool func_6()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
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
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312735;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && uParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 13);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 13);
	}
}

int func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&uLocal_26) >= 1f && unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0xD05429D1ADB47D25(iLocal_37) == unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91())) && !func_28(8, -1)) && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)) && unk_0xB9F3903E22827078(unk_0x2A5EB8B0FE590B91(), Local_31, 90f)) && !unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) && !unk_0x0AFBA1AD6DC1C540())
		{
			if (iLocal_42 == -1)
			{
				func_27();
				func_26(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_24(iLocal_42, 1))
			{
				func_41(&iLocal_42);
				func_53(&uLocal_26);
				Global_25282[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0xA543EF590C9644E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x08BE237DBCD9CBD9(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x7D53B6FFAEDA810A(1);
			}
			func_2();
			func_41(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0x712F381D6DC979A0(2, 222);
		if (unk_0x92BC4A8239BDDACC(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0x4E6996123FABDB93(2, 200, 1);
		if (unk_0x18570CCBAF7F635C(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0x4C1FCB3943DAF647(unk_0x2A5EB8B0FE590B91(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
			{
				unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 0, 0);
			}
		}
		unk_0x9BF32B79391A5A8E();
		unk_0x02A436A44277502D(unk_0x2A5EB8B0FE590B91());
		func_21(1, 1);
		unk_0x712F381D6DC979A0(2, 222);
		func_17(0);
		if (unk_0x92BC4A8239BDDACC(2, 222) || (unk_0x3A473E888D0CF9FD(2) && unk_0xDCBB59BAB1A90B0C(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		unk_0xF6082E2ADA1C795B(&Global_2314, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14604)
	{
		func_19(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_13())
	{
		Global_14443.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_21(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_22(0))
		{
			if (!iLocal_22)
			{
				if (unk_0xA543EF590C9644E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x08BE237DBCD9CBD9(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xDD9E56BEE94B29F9() == 0)
				{
					unk_0x3CAF4F919E264957(1);
				}
				else
				{
					unk_0x3CAF4F919E264957(0);
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
		iVar1 = (unk_0x86926C56FD96A3D6(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x2EE9DB356CCCE150();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x67A346B3CDB15CA5(fVar2);
				iLocal_24 = unk_0x3732B96D7A1859B4();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x2EE9DB356CCCE150();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x67A346B3CDB15CA5(fVar2);
				iLocal_24 = unk_0x3732B96D7A1859B4();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xA543EF590C9644E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x08BE237DBCD9CBD9(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x3732B96D7A1859B4() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x86926C56FD96A3D6(2, 218) - 127);
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

void func_23()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0xDD9D7ABCC8D44592("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0xDD277A3BED4D439E(uLocal_78, 100f);
		unk_0xD429163073BD3A47(uLocal_78, 1);
		unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
		if (unk_0x2137828D03306CAF(iLocal_39))
		{
			unk_0x4C1FCB3943DAF647(iLocal_39, 0, 0);
		}
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), 1);
			unk_0x654FFF4D16298AC5(unk_0x2A5EB8B0FE590B91());
			if (unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
			{
				unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x6B823DB6B46BB1F2(unk_0x2A5EB8B0FE590B91(), Local_31, -1, 0, 2);
			unk_0x4C1FCB3943DAF647(unk_0x2A5EB8B0FE590B91(), 0, 0);
		}
		if (!unk_0x35302CD5A5D37EED(&cLocal_62, "NULL"))
		{
			if (!unk_0x8BEECCAAE312A5BA(&cLocal_62))
			{
				unk_0xB0D390F8FEB78903(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x62140B83CEC61D67(1);
		iLocal_85 = 1;
	}
}

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xB8B285A272E7A79E(unk_0x8A41C463063AFC8E()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x863D84AFAC2AB730())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36516[iVar0 /*32*/] == 1 && Global_36516[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36516[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36516[iVar0 /*32*/].f_5 = 1;
			Global_36516[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36516[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36516[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
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
		if (Global_36516[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x09952BA662A7629B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x0AFBA1AD6DC1C540())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
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
		if (!Global_36516[iVar0 /*32*/])
		{
			Global_36516[iVar0 /*32*/] = 1;
			Global_36516[iVar0 /*32*/].f_1 = Global_36717;
			Global_36717++;
			Global_36516[iVar0 /*32*/].f_4 = 0;
			Global_36516[iVar0 /*32*/].f_29 = 0;
			Global_36516[iVar0 /*32*/].f_5 = 0;
			Global_36516[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36516[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36516[iVar0 /*32*/].f_6 = iParam3;
			Global_36516[iVar0 /*32*/].f_31 = unk_0xFF09208EC90C94CB();
			Global_36516[iVar0 /*32*/].f_7 = 0;
			Global_36516[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x58478145CAF8429C(sParam4))
			{
				Global_36516[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36516[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36516[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36516[iVar0 /*32*/].f_12 = 0;
				Global_36516[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36516[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	if (unk_0x5018862FF5D9F844())
	{
		if (iLocal_87 == 0)
		{
			unk_0x770781772474013D("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

float func_29(var uParam0)
{
	if (func_32(uParam0))
	{
		if (func_31(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_30(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_30(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x591AF4C50B46E014())
	{
		iVar2 = unk_0x11ABC381A58DD5AB();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4()) / 1000f);
}

bool func_31(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 2);
}

bool func_32(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 1);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0x2E894CF49D1F7D61(iLocal_35);
	unk_0xFF4C3B41848CE5CD(4);
	unk_0x981C3BDC1D914416(1);
	unk_0xD0822786CF0FB7F4(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x2E894CF49D1F7D61(unk_0xE1D800FE476DB251());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x7ED7709B4F358849(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()
{
	Global_25282[iLocal_43 /*11*/].f_7 = 0;
	Global_25282[iLocal_43 /*11*/] = unk_0xDD9E56BEE94B29F9();
	fLocal_30 = unk_0x2EE9DB356CCCE150();
	if (unk_0x8BEECCAAE312A5BA(&cLocal_62))
	{
		unk_0x40F160C3038ECAF5(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
	func_41(&iLocal_42);
	unk_0x3CAF4F919E264957(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_50();
}

int func_36(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_37(unk_0x0FFED3E94261A832()) };
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

Vector3 func_37(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x591AF4C50B46E014())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0xC225A90A8DE0D96B(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC94674712BED1A82(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_39(int iParam0)
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

bool func_40(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_25(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36516[iVar0 /*32*/])
		{
			Global_36516[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_42()
{
	if (func_29(&uLocal_26) < 1f)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if ((!unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0xB9F3903E22827078(unk_0x2A5EB8B0FE590B91(), Local_31, 90f)) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0xD05429D1ADB47D25(iLocal_37) != unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_88850)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25282[iLocal_43 /*11*/].f_8)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_26(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_24(iLocal_42, 1))
	{
		func_41(&iLocal_42);
		func_53(&uLocal_26);
		Global_25282[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0xA543EF590C9644E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x08BE237DBCD9CBD9(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_43(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)
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
		func_49((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_103236.f_9975[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_103236.f_9975[iParam0 /*12*/].f_6 == 11 || Global_103236.f_9975[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_103236.f_9975[iParam0 /*12*/].f_5 = 1;
		Global_103236.f_9975[iParam0 /*12*/].f_10 = iParam1;
		Global_103236.f_9975[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_44();
	}
}

void func_44()
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
	Global_102972 = 0;
	Global_102973 = 0;
	Global_102974 = 0;
	Global_102975 = 0;
	Global_102976 = 0;
	Global_102977 = 0;
	Global_102978 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_103236.f_9975.f_3853;
	Global_103236.f_9975.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_103236.f_9975[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_103236.f_9975[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_102972++;
					fVar1 = (fVar1 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_102973++;
					fVar2 = (fVar2 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_102974++;
					fVar3 = (fVar3 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_102975++;
					fVar4 = (fVar4 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_102976++;
					fVar5 = (fVar5 + (Global_103236.f_9975[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_102977++;
					fVar6 = (fVar6 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_102978++;
					fVar7 = (fVar7 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_102955 > 0)
	{
		if (Global_102972 == Global_102955)
		{
			fVar1 = 55f;
		}
	}
	if (Global_102956 > 0)
	{
		if (Global_102973 == Global_102956)
		{
			fVar2 = 10f;
		}
	}
	if (Global_102957 > 0)
	{
		if (Global_102974 == Global_102957)
		{
			fVar3 = 0f;
		}
	}
	if (Global_102958 > 0)
	{
		if (Global_102975 == Global_102958)
		{
			fVar4 = 10f;
		}
	}
	if (Global_102959 > 0)
	{
		if (((Global_102976 == Global_102959 || (Global_102959 * 10 / Global_102976) < 41) || Global_102976 > Global_102962) || Global_102976 == Global_102962)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_103236.f_9975.f_3856, 14))
			{
				if (Global_102976 == Global_102959)
				{
					unk_0x19AA4F8D57E34A69(joaat("num_rndevents_completed"), Global_102959, 0);
					unk_0xF6082E2ADA1C795B(&(Global_103236.f_9975.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_102960 > 0)
	{
		if (Global_102977 == Global_102960)
		{
			fVar6 = 15f;
		}
	}
	if (Global_102961 > 0)
	{
		if (Global_102978 == Global_102961)
		{
			fVar7 = 5f;
		}
	}
	Global_103236.f_9975.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_102976 > Global_102962 || Global_102976 == Global_102962)
	{
		iVar9 = Global_102962;
	}
	else
	{
		iVar9 = Global_102976;
	}
	unk_0xC94674712BED1A82(joaat("num_missions_completed"), Global_102972, 1);
	unk_0xC94674712BED1A82(joaat("num_missions_available"), Global_102955, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_completed"), Global_102973, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_available"), Global_102956, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_completed"), Global_102974, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_available"), Global_102957, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_completed"), Global_102975, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_available"), Global_102958, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_available"), Global_102962, 1);
	unk_0xC94674712BED1A82(joaat("num_misc_completed"), (Global_102978 + Global_102977), 1);
	unk_0xC94674712BED1A82(joaat("num_misc_available"), (Global_102961 + Global_102960), 1);
	Global_102979 = (Global_102972 * 100 / Global_102955);
	Global_102981 = ((Global_102974 + Global_102973) * 100 / (Global_102957 + Global_102956));
	Global_102980 = ((Global_102975 + iVar9) * 100 / (Global_102958 + Global_102962));
	Global_102982 = ((Global_102977 + Global_102978) * 100 / (Global_102960 + Global_102961));
	unk_0x24CB8183E6499C7F(joaat("total_progress_made"), Global_103236.f_9975.f_3853, 1);
	unk_0xC94674712BED1A82(joaat("percent_story_missions"), Global_102979, 1);
	unk_0xC94674712BED1A82(joaat("percent_ambient_missions"), Global_102980, 1);
	unk_0xC94674712BED1A82(joaat("percent_oddjobs"), Global_102981, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853));
	}
	if (!unk_0xA8A044A76B03FC4C())
	{
		if (!Global_69800)
		{
			if (func_47() == 2 == 0 && !unk_0x591AF4C50B46E014())
			{
				if (unk_0xD49DD4AB66A964B2())
				{
					Global_102970 = 0;
				}
				if (!Global_55854)
				{
					func_45();
				}
			}
		}
	}
}

int func_45()
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_91816.f_8)
	{
		if (Global_91816.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91816.f_10 > 1)
	{
		return 0;
	}
	Global_91816.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

int func_47()
{
	return Global_25222;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x0C54585A239FF08F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB88BC822A9F5BED8(iParam0, iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0xF7CF14291A366260("tvscreen"))
	{
		unk_0x5F48D1A836219B52("tvscreen");
		iLocal_35 = -1;
		unk_0x2E894CF49D1F7D61(unk_0xE1D800FE476DB251());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (unk_0xF7CF14291A366260("tvscreen"))
	{
		unk_0x5F48D1A836219B52("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x2137828D03306CAF(iLocal_37))
	{
		func_66();
	}
	iVar0 = unk_0xD3B21CE53AA7BE51(iLocal_37);
	unk_0x780C586745A677B7("tvscreen", 0);
	unk_0x272D250E3A152797(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x4EC4357A34845D4A(iVar0))
		{
			if (!unk_0x2137828D03306CAF(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x9F6E8D8D1BBF7A81(iLocal_37))
			{
				func_66();
			}
			if (!unk_0xF7CF14291A366260("tvscreen"))
			{
				unk_0x780C586745A677B7("tvscreen", 0);
			}
			if (!unk_0x4EC4357A34845D4A(iVar0))
			{
				unk_0x272D250E3A152797(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0x29D45D5B0CE2EFEA("tvscreen");
	func_3();
}

void func_52()
{
	if (unk_0x2137828D03306CAF(iLocal_37))
	{
		if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0x999AC25128E45284(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x2681BA3707AF6DA7(iLocal_37, uLocal_34);
	unk_0xA32D9C84C1A93920(iLocal_37, 1);
	unk_0x4C1FCB3943DAF647(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x999AC25128E45284(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x2681BA3707AF6DA7(iLocal_39, uLocal_34);
	unk_0xA32D9C84C1A93920(iLocal_39, 1);
	unk_0x4C1FCB3943DAF647(iLocal_39, 0, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - fParam1);
	unk_0xF6082E2ADA1C795B(uParam0, 1);
	unk_0x507FE690B1271947(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_55()
{
}

int func_56(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_103236.f_8866.f_330[iParam0 /*6*/];
}

void func_57()
{
	Local_31 = { unk_0xD1EE0E9FCD74A37B(iLocal_37, 1) };
	uLocal_34 = unk_0x6DAB28241B34DEED(iLocal_37);
	func_59();
	if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("prop_tv_03"))
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
	else if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_58();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("prop_tv_flat_01"))
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
	else if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("prop_tv_flat_02"))
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
	else if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("des_tvsmash_start"))
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

void func_58()
{
	iLocal_38 = unk_0x999AC25128E45284(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x2681BA3707AF6DA7(iLocal_38, uLocal_34);
	unk_0x4C1FCB3943DAF647(iLocal_38, 1, 0);
	unk_0xA32D9C84C1A93920(iLocal_38, 1);
}

void func_59()
{
	unk_0x9DD5A62390C3B735(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0x9DD5A62390C3B735(1, func_39(12), 0);
	}
	else
	{
		unk_0x9DD5A62390C3B735(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25282[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x2137828D03306CAF(iLocal_40))
			{
				unk_0xF65C7766FB8D4B2C(iLocal_40, 0);
			}
			if (unk_0x2137828D03306CAF(iLocal_37))
			{
				unk_0xF65C7766FB8D4B2C(iLocal_37, 0);
			}
			if (unk_0x2137828D03306CAF(iLocal_39))
			{
				unk_0xF65C7766FB8D4B2C(iLocal_39, 0);
			}
			if (unk_0x2137828D03306CAF(iLocal_38))
			{
				unk_0xF65C7766FB8D4B2C(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x2137828D03306CAF(iLocal_40))
		{
			unk_0xF65C7766FB8D4B2C(iLocal_40, 1);
		}
		if (unk_0x2137828D03306CAF(iLocal_37))
		{
			unk_0xF65C7766FB8D4B2C(iLocal_37, 1);
		}
		if (unk_0x2137828D03306CAF(iLocal_39))
		{
			unk_0xF65C7766FB8D4B2C(iLocal_39, 1);
		}
		if (unk_0x2137828D03306CAF(iLocal_38))
		{
			unk_0xF65C7766FB8D4B2C(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_61(int iParam0)
{
	return Global_35813 == iParam0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25282[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0x693458AABD7F18D7() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 20);
	}
	return 0;
}

void func_65()
{
}

void func_66()
{
	if (iLocal_43 == -1)
	{
		unk_0xA232817B0B36F2E5();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25282[iLocal_43 /*11*/].f_6 = 0;
		Global_25282[iLocal_43 /*11*/].f_7 = 0;
		Global_25282[iLocal_43 /*11*/].f_8 = 0;
		Global_25282[iLocal_43 /*11*/].f_4 = 0;
		Global_25282[iLocal_43 /*11*/].f_5 = 0;
		Global_25282[iLocal_43 /*11*/].f_2 = 0;
		Global_25282[iLocal_43 /*11*/] = -1;
		Global_25282[iLocal_43 /*11*/].f_1 = 0;
		Global_25282[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_67();
	if (unk_0x8BEECCAAE312A5BA(&cLocal_62))
	{
		unk_0x40F160C3038ECAF5(&cLocal_62);
	}
	unk_0xE97A57183F6FDCCE();
	func_2();
	unk_0xA232817B0B36F2E5();
}

void func_67()
{
	func_50();
	if (unk_0x2137828D03306CAF(iLocal_37))
	{
		if (unk_0xD3B21CE53AA7BE51(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xBE35B7268C680A20(&iLocal_37);
			unk_0xFD213087BC4CC3B3(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x2137828D03306CAF(iLocal_39))
	{
		unk_0xBE35B7268C680A20(&iLocal_39);
		unk_0xFD213087BC4CC3B3(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x2137828D03306CAF(iLocal_38))
	{
		unk_0xBE35B7268C680A20(&iLocal_38);
		unk_0xFD213087BC4CC3B3(joaat("prop_tt_screenstatic"));
	}
}

