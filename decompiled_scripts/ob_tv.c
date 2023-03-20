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
	if (unk_0x9CEB376419A71A96(2))
	{
		func_66();
	}
	if (unk_0xC1EDB61CE0A4B94E(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_65();
		if (unk_0xC1EDB61CE0A4B94E(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((unk_0xAD79840A082ADD7F() && unk_0xCB6A4452D5152B74() != 3) && unk_0xA4D01763320ADBAE() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0x9715A04134E581D6(iScriptParam_0))
			{
				func_66();
			}
			if (unk_0xF956B5861E255755(iScriptParam_0))
			{
				if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
				{
					func_60();
					if (unk_0x6267527E254067CA(iScriptParam_0) < 950)
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
									uLocal_41 = unk_0x35C804A2D2B69FCF(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x149D87651FAFC290(uLocal_41))
									{
										unk_0x6C7F0218246CB41A(uLocal_41, 9);
									}
									unk_0xF5DF8F3392CDD07B();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0x61B12671043631A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x46D707272EFE83DC(0);
								Global_25212[iLocal_43 /*11*/].f_2 = 0;
								Global_25212[iLocal_43 /*11*/].f_6 = 1;
								Global_25212[iLocal_43 /*11*/] = unk_0xA6055C735E3DD877(0, 2);
								Global_25212[iLocal_43 /*11*/].f_1 = 0;
								Global_25212[iLocal_43 /*11*/].f_4 = 0;
								Global_25212[iLocal_43 /*11*/].f_7 = 0;
								Global_25212[iLocal_43 /*11*/].f_8 = 0;
								Global_25212[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&uLocal_26);
								func_51();
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0xEE051D845EAD6BB3(iLocal_37) && unk_0x4EB9964950CF6AFE(iLocal_37, 1119092736))
							{
								if (func_42() || Global_25212[iLocal_43 /*11*/].f_5)
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
									unk_0x310F6B4E168A8F5D(1);
								}
							}
							if (unk_0xC1EDB61CE0A4B94E(iLocal_37))
							{
								if (!unk_0x666D4D13AC213458(iLocal_37))
								{
									unk_0x13B79909077BBD84(iLocal_37, 1, 0);
								}
							}
							if (unk_0xC1EDB61CE0A4B94E(iLocal_39))
							{
								if (!unk_0x666D4D13AC213458(iLocal_39))
								{
									unk_0x13B79909077BBD84(iLocal_39, 1, 0);
								}
							}
							if (unk_0xC1EDB61CE0A4B94E(iLocal_38))
							{
								if (unk_0x666D4D13AC213458(iLocal_38))
								{
									unk_0x13B79909077BBD84(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x2F6869889D97DFED(&cLocal_46, "NULL"))
							{
								unk_0xEDADB2C5312DE2A3(&cLocal_46, 0);
							}
							unk_0xEB1E2F929107D9BF(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0xC1EDB61CE0A4B94E(iLocal_40))
							{
								unk_0x9D12A4A03A5D0670(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25212[iLocal_43 /*11*/] == 3 || Global_25212[iLocal_43 /*11*/] == 2) || Global_25212[iLocal_43 /*11*/] == -1)
								{
									Global_25212[iLocal_43 /*11*/] = unk_0xA6055C735E3DD877(0, 2);
								}
								unk_0x9B377877E0A74645(Global_25212[iLocal_43 /*11*/]);
								unk_0xA1BCC244CA60C38E(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25212[iLocal_43 /*11*/];
								iLocal_45 = Global_25212[iLocal_43 /*11*/].f_1;
								unk_0x9716FD739C4ACD3B(iLocal_44, func_39(iLocal_45), Global_25212[iLocal_43 /*11*/].f_9);
								unk_0x9B377877E0A74645(iLocal_44);
								if (Global_25212[iLocal_43 /*11*/].f_7)
								{
									Global_25212[iLocal_43 /*11*/].f_5 = 0;
									Global_25212[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25212[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25212[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25212[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25212[iLocal_43 /*11*/].f_7 = 0;
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
								if (unk_0xD80F28EFE12BD9DE() == -1)
								{
									unk_0x9B377877E0A74645(Global_25212[iLocal_43 /*11*/]);
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
							if (Global_25212[iLocal_43 /*11*/].f_4)
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
							Global_25212[iLocal_43 /*11*/].f_5 = 0;
							Global_25212[iLocal_43 /*11*/].f_4 = 0;
							Global_25212[iLocal_43 /*11*/].f_1 = 0;
							Global_25212[iLocal_43 /*11*/].f_2 = 0;
							Global_25212[iLocal_43 /*11*/].f_7 = 0;
							Global_25212[iLocal_43 /*11*/].f_8 = 0;
							Global_25212[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0xF5DF8F3392CDD07B();
		}
	}
	func_66();
	unk_0xF5DF8F3392CDD07B();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25212[iLocal_43 /*11*/] = unk_0xD80F28EFE12BD9DE();
	}
	fLocal_30 = unk_0xE6E5EDAD115CB7BE();
	unk_0x9B377877E0A74645(-1);
	func_4();
	if (unk_0x98934607F8D0FB03(joaat("family5")) == 0)
	{
		if (!unk_0x2F6869889D97DFED(&cLocal_46, "NULL"))
		{
			unk_0xEDADB2C5312DE2A3(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x310F6B4E168A8F5D(1);
	}
	func_3();
	func_50();
	if (unk_0xC1EDB61CE0A4B94E(iLocal_38))
	{
		if (!unk_0x666D4D13AC213458(iLocal_38))
		{
			unk_0x13B79909077BBD84(iLocal_38, 1, 0);
		}
	}
	unk_0x839F0ABBBA1223FE(0);
	func_2();
}

void func_2()
{
	if (unk_0x55812CD5A331E1F8())
	{
		if (iLocal_87 == 1)
		{
			unk_0x95D6A536106C2667();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x49C12EB063E0F0E6(iLocal_35);
		if (unk_0xC1EDB61CE0A4B94E(iLocal_37))
		{
			if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x79469DA5833EACA8(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x13B79909077BBD84(iLocal_37, 0, 0);
				if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xF2277E9F99F5ECC1(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0xF2277E9F99F5ECC1(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_39))
	{
		unk_0x13B79909077BBD84(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0xA7E1DB47F3F4BCD1(0, 0, 3000, 1, 0, 0);
		if (unk_0x52F602ADFE383505(uLocal_78))
		{
			unk_0x78EE57C40B1C74AA(uLocal_78, 0);
		}
		unk_0xC2F547D33F9342CC(uLocal_78, 0);
		unk_0x086A554C80BC6C5D(0);
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			unk_0x93F4FB97D1F2E7A1(unk_0x06736567F820A39E(), 0);
			unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
			unk_0xB0B53944EE49BF71(unk_0x06736567F820A39E(), Local_31, 1, 0, 2);
			if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 1, 0);
				}
			}
			unk_0x13B79909077BBD84(unk_0x06736567F820A39E(), 1, 0);
		}
		if (!unk_0x2F6869889D97DFED(&cLocal_62, "NULL"))
		{
			if (unk_0x83667584AACBB09C(&cLocal_62))
			{
				unk_0x8D72E02348CB74D2(&cLocal_62);
			}
		}
		if (unk_0xC1EDB61CE0A4B94E(iLocal_39))
		{
			unk_0x13B79909077BBD84(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0x839F0ABBBA1223FE(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0E7D7A2D525FF714(unk_0xE0BDAFA1A39552D6());
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 1);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 1);
		func_14(1);
		unk_0xBB767E7625FB7ED6();
		unk_0xCE3C0BD3070B4018();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x1FB728BC68674B71())
			{
				unk_0xC48487554D051523(0);
			}
			if (!func_13())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55786 = 1;
		Global_68092 = 1;
		Global_69519 = 1;
	}
	else
	{
		func_14(0);
		unk_0x8355AD5145EA3FA6();
		Global_55786 = 0;
		if (bParam1)
		{
			unk_0xEC46418588F2FEF5();
		}
		unk_0x1B9B62BFD193B2DC(unk_0xE0BDAFA1A39552D6(), 0);
		unk_0xA7151FEC760FCDE4(unk_0xE0BDAFA1A39552D6(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x17CC0D5008835470())
		{
			if (((!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_10(unk_0xE0BDAFA1A39552D6())) && !func_7(unk_0xE0BDAFA1A39552D6(), 0)) && !func_6())
			{
				unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
			}
		}
		else if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()) && !func_10(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xB2C123C54D84E6A7(unk_0x06736567F820A39E(), 0);
		}
		Global_69519 = 0;
	}
}

bool func_6()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312747;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x640152C8EE973B5B() != iParam0 && uParam2)
		{
			unk_0x1ECC86329E4F43F8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 13);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 13);
	}
}

int func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&uLocal_26) >= 1f && unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x9F99187B9EC3128C(iLocal_37) == unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E())) && !func_28(8, -1)) && !unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0)) && unk_0x58F7117E56686739(unk_0x06736567F820A39E(), Local_31, 90f)) && !unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) && !unk_0xAD79840A082ADD7F())
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
				Global_25212[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0xD0EF586185D3B66D("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x962E604CCA53388F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x310F6B4E168A8F5D(1);
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
		unk_0xD3D729A98DEDDAFB(2, 222);
		if (unk_0xD471C64C0898A7BF(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0xC80D2B3478FFF428(2, 200, 1);
		if (unk_0x666D4D13AC213458(unk_0x06736567F820A39E()))
		{
			unk_0x13B79909077BBD84(unk_0x06736567F820A39E(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
			{
				unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 0, 0);
			}
		}
		unk_0xEA8377A713D575EE();
		unk_0x9B4EEC4F375D4C18(unk_0x06736567F820A39E());
		func_21(1, 1);
		unk_0xD3D729A98DEDDAFB(2, 222);
		func_17();
		if (unk_0xD471C64C0898A7BF(2, 222) || (unk_0x4A1EAF6BB2C862EA(2) && unk_0x4EC803EBF471F8D9(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(0);
		}
		unk_0xE27C8E42A97895CF(&Global_2284, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14571)
	{
		func_19(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
	}
	if (!func_13())
	{
		Global_14413.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
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
				if (unk_0xD0EF586185D3B66D("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x962E604CCA53388F(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xD80F28EFE12BD9DE() == 0)
				{
					unk_0x9B377877E0A74645(1);
				}
				else
				{
					unk_0x9B377877E0A74645(0);
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
		iVar1 = (unk_0x1F9373270A41BA3D(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0xE6E5EDAD115CB7BE();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xA1BCC244CA60C38E(fVar2);
				iLocal_24 = unk_0x1ADBAAC322D61F73();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0xE6E5EDAD115CB7BE();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xA1BCC244CA60C38E(fVar2);
				iLocal_24 = unk_0x1ADBAAC322D61F73();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xD0EF586185D3B66D("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x962E604CCA53388F(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x1ADBAAC322D61F73() > iLocal_24 + 24)
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
	iVar1 = (unk_0x1F9373270A41BA3D(2, 218) - 127);
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
		uLocal_78 = unk_0x3378F2E29D29F7A7("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x37F47D707289852F(uLocal_78, 100f);
		unk_0x78EE57C40B1C74AA(uLocal_78, 1);
		unk_0xA7E1DB47F3F4BCD1(1, 0, 3000, 1, 0, 0);
		if (unk_0xC1EDB61CE0A4B94E(iLocal_39))
		{
			unk_0x13B79909077BBD84(iLocal_39, 0, 0);
		}
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			unk_0x93F4FB97D1F2E7A1(unk_0x06736567F820A39E(), 1);
			unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
			if (unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
			{
				unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), 0, 0);
				bLocal_36 = true;
			}
			unk_0xB0B53944EE49BF71(unk_0x06736567F820A39E(), Local_31, -1, 0, 2);
			unk_0x13B79909077BBD84(unk_0x06736567F820A39E(), 0, 0);
		}
		if (!unk_0x2F6869889D97DFED(&cLocal_62, "NULL"))
		{
			if (!unk_0x83667584AACBB09C(&cLocal_62))
			{
				unk_0xE491AB346B56AC9F(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x839F0ABBBA1223FE(1);
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
	if (!unk_0x7868479D9B6694C0(unk_0xBC628C78D8ECD5F1()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0xEE448F70B7098781())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36442[iVar0 /*32*/] == 1 && Global_36442[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36442[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36442[iVar0 /*32*/].f_5 = 1;
			Global_36442[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36442[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36442[iVar0 /*32*/].f_7)
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
		if (Global_36442[iVar0 /*32*/].f_1 == iParam0)
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
	
	if (unk_0x98934607F8D0FB03(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xAD79840A082ADD7F())
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
		if (!Global_36442[iVar0 /*32*/])
		{
			Global_36442[iVar0 /*32*/] = 1;
			Global_36442[iVar0 /*32*/].f_1 = Global_36643;
			Global_36643++;
			Global_36442[iVar0 /*32*/].f_4 = 0;
			Global_36442[iVar0 /*32*/].f_29 = 0;
			Global_36442[iVar0 /*32*/].f_5 = 0;
			Global_36442[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36442[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36442[iVar0 /*32*/].f_6 = iParam3;
			Global_36442[iVar0 /*32*/].f_31 = unk_0xAE832DCCE9CD3242();
			Global_36442[iVar0 /*32*/].f_7 = 0;
			Global_36442[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x226FA58470A21AEF(sParam4))
			{
				Global_36442[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36442[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36442[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36442[iVar0 /*32*/].f_12 = 0;
				Global_36442[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36442[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	if (unk_0x55812CD5A331E1F8())
	{
		if (iLocal_87 == 0)
		{
			unk_0xFC835B186F4C0264("TV_Controls");
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
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
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
			return (func_30(unk_0x7DA173D4FD42F36B(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_30(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x1ADBAAC322D61F73());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x17CC0D5008835470())
	{
		iVar2 = unk_0x201D90648B2AE3CE();
		return (unk_0xBBDA792448DB5A89(iVar2) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x1ADBAAC322D61F73()) / 1000f);
}

bool func_31(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(*uParam0, 2);
}

bool func_32(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(*uParam0, 1);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0x49C12EB063E0F0E6(iLocal_35);
	unk_0xA53AA6798EF8BAB3(4);
	unk_0xD3A46BE3CC13ED33(1);
	unk_0xEAFE0648BBA5CDCF(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x49C12EB063E0F0E6(unk_0x4501643C262FFB18());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x5050DF014C100DFF(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()
{
	Global_25212[iLocal_43 /*11*/].f_7 = 0;
	Global_25212[iLocal_43 /*11*/] = unk_0xD80F28EFE12BD9DE();
	fLocal_30 = unk_0xE6E5EDAD115CB7BE();
	if (unk_0x83667584AACBB09C(&cLocal_62))
	{
		unk_0x8D72E02348CB74D2(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x310F6B4E168A8F5D(1);
	}
	func_41(&iLocal_42);
	unk_0x9B377877E0A74645(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_50();
}

int func_36(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_37(unk_0xE0BDAFA1A39552D6()) };
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
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51522[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x17CC0D5008835470())
	{
		return;
	}
	if (Global_51522[iParam0 /*7*/])
	{
		unk_0xFF4D252D25F54A29(Global_51522[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x57B5A527FBAC251E(Global_51522[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
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
		if (Global_36442[iVar0 /*32*/])
		{
			Global_36442[iVar0 /*32*/].f_7 = 1;
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
	if ((!unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x58F7117E56686739(unk_0x06736567F820A39E(), Local_31, 90f)) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x9F99187B9EC3128C(iLocal_37) != unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_88571)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25212[iLocal_43 /*11*/].f_8)
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
		Global_25212[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0xD0EF586185D3B66D("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x962E604CCA53388F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
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
	if (Global_101186.f_8960[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101186.f_8960[iParam0 /*12*/].f_6 == 11 || Global_101186.f_8960[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101186.f_8960[iParam0 /*12*/].f_5 = 1;
		Global_101186.f_8960[iParam0 /*12*/].f_10 = iParam1;
		Global_101186.f_8960[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x1B6939A0FB3A66B3(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_100922 = 0;
	Global_100923 = 0;
	Global_100924 = 0;
	Global_100925 = 0;
	Global_100926 = 0;
	Global_100927 = 0;
	Global_100928 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101186.f_8960.f_3853;
	Global_101186.f_8960.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101186.f_8960[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101186.f_8960[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100922++;
					fVar1 = (fVar1 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100923++;
					fVar2 = (fVar2 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100924++;
					fVar3 = (fVar3 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100925++;
					fVar4 = (fVar4 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100926++;
					fVar5 = (fVar5 + (Global_101186.f_8960[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100927++;
					fVar6 = (fVar6 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100928++;
					fVar7 = (fVar7 + Global_101186.f_8960[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100905 > 0)
	{
		if (Global_100922 == Global_100905)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100906 > 0)
	{
		if (Global_100923 == Global_100906)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100907 > 0)
	{
		if (Global_100924 == Global_100907)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100908 > 0)
	{
		if (Global_100925 == Global_100908)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100909 > 0)
	{
		if (((Global_100926 == Global_100909 || (Global_100909 * 10 / Global_100926) < 41) || Global_100926 > Global_100912) || Global_100926 == Global_100912)
		{
			if (!unk_0x7DA173D4FD42F36B(Global_101186.f_8960.f_3856, 14))
			{
				if (Global_100926 == Global_100909)
				{
					unk_0x1B6939A0FB3A66B3(joaat("num_rndevents_completed"), Global_100909, 0);
					unk_0xE27C8E42A97895CF(&(Global_101186.f_8960.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100910 > 0)
	{
		if (Global_100927 == Global_100910)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100911 > 0)
	{
		if (Global_100928 == Global_100911)
		{
			fVar7 = 5f;
		}
	}
	Global_101186.f_8960.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100926 > Global_100912 || Global_100926 == Global_100912)
	{
		iVar9 = Global_100912;
	}
	else
	{
		iVar9 = Global_100926;
	}
	unk_0x57B5A527FBAC251E(joaat("num_missions_completed"), Global_100922, 1);
	unk_0x57B5A527FBAC251E(joaat("num_missions_available"), Global_100905, 1);
	unk_0x57B5A527FBAC251E(joaat("num_minigames_completed"), Global_100923, 1);
	unk_0x57B5A527FBAC251E(joaat("num_minigames_available"), Global_100906, 1);
	unk_0x57B5A527FBAC251E(joaat("num_oddjobs_completed"), Global_100924, 1);
	unk_0x57B5A527FBAC251E(joaat("num_oddjobs_available"), Global_100907, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndpeople_completed"), Global_100925, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndpeople_available"), Global_100908, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x57B5A527FBAC251E(joaat("num_rndevents_available"), Global_100912, 1);
	unk_0x57B5A527FBAC251E(joaat("num_misc_completed"), (Global_100928 + Global_100927), 1);
	unk_0x57B5A527FBAC251E(joaat("num_misc_available"), (Global_100911 + Global_100910), 1);
	Global_100929 = (Global_100922 * 100 / Global_100905);
	Global_100931 = ((Global_100924 + Global_100923) * 100 / (Global_100907 + Global_100906));
	Global_100930 = ((Global_100925 + iVar9) * 100 / (Global_100908 + Global_100912));
	Global_100932 = ((Global_100927 + Global_100928) * 100 / (Global_100910 + Global_100911));
	unk_0x81278411EC120DEA(joaat("total_progress_made"), Global_101186.f_8960.f_3853, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_story_missions"), Global_100929, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_ambient_missions"), Global_100930, 1);
	unk_0x57B5A527FBAC251E(joaat("percent_oddjobs"), Global_100931, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101186.f_8960.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_101186.f_8960.f_3853));
	}
	if (!unk_0xD67AADBB828CC3BE())
	{
		if (!Global_69521)
		{
			if (func_47() == 2 == 0 && !unk_0x17CC0D5008835470())
			{
				if (unk_0x614D6A182129DE96())
				{
					Global_100920 = 0;
				}
				if (!Global_55780)
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
	if (Global_91349.f_8)
	{
		if (Global_91349.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91349.f_10 > 1)
	{
		return 0;
	}
	Global_91349.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

int func_47()
{
	return Global_25152;
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
	iVar0 = unk_0x752CB313BE10D01F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEFFB38447380C1DE(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xEBF0170044DAFCC1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x962F55EEC297B13E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xEBF0170044DAFCC1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x962F55EEC297B13E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xEBF0170044DAFCC1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x962F55EEC297B13E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xEBF0170044DAFCC1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x962F55EEC297B13E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x57523A7BBB9C991D((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x962F55EEC297B13E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x57523A7BBB9C991D((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x962F55EEC297B13E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1DE02059C7818E12((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x962F55EEC297B13E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1DE02059C7818E12((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x962F55EEC297B13E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1DE02059C7818E12((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x962F55EEC297B13E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x1DE02059C7818E12((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x962F55EEC297B13E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x1DE02059C7818E12((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x962F55EEC297B13E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x3A699A84C490DB51(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x360C2516A7B2502A("tvscreen"))
	{
		unk_0x778FD0D5919ECA26("tvscreen");
		iLocal_35 = -1;
		unk_0x49C12EB063E0F0E6(unk_0x4501643C262FFB18());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (unk_0x360C2516A7B2502A("tvscreen"))
	{
		unk_0x778FD0D5919ECA26("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0xC1EDB61CE0A4B94E(iLocal_37))
	{
		func_66();
	}
	iVar0 = unk_0x79469DA5833EACA8(iLocal_37);
	unk_0xE6E75F2E6DA58A29("tvscreen", 0);
	unk_0xC585411E580C1011(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0xBE2ECBDFB4093646(iVar0))
		{
			if (!unk_0xC1EDB61CE0A4B94E(iLocal_37))
			{
				func_66();
			}
			if (!unk_0xF956B5861E255755(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x360C2516A7B2502A("tvscreen"))
			{
				unk_0xE6E75F2E6DA58A29("tvscreen", 0);
			}
			if (!unk_0xBE2ECBDFB4093646(iVar0))
			{
				unk_0xC585411E580C1011(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0xCAF95C827AB25374("tvscreen");
	func_3();
}

void func_52()
{
	if (unk_0xC1EDB61CE0A4B94E(iLocal_37))
	{
		if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0x690B17DE4159577D(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0xEF32567B3A5047F5(iLocal_37, uLocal_34);
	unk_0x93F4FB97D1F2E7A1(iLocal_37, 1);
	unk_0x13B79909077BBD84(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x690B17DE4159577D(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0xEF32567B3A5047F5(iLocal_39, uLocal_34);
	unk_0x93F4FB97D1F2E7A1(iLocal_39, 1);
	unk_0x13B79909077BBD84(iLocal_39, 0, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30(unk_0x7DA173D4FD42F36B(*uParam0, 4)) - fParam1);
	unk_0xE27C8E42A97895CF(uParam0, 1);
	unk_0x99BCB15F954AF579(uParam0, 2);
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
	return Global_101186.f_7851.f_330[iParam0 /*6*/];
}

void func_57()
{
	Local_31 = { unk_0xF4745590D18D14B8(iLocal_37, 1) };
	uLocal_34 = unk_0x3CAD22C2D36A7F14(iLocal_37);
	func_59();
	if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("prop_tv_03"))
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
	else if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("prop_trev_tv_01"))
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
	else if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("prop_tv_flat_01"))
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
	else if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("prop_tv_flat_02"))
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
	else if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x79469DA5833EACA8(iLocal_37) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("des_tvsmash_start"))
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
	iLocal_38 = unk_0x690B17DE4159577D(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0xEF32567B3A5047F5(iLocal_38, uLocal_34);
	unk_0x13B79909077BBD84(iLocal_38, 1, 0);
	unk_0x93F4FB97D1F2E7A1(iLocal_38, 1);
}

void func_59()
{
	unk_0x9716FD739C4ACD3B(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0x9716FD739C4ACD3B(1, func_39(12), 0);
	}
	else
	{
		unk_0x9716FD739C4ACD3B(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25212[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0xC1EDB61CE0A4B94E(iLocal_40))
			{
				unk_0xB2C123C54D84E6A7(iLocal_40, 0);
			}
			if (unk_0xC1EDB61CE0A4B94E(iLocal_37))
			{
				unk_0xB2C123C54D84E6A7(iLocal_37, 0);
			}
			if (unk_0xC1EDB61CE0A4B94E(iLocal_39))
			{
				unk_0xB2C123C54D84E6A7(iLocal_39, 0);
			}
			if (unk_0xC1EDB61CE0A4B94E(iLocal_38))
			{
				unk_0xB2C123C54D84E6A7(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0xC1EDB61CE0A4B94E(iLocal_40))
		{
			unk_0xB2C123C54D84E6A7(iLocal_40, 1);
		}
		if (unk_0xC1EDB61CE0A4B94E(iLocal_37))
		{
			unk_0xB2C123C54D84E6A7(iLocal_37, 1);
		}
		if (unk_0xC1EDB61CE0A4B94E(iLocal_39))
		{
			unk_0xB2C123C54D84E6A7(iLocal_39, 1);
		}
		if (unk_0xC1EDB61CE0A4B94E(iLocal_38))
		{
			unk_0xB2C123C54D84E6A7(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_61(int iParam0)
{
	return Global_35742 == iParam0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25212[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x02DE5BF2453C475D() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 20);
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
		unk_0xF5DF8F3392CDD07B();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25212[iLocal_43 /*11*/].f_6 = 0;
		Global_25212[iLocal_43 /*11*/].f_7 = 0;
		Global_25212[iLocal_43 /*11*/].f_8 = 0;
		Global_25212[iLocal_43 /*11*/].f_4 = 0;
		Global_25212[iLocal_43 /*11*/].f_5 = 0;
		Global_25212[iLocal_43 /*11*/].f_2 = 0;
		Global_25212[iLocal_43 /*11*/] = -1;
		Global_25212[iLocal_43 /*11*/].f_1 = 0;
		Global_25212[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x310F6B4E168A8F5D(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_67();
	if (unk_0x83667584AACBB09C(&cLocal_62))
	{
		unk_0x8D72E02348CB74D2(&cLocal_62);
	}
	unk_0xA7792925D2CC214A();
	func_2();
	unk_0xF5DF8F3392CDD07B();
}

void func_67()
{
	func_50();
	if (unk_0xC1EDB61CE0A4B94E(iLocal_37))
	{
		if (unk_0x79469DA5833EACA8(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xF30CBC00D9F6D48D(&iLocal_37);
			unk_0x0B87AFC0B2EECA19(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_39))
	{
		unk_0xF30CBC00D9F6D48D(&iLocal_39);
		unk_0x0B87AFC0B2EECA19(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xC1EDB61CE0A4B94E(iLocal_38))
	{
		unk_0xF30CBC00D9F6D48D(&iLocal_38);
		unk_0x0B87AFC0B2EECA19(joaat("prop_tt_screenstatic"));
	}
}

