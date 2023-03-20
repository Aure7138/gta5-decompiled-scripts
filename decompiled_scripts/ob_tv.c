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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	char cLocal_45[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	char cLocal_61[64] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
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
	sLocal_17 = "NULL";
	iLocal_20 = 3;
	iLocal_24 = 1;
	iLocal_34 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	StringCopy(&cLocal_45, "NULL", 64);
	StringCopy(&cLocal_61, "NULL", 64);
	if (unk_0x7547D7CF93115D6D(2))
	{
		func_65();
	}
	if (unk_0xFD68187442384158(uScriptParam_0))
	{
		iLocal_36 = iScriptParam_0;
		iLocal_39 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64();
		if (unk_0xFD68187442384158(iScriptParam_0))
		{
			if ((iLocal_42 != -1 && (func_63() && !func_62())) && !func_61(iLocal_42))
			{
				func_65();
			}
			if ((unk_0xA4ADA92842355D33() && unk_0x4B08838D3C4A40AA() != 3) && unk_0x34F66A7928F4DB93() == 3)
			{
				func_65();
			}
			if (func_60(13) || func_60(14))
			{
				func_65();
			}
			if (unk_0x74DEF5421E666A8A(iScriptParam_0))
			{
				func_65();
			}
			if (unk_0xDBBE1D10A2F589A7(iScriptParam_0))
			{
				if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
				{
					func_59();
					if (unk_0x5D422B4764FA2ACA(iScriptParam_0) < 950)
					{
						func_65();
					}
					switch (iLocal_28)
					{
						case 0:
							func_56();
							if (iLocal_42 == 5)
							{
								if (func_55(18) == 1 && func_55(20) == 0)
								{
									uLocal_40 = unk_0xCF09B28F3F88F4A2(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x2EAEFE87D100B20F(uLocal_40))
									{
										unk_0xCE30B2ED864F51C2(uLocal_40, 9);
									}
									unk_0x883793591E631A3B();
								}
							}
							if (iLocal_42 == -1)
							{
								func_65();
							}
							else
							{
								func_54();
								unk_0xA046EDDEA035A8DE("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								unk_0xD19A0D6084034A69(0);
								Global_24504[iLocal_42 /*11*/].f_2 = 0;
								Global_24504[iLocal_42 /*11*/].f_6 = 1;
								Global_24504[iLocal_42 /*11*/] = unk_0x4D3E68F73B727E49(0, 2);
								Global_24504[iLocal_42 /*11*/].f_1 = 0;
								Global_24504[iLocal_42 /*11*/].f_4 = 0;
								Global_24504[iLocal_42 /*11*/].f_7 = 0;
								Global_24504[iLocal_42 /*11*/].f_8 = 0;
								Global_24504[iLocal_42 /*11*/].f_10 = 0;
								fLocal_29 = -4f;
								func_52(&uLocal_25);
								func_50();
								func_49();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_28 = 1;
							}
							break;
						
						case 1:
							if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x76A777C5C8CD79A7(iLocal_36) && unk_0x03F9C86DAF30C655(iLocal_36, 1119092736))
							{
								if (func_41() || Global_24504[iLocal_42 /*11*/].f_5)
								{
									iLocal_28 = 2;
								}
							}
							else
							{
								func_40(&iLocal_41);
							}
							break;
						
						case 2:
							func_50();
							if (!func_61(iLocal_42))
							{
								func_40(&iLocal_41);
								if (func_39("TV_HLP1"))
								{
									unk_0x4A4C1A1BC79EFE8F(1);
								}
							}
							if (unk_0xFD68187442384158(iLocal_36))
							{
								if (!unk_0xDAB2315B565377E3(iLocal_36))
								{
									unk_0x07E0AE075425AA06(iLocal_36, 1);
								}
							}
							if (unk_0xFD68187442384158(iLocal_38))
							{
								if (!unk_0xDAB2315B565377E3(iLocal_38))
								{
									unk_0x07E0AE075425AA06(iLocal_38, 1);
								}
							}
							if (unk_0xFD68187442384158(iLocal_37))
							{
								if (unk_0xDAB2315B565377E3(iLocal_37))
								{
									unk_0x07E0AE075425AA06(iLocal_37, 0);
								}
							}
							if (!unk_0xA858564DC37EED5E(&cLocal_45, "NULL"))
							{
								unk_0x09692E4714D73176(&cLocal_45, 0);
							}
							unk_0x056923E4D0D3E587(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0xFD68187442384158(iLocal_39))
							{
								unk_0xEA75A8248D29A0B1(iLocal_39);
							}
							if (!func_61(iLocal_42))
							{
								if ((Global_24504[iLocal_42 /*11*/] == 3 || Global_24504[iLocal_42 /*11*/] == 2) || Global_24504[iLocal_42 /*11*/] == -1)
								{
									Global_24504[iLocal_42 /*11*/] = unk_0x4D3E68F73B727E49(0, 2);
								}
								unk_0x043A7A48748D1849(Global_24504[iLocal_42 /*11*/]);
								unk_0xBC6BBC64C712F62D(fLocal_29);
							}
							else
							{
								iLocal_43 = Global_24504[iLocal_42 /*11*/];
								iLocal_44 = Global_24504[iLocal_42 /*11*/].f_1;
								unk_0x918AE8F31DECBA85(iLocal_43, func_38(iLocal_44), Global_24504[iLocal_42 /*11*/].f_9);
								unk_0x043A7A48748D1849(iLocal_43);
								if (Global_24504[iLocal_42 /*11*/].f_7)
								{
									Global_24504[iLocal_42 /*11*/].f_5 = 0;
									Global_24504[iLocal_42 /*11*/].f_7 = 0;
								}
							}
							Global_24504[iLocal_42 /*11*/].f_2 = 1;
							func_37(133, 1);
							func_37(131, 1);
							func_37(132, 1);
							iLocal_28 = 3;
							break;
						
						case 3:
							if (Global_24504[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							if (Global_24504[iLocal_42 /*11*/].f_7 && func_61(iLocal_42))
							{
								Global_24504[iLocal_42 /*11*/].f_7 = 0;
								iLocal_28 = 6;
							}
							if (!func_35(iLocal_42))
							{
								func_34();
								iLocal_28 = 5;
							}
							else
							{
								func_32();
								if (unk_0x621284AC8FD0C295() == -1)
								{
									unk_0x043A7A48748D1849(Global_24504[iLocal_42 /*11*/]);
								}
								if (func_14())
								{
									iLocal_28 = 6;
								}
							}
							break;
						
						case 5:
							if (func_35(iLocal_42))
							{
								iLocal_28 = 2;
							}
							if (Global_24504[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_41 != -1)
							{
								func_40(&iLocal_41);
							}
							Global_24504[iLocal_42 /*11*/].f_5 = 0;
							Global_24504[iLocal_42 /*11*/].f_4 = 0;
							Global_24504[iLocal_42 /*11*/].f_1 = 0;
							Global_24504[iLocal_42 /*11*/].f_2 = 0;
							Global_24504[iLocal_42 /*11*/].f_7 = 0;
							Global_24504[iLocal_42 /*11*/].f_8 = 0;
							Global_24504[iLocal_42 /*11*/].f_10 = 0;
							iLocal_28 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_65();
			unk_0x883793591E631A3B();
		}
	}
	func_65();
	unk_0x883793591E631A3B();
}

void func_1()
{
	if (iLocal_42 != -1)
	{
		Global_24504[iLocal_42 /*11*/] = unk_0x621284AC8FD0C295();
	}
	fLocal_29 = unk_0x75C910F11FAF0EB6();
	unk_0x043A7A48748D1849(-1);
	func_4();
	if (unk_0x25531002BCF0D968(joaat("family5")) == 0)
	{
		if (!unk_0xA858564DC37EED5E(&cLocal_45, "NULL"))
		{
			unk_0x09692E4714D73176(&cLocal_45, 1);
		}
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x4A4C1A1BC79EFE8F(1);
	}
	func_3();
	func_49();
	if (unk_0xFD68187442384158(iLocal_37))
	{
		if (!unk_0xDAB2315B565377E3(iLocal_37))
		{
			unk_0x07E0AE075425AA06(iLocal_37, 1);
		}
	}
	unk_0xC756F1367BF62795(0);
	func_2();
}

void func_2()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (iLocal_86 == 1)
		{
			unk_0x262D794F49C1A5EB();
			iLocal_86 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_34 == -1)
	{
		unk_0x24A6BECBE7FB7072(iLocal_34);
		if (unk_0xFD68187442384158(iLocal_36))
		{
			if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0x26EA758C2A691D06(iLocal_36) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x07E0AE075425AA06(iLocal_36, 0);
				if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x545012F14516B7DC(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x545012F14516B7DC(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xFD68187442384158(iLocal_38))
	{
		unk_0x07E0AE075425AA06(iLocal_38, 0);
	}
}

void func_4()
{
	if (iLocal_84)
	{
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		if (unk_0xB44AF0EB1FA3729D(uLocal_77))
		{
			unk_0x6F430D0F1783A56E(uLocal_77, 0);
		}
		unk_0x44151B6071157DDD(uLocal_77, 0);
		unk_0xBE5E0E5A454F4D6A(0);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			unk_0x479E7EEEBDEE245D(unk_0x507DA4994C3D8EBD(), 0);
			unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
			unk_0xE6D93A0484388DB3(unk_0x507DA4994C3D8EBD(), Local_30, 1, 0, 2);
			if (!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
			{
				if (bLocal_35 == 1)
				{
					bLocal_35 = false;
					unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
				}
			}
			unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 1);
		}
		if (!unk_0xA858564DC37EED5E(&cLocal_61, "NULL"))
		{
			if (unk_0xA2A45E58AC3DF6C5(&cLocal_61))
			{
				unk_0xAB5C0FE0C680BC7F(&cLocal_61);
			}
		}
		if (unk_0xFD68187442384158(iLocal_38))
		{
			unk_0x07E0AE075425AA06(iLocal_38, 1);
		}
		func_5(0, 1, 0, 0);
		unk_0xC756F1367BF62795(0);
		iLocal_84 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_13(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_12())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_11(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_13(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_11(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_6(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_6(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return 1;
	}
	if (func_7())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_9(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
	}
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_10()
{
	return Global_1312736;
}

int func_11(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

int func_14()
{
	if (!func_61(iLocal_42))
	{
		if (((((((func_28(&uLocal_25) >= 1f && unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_87, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0xB9F7014CB27D77C7(iLocal_36) == unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD())) && !func_27(8, -1)) && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) && unk_0x6A55FEB8D0A8F5D1(unk_0x507DA4994C3D8EBD(), Local_30, 90f)) && !unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) && !unk_0xA4ADA92842355D33())
		{
			if (iLocal_41 == -1)
			{
				func_26();
				func_25(&iLocal_41, 3, "TV_HLP5", 0, 0);
			}
			else if (func_23(iLocal_41, 1))
			{
				func_40(&iLocal_41);
				func_52(&uLocal_25);
				Global_24504[iLocal_42 /*11*/].f_7 = 0;
				if (unk_0x6C900C4DB868DED9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x84795EA8F54230A1(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (func_39("TV_HLP5"))
			{
				unk_0x4A4C1A1BC79EFE8F(1);
			}
			func_2();
			func_40(&iLocal_41);
		}
	}
	return 0;
}

void func_15()
{
	if (iLocal_84 == 0)
	{
		unk_0x0756DDDAD8038AC9(2, 222);
		if (unk_0x58FC9C7DF8FE009B(2, 222))
		{
			func_40(&iLocal_41);
			func_25(&iLocal_41, 3, "TV_HLP6", 0, 0);
			func_22();
		}
	}
	else
	{
		unk_0x500F4CA776CEBD0A(2, 200, 1);
		if (unk_0xDAB2315B565377E3(unk_0x507DA4994C3D8EBD()))
		{
			unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 0);
		}
		if (bLocal_35)
		{
			if (unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
			{
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
			}
		}
		unk_0x0DCB93E7DEB1CC3F();
		unk_0xF522BE2842DE4AF0(unk_0x507DA4994C3D8EBD());
		func_20(1, 1);
		unk_0x0756DDDAD8038AC9(2, 222);
		func_16();
		if (unk_0x58FC9C7DF8FE009B(2, 222) || (unk_0x30E5EC01C9ACF9BC(2) && unk_0xF34A5B7A9ABA0975(2, 200)))
		{
			func_40(&iLocal_41);
			func_4();
		}
	}
}

void func_16()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_19(0))
		{
			func_17(0);
		}
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 2);
	}
}

void func_17(int iParam0)
{
	if (Global_14551)
	{
		func_18(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_12())
	{
		Global_14393.f_1 = 3;
	}
}

void func_18(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_20(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_21(0))
		{
			if (!iLocal_21)
			{
				if (unk_0x6C900C4DB868DED9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x84795EA8F54230A1(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x621284AC8FD0C295() == 0)
				{
					unk_0x043A7A48748D1849(1);
				}
				else
				{
					unk_0x043A7A48748D1849(0);
				}
				iLocal_21 = 1;
			}
		}
		else if (iLocal_21)
		{
			iLocal_21 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x995E5B5A14F2E170(2, 219) - 127);
		if (!iLocal_22)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x75C910F11FAF0EB6();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xBC6BBC64C712F62D(fVar2);
				iLocal_23 = unk_0xF976C624234A4AA8();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x75C910F11FAF0EB6();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xBC6BBC64C712F62D(fVar2);
				iLocal_23 = unk_0xF976C624234A4AA8();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_24 = 1;
			}
			else if (iLocal_24)
			{
				if (unk_0x6C900C4DB868DED9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x84795EA8F54230A1(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_24 = 0;
				}
			}
		}
		if (iLocal_22)
		{
			if (iVar1 == 0 || unk_0xF976C624234A4AA8() > iLocal_23 + 24)
			{
				iLocal_22 = 0;
			}
		}
	}
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x995E5B5A14F2E170(2, 218) - 127);
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

void func_22()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_84 == 0)
	{
		uLocal_77 = unk_0x690E3D6DDF30CA95("DEFAULT_SCRIPTED_CAMERA", Local_78, Local_81, fVar0, 0, 2);
		unk_0x8342C17436A136FB(uLocal_77, 100f);
		unk_0x6F430D0F1783A56E(uLocal_77, 1);
		unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
		if (unk_0xFD68187442384158(iLocal_38))
		{
			unk_0x07E0AE075425AA06(iLocal_38, 0);
		}
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			unk_0x479E7EEEBDEE245D(unk_0x507DA4994C3D8EBD(), 1);
			unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
			if (unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
			{
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
				bLocal_35 = true;
			}
			unk_0xE6D93A0484388DB3(unk_0x507DA4994C3D8EBD(), Local_30, -1, 0, 2);
			unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 0);
		}
		if (!unk_0xA858564DC37EED5E(&cLocal_61, "NULL"))
		{
			if (!unk_0xA2A45E58AC3DF6C5(&cLocal_61))
			{
				unk_0xD56AC40382654643(&cLocal_61);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0xC756F1367BF62795(1);
		iLocal_84 = 1;
	}
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x52A84D9C3A400EA8(unk_0x4D82797EF5035A9F()))
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (unk_0x3574DD38C5FAC832())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/] == 1 && Global_35609[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35609[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35609[iVar0 /*18*/].f_4 = 1;
			Global_35609[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35609[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35609[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_24(int iParam0)
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
		if (Global_35609[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x25531002BCF0D968(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA4ADA92842355D33())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
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
		if (!Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/] = 1;
			Global_35609[iVar0 /*18*/].f_1 = Global_35726;
			Global_35726++;
			Global_35609[iVar0 /*18*/].f_3 = 0;
			Global_35609[iVar0 /*18*/].f_16 = 0;
			Global_35609[iVar0 /*18*/].f_4 = 0;
			Global_35609[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35609[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35609[iVar0 /*18*/].f_5 = iParam3;
			Global_35609[iVar0 /*18*/].f_17 = unk_0xF682120D0C324317();
			Global_35609[iVar0 /*18*/].f_6 = 0;
			if (!unk_0x8FA72E132AAFA62F(sParam4))
			{
				Global_35609[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35609[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35609[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35609[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_26()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (iLocal_86 == 0)
		{
			unk_0xE9AD5BEA272D4AC8("TV_Controls");
			iLocal_86 = 1;
		}
	}
}

bool func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

float func_28(var uParam0)
{
	if (func_31(uParam0))
	{
		if (func_30(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_29() - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_29()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

bool func_30(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 2);
}

bool func_31(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 1);
}

void func_32()
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	unk_0x24A6BECBE7FB7072(iLocal_34);
	unk_0x070F78D7490C1013(4);
	unk_0xED73E1F1A255F54E(1);
	unk_0x22530A75D2E66DB1(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x24A6BECBE7FB7072(unk_0xE4DC0BC078803F6C());
}

void func_33(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x52696228E705571E(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_34()
{
	Global_24504[iLocal_42 /*11*/].f_7 = 0;
	Global_24504[iLocal_42 /*11*/] = unk_0x621284AC8FD0C295();
	fLocal_29 = unk_0x75C910F11FAF0EB6();
	if (unk_0xA2A45E58AC3DF6C5(&cLocal_61))
	{
		unk_0xAB5C0FE0C680BC7F(&cLocal_61);
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x4A4C1A1BC79EFE8F(1);
	}
	func_40(&iLocal_41);
	unk_0x043A7A48748D1849(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_49();
}

int func_35(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_36(unk_0xAF65E5A58BE87D95()) };
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

Vector3 func_36(int iParam0)
{
	return unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(iParam0), 0);
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x55FFE396AA3CA77A(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x96B68C67633472DC(Global_50315[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_38(int iParam0)
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

bool func_39(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_40(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_24(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_41()
{
	if (func_28(&uLocal_25) < 1f)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if ((!unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_87, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x6A55FEB8D0A8F5D1(unk_0x507DA4994C3D8EBD(), Local_30, 90f)) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0xB9F7014CB27D77C7(iLocal_36) != unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (func_27(8, -1))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (Global_87117)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (Global_24504[iLocal_42 /*11*/].f_8)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (iLocal_41 == -1)
	{
		func_25(&iLocal_41, 3, "TV_HLP1", 0, 0);
		return 0;
	}
	if (func_23(iLocal_41, 1))
	{
		func_40(&iLocal_41);
		func_52(&uLocal_25);
		Global_24504[iLocal_42 /*11*/].f_7 = 1;
		if (unk_0x6C900C4DB868DED9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			unk_0x84795EA8F54230A1(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_42(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_42(int iParam0, int iParam1, int iParam2)
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
		func_48((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = iParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_43();
	}
}

void func_43()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_46() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_44();
				}
			}
		}
	}
}

int func_44()
{
	if (func_45(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

int func_46()
{
	return Global_24444;
}

int func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_10();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0xBB59C64F638475F4("tvscreen"))
	{
		unk_0x9BDB594F5771D83A("tvscreen");
		iLocal_34 = -1;
		unk_0x24A6BECBE7FB7072(unk_0xE4DC0BC078803F6C());
	}
}

void func_50()
{
	int iVar0;
	
	if (iLocal_42 == 4)
	{
		func_51();
	}
	if (unk_0xBB59C64F638475F4("tvscreen"))
	{
		unk_0x9BDB594F5771D83A("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0xFD68187442384158(iLocal_36))
	{
		func_65();
	}
	iVar0 = unk_0x26EA758C2A691D06(iLocal_36);
	unk_0xE3FDC10D25BBBCBC("tvscreen", 0);
	unk_0xE40E107E34572484(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_42 != 4)
	{
		while (!unk_0x029AAA721DD70EB9(iVar0))
		{
			if (!unk_0xFD68187442384158(iLocal_36))
			{
				func_65();
			}
			if (!unk_0xDBBE1D10A2F589A7(iLocal_36))
			{
				func_65();
			}
			if (!unk_0xBB59C64F638475F4("tvscreen"))
			{
				unk_0xE3FDC10D25BBBCBC("tvscreen", 0);
			}
			if (!unk_0x029AAA721DD70EB9(iVar0))
			{
				unk_0xE40E107E34572484(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_34 = unk_0x396E111E5411D0EE("tvscreen");
	func_3();
}

void func_51()
{
	if (unk_0xFD68187442384158(iLocal_36))
	{
		if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_36 = 0;
	iLocal_36 = unk_0xD5699E0F473613BB(joaat("v_ilev_mm_screen2"), Local_30, 1, 1, 0);
	unk_0x248DC16118AE5035(iLocal_36, uLocal_33);
	unk_0x479E7EEEBDEE245D(iLocal_36, 1);
	unk_0x07E0AE075425AA06(iLocal_36, 0);
	iLocal_38 = 0;
	iLocal_38 = unk_0xD5699E0F473613BB(joaat("v_ilev_mm_screen2_vl"), Local_30, 1, 1, 0);
	unk_0x248DC16118AE5035(iLocal_38, uLocal_33);
	unk_0x479E7EEEBDEE245D(iLocal_38, 1);
	unk_0x07E0AE075425AA06(iLocal_38, 0);
}

void func_52(var uParam0)
{
	func_53(uParam0, 0f);
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_29() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_54()
{
}

int func_55(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

void func_56()
{
	Local_30 = { unk_0xBF1B13057E5119A4(iLocal_36, 1) };
	uLocal_33 = unk_0xA9D6B28E708753B6(iLocal_36);
	func_58();
	if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_42 = 0;
			Local_78 = { -9.8135f, -1440.913f, 31.3654f };
			Local_81 = { 0f, 0f, -134.3211f };
			Local_87 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_42 = 2;
			Local_78 = { 1978.23f, 3819.65f, 34.2724f };
			Local_81 = { 0f, 0f, -105.15f };
			Local_87 = { 1978.33f, 3819.717f, 32.4501f };
			func_57();
			StringCopy(&cLocal_45, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_42 = 1;
			Local_78 = { 2.5724f, 527.9989f, 176.1619f };
			Local_81 = { 0f, 0f, -29.9488f };
			Local_87 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_42 = 3;
			Local_78 = { -1160.502f, -1520.76f, 10.7393f };
			Local_81 = { 0f, 0f, 60.061f };
			Local_87 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_45, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_61, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0x26EA758C2A691D06(iLocal_36) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_42 = 4;
			Local_78 = { -802.8972f, 172.537f, 74.5801f };
			Local_81 = { 0f, 0f, -69.0273f };
			Local_87 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_42 = 5;
			Local_78 = { -808.3051f, 171.2623f, 77.2822f };
			Local_81 = { 1.8886f, 0f, 110.9232f };
			Local_87 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_57()
{
	iLocal_37 = unk_0xD5699E0F473613BB(joaat("prop_tt_screenstatic"), Local_30, 1, 1, 0);
	unk_0x248DC16118AE5035(iLocal_37, uLocal_33);
	unk_0x07E0AE075425AA06(iLocal_37, 1);
	unk_0x479E7EEEBDEE245D(iLocal_37, 1);
}

void func_58()
{
	unk_0x918AE8F31DECBA85(0, func_38(1), 0);
	if (func_55(22))
	{
		unk_0x918AE8F31DECBA85(1, func_38(12), 0);
	}
	else
	{
		unk_0x918AE8F31DECBA85(1, func_38(2), 0);
	}
}

void func_59()
{
	if (iLocal_42 == -1)
	{
		return;
	}
	if (Global_24504[iLocal_42 /*11*/].f_10 == 0)
	{
		if (iLocal_85 == 1)
		{
			if (unk_0xFD68187442384158(iLocal_39))
			{
				unk_0xF732465E1FF70CE4(iLocal_39, 0);
			}
			if (unk_0xFD68187442384158(iLocal_36))
			{
				unk_0xF732465E1FF70CE4(iLocal_36, 0);
			}
			if (unk_0xFD68187442384158(iLocal_38))
			{
				unk_0xF732465E1FF70CE4(iLocal_38, 0);
			}
			if (unk_0xFD68187442384158(iLocal_37))
			{
				unk_0xF732465E1FF70CE4(iLocal_37, 0);
			}
			iLocal_85 = 0;
		}
	}
	else if (iLocal_85 == 0)
	{
		if (unk_0xFD68187442384158(iLocal_39))
		{
			unk_0xF732465E1FF70CE4(iLocal_39, 1);
		}
		if (unk_0xFD68187442384158(iLocal_36))
		{
			unk_0xF732465E1FF70CE4(iLocal_36, 1);
		}
		if (unk_0xFD68187442384158(iLocal_38))
		{
			unk_0xF732465E1FF70CE4(iLocal_38, 1);
		}
		if (unk_0xFD68187442384158(iLocal_37))
		{
			unk_0xF732465E1FF70CE4(iLocal_37, 1);
		}
		iLocal_85 = 1;
	}
}

bool func_60(int iParam0)
{
	return Global_34909 == iParam0;
}

int func_61(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_24504[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0xE6BC404A1178AB93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

void func_64()
{
}

void func_65()
{
	if (iLocal_42 == -1)
	{
		unk_0x883793591E631A3B();
	}
	func_40(&iLocal_41);
	if (iLocal_42 != -1)
	{
		func_1();
		Global_24504[iLocal_42 /*11*/].f_6 = 0;
		Global_24504[iLocal_42 /*11*/].f_7 = 0;
		Global_24504[iLocal_42 /*11*/].f_8 = 0;
		Global_24504[iLocal_42 /*11*/].f_4 = 0;
		Global_24504[iLocal_42 /*11*/].f_5 = 0;
		Global_24504[iLocal_42 /*11*/].f_2 = 0;
		Global_24504[iLocal_42 /*11*/] = -1;
		Global_24504[iLocal_42 /*11*/].f_1 = 0;
		Global_24504[iLocal_42 /*11*/].f_10 = 0;
	}
	if ((func_39("TV_HLP1") || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x4A4C1A1BC79EFE8F(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_66();
	if (unk_0xA2A45E58AC3DF6C5(&cLocal_61))
	{
		unk_0xAB5C0FE0C680BC7F(&cLocal_61);
	}
	unk_0x990713D1BE85B2B1();
	func_2();
	unk_0x883793591E631A3B();
}

void func_66()
{
	func_49();
	if (unk_0xFD68187442384158(iLocal_36))
	{
		if (unk_0x26EA758C2A691D06(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x4095FD029041DD48(&iLocal_36);
			unk_0xFF467904A8A12BBE(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xFD68187442384158(iLocal_38))
	{
		unk_0x4095FD029041DD48(&iLocal_38);
		unk_0xFF467904A8A12BBE(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xFD68187442384158(iLocal_37))
	{
		unk_0x4095FD029041DD48(&iLocal_37);
		unk_0xFF467904A8A12BBE(joaat("prop_tt_screenstatic"));
	}
}

