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
	if (unk_0x76BF814AB8D4CAB8(2))
	{
		func_66();
	}
	if (unk_0x31F12808DC47A9E5(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_65();
		if (unk_0x31F12808DC47A9E5(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0x884389A95331F131(iScriptParam_0))
			{
				func_66();
			}
			if (unk_0x7F92B610D05B72B6(iScriptParam_0))
			{
				if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
				{
					func_60();
					if (unk_0x0A088F357EF627CA(iScriptParam_0) < 950)
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
									uLocal_41 = unk_0x90399E546A390B78(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0xCA19B2AA1210BF50(uLocal_41))
									{
										unk_0xAA102F4A9C238A21(uLocal_41, 9);
									}
									unk_0x810C5D6462DD69E6();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0x4AF561FE7B998AD0("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xD2F6D4358B6E3AD0(0);
								Global_25293[iLocal_43 /*11*/].f_2 = 0;
								Global_25293[iLocal_43 /*11*/].f_6 = 1;
								Global_25293[iLocal_43 /*11*/] = unk_0x61E9B3BFA06B017B(0, 2);
								Global_25293[iLocal_43 /*11*/].f_1 = 0;
								Global_25293[iLocal_43 /*11*/].f_4 = 0;
								Global_25293[iLocal_43 /*11*/].f_7 = 0;
								Global_25293[iLocal_43 /*11*/].f_8 = 0;
								Global_25293[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&uLocal_26);
								func_51();
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x6F58FF03D3469D9A(iLocal_37) && unk_0xE886206626BBEA49(iLocal_37, 1119092736))
							{
								if (func_42() || Global_25293[iLocal_43 /*11*/].f_5)
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
									unk_0xEFF1F12403847394(1);
								}
							}
							if (unk_0x31F12808DC47A9E5(iLocal_37))
							{
								if (!unk_0xBF0517F7142EEB5B(iLocal_37))
								{
									unk_0xA12407EB7D7CF146(iLocal_37, 1, 0);
								}
							}
							if (unk_0x31F12808DC47A9E5(iLocal_39))
							{
								if (!unk_0xBF0517F7142EEB5B(iLocal_39))
								{
									unk_0xA12407EB7D7CF146(iLocal_39, 1, 0);
								}
							}
							if (unk_0x31F12808DC47A9E5(iLocal_38))
							{
								if (unk_0xBF0517F7142EEB5B(iLocal_38))
								{
									unk_0xA12407EB7D7CF146(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x9D39145AD645E383(&cLocal_46, "NULL"))
							{
								unk_0x2FA5BED6B7B0F0D4(&cLocal_46, 0);
							}
							unk_0x9B8733B2AEDC716A(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x31F12808DC47A9E5(iLocal_40))
							{
								unk_0x7979689DB9529B1C(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25293[iLocal_43 /*11*/] == 3 || Global_25293[iLocal_43 /*11*/] == 2) || Global_25293[iLocal_43 /*11*/] == -1)
								{
									Global_25293[iLocal_43 /*11*/] = unk_0x61E9B3BFA06B017B(0, 2);
								}
								unk_0x7E0C4A12DCD5167E(Global_25293[iLocal_43 /*11*/]);
								unk_0x0FA2D000E1718112(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25293[iLocal_43 /*11*/];
								iLocal_45 = Global_25293[iLocal_43 /*11*/].f_1;
								unk_0x77011542F2A02676(iLocal_44, func_39(iLocal_45), Global_25293[iLocal_43 /*11*/].f_9);
								unk_0x7E0C4A12DCD5167E(iLocal_44);
								if (Global_25293[iLocal_43 /*11*/].f_7)
								{
									Global_25293[iLocal_43 /*11*/].f_5 = 0;
									Global_25293[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25293[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25293[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25293[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25293[iLocal_43 /*11*/].f_7 = 0;
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
								if (unk_0x2EA0C50118592A68() == -1)
								{
									unk_0x7E0C4A12DCD5167E(Global_25293[iLocal_43 /*11*/]);
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
							if (Global_25293[iLocal_43 /*11*/].f_4)
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
							Global_25293[iLocal_43 /*11*/].f_5 = 0;
							Global_25293[iLocal_43 /*11*/].f_4 = 0;
							Global_25293[iLocal_43 /*11*/].f_1 = 0;
							Global_25293[iLocal_43 /*11*/].f_2 = 0;
							Global_25293[iLocal_43 /*11*/].f_7 = 0;
							Global_25293[iLocal_43 /*11*/].f_8 = 0;
							Global_25293[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0x810C5D6462DD69E6();
		}
	}
	func_66();
	unk_0x810C5D6462DD69E6();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25293[iLocal_43 /*11*/] = unk_0x2EA0C50118592A68();
	}
	fLocal_30 = unk_0x2AAC98A9C8D68056();
	unk_0x7E0C4A12DCD5167E(-1);
	func_4();
	if (unk_0xE7FAF8E78F7D3A73(joaat("family5")) == 0)
	{
		if (!unk_0x9D39145AD645E383(&cLocal_46, "NULL"))
		{
			unk_0x2FA5BED6B7B0F0D4(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0xEFF1F12403847394(1);
	}
	func_3();
	func_50();
	if (unk_0x31F12808DC47A9E5(iLocal_38))
	{
		if (!unk_0xBF0517F7142EEB5B(iLocal_38))
		{
			unk_0xA12407EB7D7CF146(iLocal_38, 1, 0);
		}
	}
	unk_0x24D5FD8CE6E67907(0);
	func_2();
}

void func_2()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (iLocal_87 == 1)
		{
			unk_0x2216A42B2ED12596();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0xC1B98DE2C95E1EE2(iLocal_35);
		if (unk_0x31F12808DC47A9E5(iLocal_37))
		{
			if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xA12407EB7D7CF146(iLocal_37, 0, 0);
				if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x754933C14FFBA8EB(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x754933C14FFBA8EB(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_39))
	{
		unk_0xA12407EB7D7CF146(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
		if (unk_0xEFEFF8C622C1C559(uLocal_78))
		{
			unk_0x2C535610856B3F4D(uLocal_78, 0);
		}
		unk_0x13AD763DBD687842(uLocal_78, 0);
		unk_0xA3F41A1968319181(0);
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 0);
			unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
			unk_0x13C89D4679DD9966(unk_0x18F7BE9ACB7D08F4(), Local_31, 1, 0, 2);
			if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				}
			}
			unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 1, 0);
		}
		if (!unk_0x9D39145AD645E383(&cLocal_62, "NULL"))
		{
			if (unk_0x36CC410474001FBC(&cLocal_62))
			{
				unk_0xA11D9B06B99FE786(&cLocal_62);
			}
		}
		if (unk_0x31F12808DC47A9E5(iLocal_39))
		{
			unk_0xA12407EB7D7CF146(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0x24D5FD8CE6E67907(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_14(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_13())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_14(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_10(unk_0x8CFC7D6E1DA5D304())) && !func_7(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_6())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_10(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_6()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
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

int func_9()
{
	return Global_1312736;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&uLocal_26) >= 1f && unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x338C4427806FEB6D(iLocal_37) == unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4())) && !func_28(8, -1)) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) && unk_0xDC43CD42234DF8D3(unk_0x18F7BE9ACB7D08F4(), Local_31, 90f)) && !unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) && !unk_0x51CFE20A158947F4())
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
				Global_25293[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0x195551DAFD18DAD1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x929C3CBA660376D5(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0xEFF1F12403847394(1);
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
		unk_0xFCBDBEB257C6D3FB(2, 222);
		if (unk_0xFC0C00F9DE2AEC93(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0x9C7EE7DE7041A3F4(2, 200, 1);
		if (unk_0xBF0517F7142EEB5B(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
			}
		}
		unk_0x3F19B70555683951();
		unk_0x72F2BABA79D89D3A(unk_0x18F7BE9ACB7D08F4());
		func_21(1, 1);
		unk_0xFCBDBEB257C6D3FB(2, 222);
		func_17(0);
		if (unk_0xFC0C00F9DE2AEC93(2, 222) || (unk_0xC9FF45E740135482(2) && unk_0x1A3F4FBE2944681B(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14615)
	{
		func_19(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_13())
	{
		Global_14453.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
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
				if (unk_0x195551DAFD18DAD1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x929C3CBA660376D5(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x2EA0C50118592A68() == 0)
				{
					unk_0x7E0C4A12DCD5167E(1);
				}
				else
				{
					unk_0x7E0C4A12DCD5167E(0);
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
		iVar1 = (unk_0xFBA7BDC53CCB8FC2(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x2AAC98A9C8D68056();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x0FA2D000E1718112(fVar2);
				iLocal_24 = unk_0x5AFB8ED811F05E4D();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x2AAC98A9C8D68056();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x0FA2D000E1718112(fVar2);
				iLocal_24 = unk_0x5AFB8ED811F05E4D();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x195551DAFD18DAD1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x929C3CBA660376D5(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x5AFB8ED811F05E4D() > iLocal_24 + 24)
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
	iVar1 = (unk_0xFBA7BDC53CCB8FC2(2, 218) - 127);
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
		uLocal_78 = unk_0x2BD71EC98C2FE73A("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x1E387981109B2EC3(uLocal_78, 100f);
		unk_0x2C535610856B3F4D(uLocal_78, 1);
		unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
		if (unk_0x31F12808DC47A9E5(iLocal_39))
		{
			unk_0xA12407EB7D7CF146(iLocal_39, 0, 0);
		}
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 1);
			unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
			if (unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x13C89D4679DD9966(unk_0x18F7BE9ACB7D08F4(), Local_31, -1, 0, 2);
			unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), 0, 0);
		}
		if (!unk_0x9D39145AD645E383(&cLocal_62, "NULL"))
		{
			if (!unk_0x36CC410474001FBC(&cLocal_62))
			{
				unk_0x64D773F3BE6DC50A(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x24D5FD8CE6E67907(1);
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
	if (!unk_0x557001354138B7FB(unk_0x0A91D180DDC7A1B8()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0xEAE1A41FBC3984B1())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36563[iVar0 /*32*/] == 1 && Global_36563[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36563[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36563[iVar0 /*32*/].f_5 = 1;
			Global_36563[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36563[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36563[iVar0 /*32*/].f_7)
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
		if (Global_36563[iVar0 /*32*/].f_1 == iParam0)
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
	
	if (unk_0xE7FAF8E78F7D3A73(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x51CFE20A158947F4())
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
		if (!Global_36563[iVar0 /*32*/])
		{
			Global_36563[iVar0 /*32*/] = 1;
			Global_36563[iVar0 /*32*/].f_1 = Global_36764;
			Global_36764++;
			Global_36563[iVar0 /*32*/].f_4 = 0;
			Global_36563[iVar0 /*32*/].f_29 = 0;
			Global_36563[iVar0 /*32*/].f_5 = 0;
			Global_36563[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36563[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36563[iVar0 /*32*/].f_6 = iParam3;
			Global_36563[iVar0 /*32*/].f_31 = unk_0xBCF9D020FA9C313D();
			Global_36563[iVar0 /*32*/].f_7 = 0;
			Global_36563[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xFAFFA408239A026B(sParam4))
			{
				Global_36563[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36563[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36563[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36563[iVar0 /*32*/].f_12 = 0;
				Global_36563[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36563[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (iLocal_87 == 0)
		{
			unk_0x011B3C098515A590("TV_Controls");
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
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
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
			return (func_30(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

bool func_31(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

bool func_32(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 1);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0xC1B98DE2C95E1EE2(iLocal_35);
	unk_0x31B38BBC4423BEAF(4);
	unk_0x5C8C4D02D2F22207(1);
	unk_0x459B5E8CFA001861(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0xC1B98DE2C95E1EE2(unk_0x0C13C3165D7B5CD2());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x47DA03BCFF902E84(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()
{
	Global_25293[iLocal_43 /*11*/].f_7 = 0;
	Global_25293[iLocal_43 /*11*/] = unk_0x2EA0C50118592A68();
	fLocal_30 = unk_0x2AAC98A9C8D68056();
	if (unk_0x36CC410474001FBC(&cLocal_62))
	{
		unk_0xA11D9B06B99FE786(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0xEFF1F12403847394(1);
	}
	func_41(&iLocal_42);
	unk_0x7E0C4A12DCD5167E(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_50();
}

int func_36(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_37(unk_0x8CFC7D6E1DA5D304()) };
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
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
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
		if (Global_36563[iVar0 /*32*/])
		{
			Global_36563[iVar0 /*32*/].f_7 = 1;
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
	if ((!unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0xDC43CD42234DF8D3(unk_0x18F7BE9ACB7D08F4(), Local_31, 90f)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x338C4427806FEB6D(iLocal_37) != unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_89902)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25293[iLocal_43 /*11*/].f_8)
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
		Global_25293[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0x195551DAFD18DAD1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x929C3CBA660376D5(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
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
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_47() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
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
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_47()
{
	return Global_25233;
}

int func_48(int iParam0, int iParam1)
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
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
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
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0xC4C5E5A7D6CF16CC("tvscreen"))
	{
		unk_0xE6A3D06B88B7827C("tvscreen");
		iLocal_35 = -1;
		unk_0xC1B98DE2C95E1EE2(unk_0x0C13C3165D7B5CD2());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (unk_0xC4C5E5A7D6CF16CC("tvscreen"))
	{
		unk_0xE6A3D06B88B7827C("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x31F12808DC47A9E5(iLocal_37))
	{
		func_66();
	}
	iVar0 = unk_0x4F69FBD64CDF125B(iLocal_37);
	unk_0x04E46F978DBA89A5("tvscreen", 0);
	unk_0xE4D6B173230EC834(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x1F6ABABD0B3B0260(iVar0))
		{
			if (!unk_0x31F12808DC47A9E5(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x7F92B610D05B72B6(iLocal_37))
			{
				func_66();
			}
			if (!unk_0xC4C5E5A7D6CF16CC("tvscreen"))
			{
				unk_0x04E46F978DBA89A5("tvscreen", 0);
			}
			if (!unk_0x1F6ABABD0B3B0260(iVar0))
			{
				unk_0xE4D6B173230EC834(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0x342E43BC5418FEA4("tvscreen");
	func_3();
}

void func_52()
{
	if (unk_0x31F12808DC47A9E5(iLocal_37))
	{
		if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0xF9AE1AECDAABDFA9(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0xB88121FF8A34A66F(iLocal_37, uLocal_34);
	unk_0x73D7E57BF0ED7FEB(iLocal_37, 1);
	unk_0xA12407EB7D7CF146(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0xF9AE1AECDAABDFA9(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0xB88121FF8A34A66F(iLocal_39, uLocal_34);
	unk_0x73D7E57BF0ED7FEB(iLocal_39, 1);
	unk_0xA12407EB7D7CF146(iLocal_39, 0, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
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
	return Global_104551.f_9055.f_330[iParam0 /*6*/];
}

void func_57()
{
	Local_31 = { unk_0x761660F5CE986DC4(iLocal_37, 1) };
	uLocal_34 = unk_0x93FDA3BF59E7B77F(iLocal_37);
	func_59();
	if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("prop_tv_03"))
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
	else if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("prop_trev_tv_01"))
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
	else if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("prop_tv_flat_01"))
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
	else if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("prop_tv_flat_02"))
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
	else if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("des_tvsmash_start"))
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
	iLocal_38 = unk_0xF9AE1AECDAABDFA9(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0xB88121FF8A34A66F(iLocal_38, uLocal_34);
	unk_0xA12407EB7D7CF146(iLocal_38, 1, 0);
	unk_0x73D7E57BF0ED7FEB(iLocal_38, 1);
}

void func_59()
{
	unk_0x77011542F2A02676(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0x77011542F2A02676(1, func_39(12), 0);
	}
	else
	{
		unk_0x77011542F2A02676(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25293[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x31F12808DC47A9E5(iLocal_40))
			{
				unk_0xF74B493CCF90C997(iLocal_40, 0);
			}
			if (unk_0x31F12808DC47A9E5(iLocal_37))
			{
				unk_0xF74B493CCF90C997(iLocal_37, 0);
			}
			if (unk_0x31F12808DC47A9E5(iLocal_39))
			{
				unk_0xF74B493CCF90C997(iLocal_39, 0);
			}
			if (unk_0x31F12808DC47A9E5(iLocal_38))
			{
				unk_0xF74B493CCF90C997(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_40))
		{
			unk_0xF74B493CCF90C997(iLocal_40, 1);
		}
		if (unk_0x31F12808DC47A9E5(iLocal_37))
		{
			unk_0xF74B493CCF90C997(iLocal_37, 1);
		}
		if (unk_0x31F12808DC47A9E5(iLocal_39))
		{
			unk_0xF74B493CCF90C997(iLocal_39, 1);
		}
		if (unk_0x31F12808DC47A9E5(iLocal_38))
		{
			unk_0xF74B493CCF90C997(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_61(int iParam0)
{
	return Global_35859 == iParam0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25293[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x05C1AD623B6C5E86() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
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
		unk_0x810C5D6462DD69E6();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25293[iLocal_43 /*11*/].f_6 = 0;
		Global_25293[iLocal_43 /*11*/].f_7 = 0;
		Global_25293[iLocal_43 /*11*/].f_8 = 0;
		Global_25293[iLocal_43 /*11*/].f_4 = 0;
		Global_25293[iLocal_43 /*11*/].f_5 = 0;
		Global_25293[iLocal_43 /*11*/].f_2 = 0;
		Global_25293[iLocal_43 /*11*/] = -1;
		Global_25293[iLocal_43 /*11*/].f_1 = 0;
		Global_25293[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0xEFF1F12403847394(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_67();
	if (unk_0x36CC410474001FBC(&cLocal_62))
	{
		unk_0xA11D9B06B99FE786(&cLocal_62);
	}
	unk_0x4B70843F29C6229B();
	func_2();
	unk_0x810C5D6462DD69E6();
}

void func_67()
{
	func_50();
	if (unk_0x31F12808DC47A9E5(iLocal_37))
	{
		if (unk_0x4F69FBD64CDF125B(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x5BE35A26B9097351(&iLocal_37);
			unk_0x419C9117019F2E5A(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_39))
	{
		unk_0x5BE35A26B9097351(&iLocal_39);
		unk_0x419C9117019F2E5A(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x31F12808DC47A9E5(iLocal_38))
	{
		unk_0x5BE35A26B9097351(&iLocal_38);
		unk_0x419C9117019F2E5A(joaat("prop_tt_screenstatic"));
	}
}

