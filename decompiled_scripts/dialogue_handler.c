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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char cLocal_38[24] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char cLocal_44[24] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	char cLocal_50[64] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	char cLocal_66[24] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	char* sLocal_72 = NULL;
	char cLocal_73[24] = "";
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	char cLocal_85[24] = "";
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	char* sLocal_91 = NULL;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_142[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_173[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_204[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_235 = 0;
	var uLocal_236 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0xEE998050210A7287();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB03A1684359C50A1(Global_2324, 1))
		{
			if (!unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				if (unk_0x36328FCBA2944E1F())
				{
					if (Global_14441)
					{
						func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14396)
						{
							func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x62148293B793073B(&Global_2324, 1);
				}
			}
		}
		if (unk_0xB03A1684359C50A1(Global_14622, 0))
		{
			if (!func_105())
			{
				if (!unk_0xB03A1684359C50A1(Global_14622, 1))
				{
					unk_0xD2A9C3F486236CC5(&Global_14622, 1);
					if (unk_0x44243F2E2F58B8E3())
					{
						uLocal_106 = unk_0xE92FCF3C05C2EF1D();
					}
					else
					{
						iLocal_102 = unk_0x5AFB8ED811F05E4D();
					}
				}
				if (unk_0x44243F2E2F58B8E3())
				{
					iLocal_108 = unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), uLocal_106);
				}
				else
				{
					iLocal_103 = unk_0x5AFB8ED811F05E4D();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_103(&Global_15210, &Global_15826, &Global_15746, Global_15759, Global_16741, Global_16742, 0))
					{
						Global_14622 = 0;
					}
				}
				else
				{
					Global_14622 = 0;
				}
			}
		}
		if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0xB03A1684359C50A1(Global_1646129.f_17, 4))
		{
			if (Global_15756 != 0)
			{
				if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) == 0)
				{
					func_102();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_98();
		}
		switch (Global_15756)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15762)
				{
					if (Global_15752 == 0)
					{
						func_96();
					}
					else
					{
						func_95();
						func_96();
					}
				}
				else if (Global_15752 == 0)
				{
					func_85();
				}
				else
				{
					func_95();
					func_67();
				}
				break;
			
			case 2:
				func_61();
				break;
			
			case 3:
				func_57();
				break;
			
			case 4:
				if (Global_15762)
				{
					if (Global_15764)
					{
						func_56();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_15766 = 0;
	Global_14452 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15767 = 0;
	Global_15768 = 0;
	Global_15769 = 0;
	Global_15770 = 0;
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
	Global_15760 = 0;
	Global_15761 = 0;
	Global_15803 = 0;
	Global_15804 = 0;
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15808 = 0;
	Global_15811 = 0;
	Global_15810 = 0;
	Global_16773 = 0;
	Global_15813 = 0;
	if (Global_14453.f_1 == 10)
	{
	}
	else if (unk_0xB03A1684359C50A1(Global_2323, 11))
	{
		func_3();
	}
	Global_15762 = 0;
	Global_15763 = 0;
	Global_15764 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16746 = 0;
	Global_16753 = 0;
	Global_16752 = 0;
	Global_16749 = 0;
	Global_16748 = 0;
	Global_16750 = 0;
	Global_16751 = 0;
	Global_15752 = 0;
	Global_15753 = 0;
	Global_15754 = 0;
	Global_15755 = 0;
	Global_16014 = 0;
	Global_16777 = 5000;
	Global_14436 = 0;
	unk_0x62148293B793073B(&Global_2323, 20);
	unk_0x62148293B793073B(&Global_2323, 24);
	unk_0x62148293B793073B(&Global_2324, 23);
	unk_0x62148293B793073B(&Global_2325, 0);
	unk_0x62148293B793073B(&Global_2324, 9);
	unk_0x62148293B793073B(&Global_2324, 31);
	unk_0x62148293B793073B(&Global_2324, 17);
	unk_0x62148293B793073B(&Global_2325, 5);
	Global_16740 = 0;
	Global_16739 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		Global_15756 = 4;
	}
	else
	{
		Global_15756 = 0;
		Global_16767 = 0;
		Global_16778 = unk_0x5AFB8ED811F05E4D();
	}
}

void func_3()
{
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 11))
			{
				if (!Global_14396)
				{
					unk_0xC6FD5F4CF31458B8(unk_0x18F7BE9ACB7D08F4(), 0, 1);
				}
				if (Global_70852)
				{
					unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 244, 1);
					unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 243, 1);
					unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 242, 1);
				}
				unk_0x62148293B793073B(&Global_2323, 11);
			}
		}
	}
}

void func_4()
{
	Global_15766 = 0;
	Global_14452 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4()))
		{
			if (Global_15812 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_16748 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16767 == 1)
			{
				unk_0x5925FC00F6585E16(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16767 == 0)
		{
			unk_0x815093B4702C59D8();
			iLocal_31 = 0;
		}
	}
	else if (Global_16750 > 0)
	{
		iLocal_37 = unk_0x5AFB8ED811F05E4D();
		if ((iLocal_37 - iLocal_36) > Global_16750)
		{
			unk_0x4BF2327D870EC5DE();
			Global_16748 = 0;
		}
	}
	if (Global_16767 == 0)
	{
		if (!unk_0x85FDEF76CDBAD589())
		{
			Global_15756 = 6;
		}
	}
}

void func_6()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x36328FCBA2944E1F())
	{
		if (!unk_0xB03A1684359C50A1(Global_2323, 11))
		{
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (Global_70852 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
			{
				if (Global_70852 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_70852 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16767 == 1)
		{
			if (Global_16768 == 1)
			{
				unk_0x5925FC00F6585E16(1);
				iLocal_31 = 1;
				Global_16768 = 0;
			}
		}
	}
	else if (Global_16767 == 0)
	{
		if (Global_16768 == 1)
		{
			unk_0x815093B4702C59D8();
			iLocal_31 = 0;
			Global_16768 = 0;
		}
	}
	if (Global_15809 == 0)
	{
		if (!Global_15769)
		{
			if (!unk_0xB03A1684359C50A1(Global_2324, 31))
			{
				if (!unk_0xB03A1684359C50A1(Global_2324, 27))
				{
					if (func_49())
					{
						if (Global_14453.f_1 > 6)
						{
							unk_0xD2A9C3F486236CC5(&Global_2324, 24);
							unk_0xD2A9C3F486236CC5(&Global_2324, 27);
							unk_0x62148293B793073B(&Global_2324, 26);
							unk_0x62148293B793073B(&Global_2324, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0x36328FCBA2944E1F() == 0 && Global_15769 == 0)
	{
		if (Global_15809 == 1)
		{
			unk_0xD2A9C3F486236CC5(&Global_2324, 23);
		}
		else
		{
			unk_0x62148293B793073B(&Global_2324, 23);
		}
		if (Global_15813)
		{
			if (Global_15809 == 0)
			{
				Global_15375 = { Global_15814 };
				Global_15832 = { Global_15820 };
				Global_15766 = 0;
				Global_16773 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15811)
		{
			while (Global_15809 == 1)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14453.f_1 < 6)
				{
					Global_15809 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15811)
						{
							iLocal_30 = 1;
							Global_16771 = 1;
							func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15898, &(Global_104551.f_28020[Global_1638 /*29*/].f_7), &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
							func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14441)
							{
								func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0xD2A9C3F486236CC5(&Global_2323, 17);
								func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0xD2A9C3F486236CC5(&Global_2323, 17);
								func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16769 = 1;
							if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
							{
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15898, "CELL_300", &(Global_117[Global_1638 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15898, &(Global_104551.f_28020[Global_1638 /*29*/].f_7), &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
								func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14441)
							{
								func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0x62148293B793073B(&Global_2323, 17);
						}
					}
					if (func_45(2, Global_14422, 0))
					{
						func_43();
						Global_14379 = 0.19f;
						Global_15809 = 0;
						func_41();
						if (Global_15811)
						{
							Global_15375 = { Global_15892 };
							Global_16773 = 5;
						}
						else if (Global_15754 > 0)
						{
							Global_16014 = 1;
							Global_15756 = 0;
							Global_16777 = 0;
							if (unk_0xB03A1684359C50A1(Global_2324, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16740 + 1)
								{
									uLocal_111[iVar0] = func_40(&(Global_16015[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_40(&(Global_16377[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16740, &Global_15045, Global_1638, &Global_15832, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_15754 == 2)
							{
								func_22(&Global_15045, Global_1638, &Global_15832, &(Global_15910[0 /*6*/]), &(Global_15962[0 /*6*/]), &(Global_15910[1 /*6*/]), &(Global_15962[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16773 = 1;
							Global_16769 = 0;
							Global_16771 = 0;
							Global_15766 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15375 = { Global_15850 };
							Global_16773 = 1;
						}
						Global_16769 = 0;
						Global_16771 = 0;
						Global_15766 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14423, 0) || unk_0xB03A1684359C50A1(Global_2323, 24))
					{
						func_43();
						Global_14379 = 0.19f;
						Global_15809 = 0;
						func_41();
						if (Global_15811)
						{
							Global_15375 = { Global_15886 };
							Global_16773 = 4;
						}
						else if (Global_15754 > 0)
						{
							Global_16014 = 1;
							Global_15756 = 0;
							Global_16777 = 0;
							if (unk_0xB03A1684359C50A1(Global_2324, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16739 + 1)
								{
									uLocal_173[iVar1] = func_40(&(Global_16196[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_40(&(Global_16558[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16739, &Global_15045, Global_1638, &Global_15832, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_15754 == 2)
							{
								func_22(&Global_15045, Global_1638, &Global_15832, &(Global_15923[0 /*6*/]), &(Global_15975[0 /*6*/]), &(Global_15923[1 /*6*/]), &(Global_15975[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16773 = 2;
							Global_16769 = 0;
							Global_16771 = 0;
							Global_15766 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15375 = { Global_15856 };
							Global_16773 = 2;
						}
						Global_16769 = 0;
						Global_16771 = 0;
						Global_15766 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14425, 0))
					{
						if (Global_15811)
						{
							Global_14379 = 0.19f;
							Global_15809 = 0;
							func_41();
							func_43();
							Global_15375 = { Global_15880 };
							Global_16773 = 3;
							Global_16769 = 0;
							Global_16771 = 0;
							Global_15766 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_15809)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14453.f_1 < 6)
				{
					Global_15809 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14434, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14434, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14434, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14441)
						{
							func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x62148293B793073B(&Global_2323, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14422, 0))
					{
						func_43();
						Global_15809 = 0;
						func_41();
						unk_0x76F4FB5EFF5BDED5(Global_14434, "GET_CURRENT_SELECTION");
						uLocal_236 = unk_0xA2A6B56DFF85AF55();
						while (!unk_0xD3DD1071A6494834(uLocal_236))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iVar2 = unk_0x8B770DAB6473F83C(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_15375 = { Global_15886 };
								Global_16773 = 4;
								break;
							
							case 1:
								Global_15375 = { Global_15880 };
								Global_16773 = 3;
								break;
							
							case 2:
								Global_15375 = { Global_15892 };
								Global_16773 = 5;
								break;
						}
						Global_16769 = 0;
						Global_16771 = 0;
						Global_15766 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14423, 0))
					{
						Global_15809 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15757 == 0)
		{
			unk_0xBE97F4E2B659331B(0);
			unk_0xC1B1E9A034A63A62(0);
			while (unk_0x83666F9FB8FEBD4B() < 900 && Global_14453.f_1 == 9)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_15756 = 6;
		}
		unk_0x929C3CBA660376D5(-1, "Hang_Up", &Global_14442, 1);
		func_13();
		Global_14453.f_1 = Global_14455;
		func_8();
	}
	else if (Global_14615 == 0)
	{
		if (func_45(2, Global_14421, 0))
		{
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
				{
					if (unk_0xB03A1684359C50A1(Global_2323, 20))
					{
					}
					else
					{
						Global_14431 = 1;
						func_41();
						unk_0xBE97F4E2B659331B(0);
						Global_15805 = 1;
						Global_15806 = 1;
						Global_15756 = 6;
						func_13();
						Global_14453.f_1 = Global_14455;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	struct<3> Var0;
	
	if (Global_14436 == 1)
	{
		return;
	}
	if (Global_14453.f_1 < 4)
	{
		return;
	}
	while (!unk_0x5C716BBF766E1C70(Global_14434))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14453.f_1)
	{
		case 6:
			func_46(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2928);
			if (Global_2928 == 1)
			{
				func_46(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14457), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14457;
			}
			else
			{
				func_46(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14458), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14458;
			}
			if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14617 == 0)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x62148293B793073B(&Global_2323, 17);
			}
			else if (Global_70852)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x62148293B793073B(&Global_2323, 17);
			}
			else
			{
				if (Global_14616 == 1)
				{
					if (Global_14441)
					{
						func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14441)
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xD2A9C3F486236CC5(&Global_2323, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
			if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14452 == 1)
			{
				func_10();
				func_46(Global_14434, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104551.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15769)
				{
					unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(4);
					unk_0x22DD5585E00B80C3(0);
					unk_0x22DD5585E00B80C3(2);
					unk_0x0ECBA72FAFCEBA59("CELL_CONDFON");
					unk_0xB4179F7E88F4C4BF(&Global_15771);
					unk_0xC30401186AC91B01();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xE2B30EB9B14EEAB2();
				}
				else if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
				{
					func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_7), "CELL_217", &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
				}
				func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15756 == 4 || Global_15756 == 3)
			{
				func_46(Global_14434, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104551.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15769)
				{
					unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(4);
					unk_0x22DD5585E00B80C3(0);
					unk_0x22DD5585E00B80C3(2);
					unk_0x0ECBA72FAFCEBA59("CELL_CONDFON");
					unk_0xB4179F7E88F4C4BF(&Global_15771);
					unk_0xC30401186AC91B01();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xE2B30EB9B14EEAB2();
				}
				else
				{
					if (Global_16014)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
					{
						func_46(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_7), &Var0, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_10()
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (Global_14453 == 0)
		{
			switch (Global_104551.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 1)
		{
			switch (Global_104551.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 2)
		{
			switch (Global_104551.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 3)
		{
			switch (Global_4267355)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_12(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar2);
								unk_0xE2B30EB9B14EEAB2();
							}
							if (Global_2456776)
							{
								if (iVar1 == 14)
								{
									func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104551.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104551.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104551.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70852)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36996;
											break;
										
										case 1:
											iVar6 = Global_36997;
											break;
										
										case 2:
											iVar6 = Global_36998;
											break;
										
										default:
											break;
									}
									func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(Global_2329);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar7);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar8);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 8)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if ((iVar1 == 23 && unk_0x9D39145AD645E383(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB03A1684359C50A1(Global_2324, 6))
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_9(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626200.f_1;
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_12(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_13()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return;
	}
	switch (Global_14455)
	{
		case 5:
			Global_14455 = 6;
			break;
		
		case 6:
			if (unk_0xB03A1684359C50A1(Global_2324, 5))
			{
				Global_14455 = 6;
				unk_0x62148293B793073B(&Global_2324, 5);
			}
			else
			{
				Global_14455 = 3;
			}
			break;
		
		case 7:
			Global_14455 = 3;
			break;
		
		case 3:
			if (unk_0xB03A1684359C50A1(Global_2324, 5))
			{
				Global_14455 = 6;
				unk_0x62148293B793073B(&Global_2324, 5);
			}
			else
			{
				Global_14455 = 3;
			}
			break;
		
		default:
			Global_14455 = 3;
			break;
	}
}

void func_14()
{
	if (iLocal_235)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_235 = 0;
		}
	}
	if (iLocal_235 == 0)
	{
		if (func_45(2, Global_14429, 0) || unk_0xFC0C00F9DE2AEC93(2, 181))
		{
			func_18();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_45(2, Global_14430, 0) || unk_0xFC0C00F9DE2AEC93(2, 180))
		{
			func_15();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_15()
{
	func_46(Global_14434, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
	func_16();
}

void func_16()
{
	if (func_17())
	{
		if (Global_14620 == 0)
		{
			unk_0xEAF61A994304092C(2);
		}
		else
		{
			unk_0xEAF61A994304092C(1);
		}
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70852)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xEBE31BF57A0E4641();
	iVar1 = unk_0xC345D9AB8BB3AB24(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267357 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	func_46(Global_14434, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
	func_19();
}

void func_19()
{
	if (func_17())
	{
		if (Global_14620 == 0)
		{
			unk_0xEAF61A994304092C(1);
		}
		else
		{
			unk_0xEAF61A994304092C(2);
		}
	}
}

void func_20(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xFAFFA408239A026B(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xFAFFA408239A026B(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xFAFFA408239A026B(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xFAFFA408239A026B(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_21()
{
	if (unk_0x5C716BBF766E1C70(Global_14434))
	{
		if (Global_14452 == 1)
		{
			if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15803)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
		}
		else
		{
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
			if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_35(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam2 > Global_15758)
			{
				if (bParam3 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
				}
				else
				{
					func_102();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_33();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16752 = Global_16753;
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15375.f_370 = Global_16745;
		Global_15752 = Global_15753;
		Global_15754 = Global_15755;
		if (Global_16014 == 0)
		{
			Global_15910[0 /*6*/] = { Global_15936[0 /*6*/] };
			Global_15910[1 /*6*/] = { Global_15936[1 /*6*/] };
			Global_15962[0 /*6*/] = { Global_15988[0 /*6*/] };
			Global_15962[1 /*6*/] = { Global_15988[1 /*6*/] };
			Global_15923[0 /*6*/] = { Global_15949[0 /*6*/] };
			Global_15923[1 /*6*/] = { Global_15949[1 /*6*/] };
			Global_15975[0 /*6*/] = { Global_16001[0 /*6*/] };
			Global_15975[1 /*6*/] = { Global_16001[1 /*6*/] };
		}
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam3)
			{
				func_27();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (Global_16014 == 0)
					{
						if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
						{
							return 0;
						}
						if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
						{
							return 0;
						}
						if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
						{
							return 0;
						}
						if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
						{
							return 0;
						}
					}
				}
			}
			if (func_25())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_24();
			Global_15766 = bParam3;
		}
		Global_15758 = iParam2;
		if (Global_15752 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15752)
			{
				StringCopy(&(Global_15375.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15375.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14622 = 0;
		func_48();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15758 || iParam2 == Global_15758)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_102();
	}
	return 0;
}

void func_24()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_25()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_27()
{
	if (func_12(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_28();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_28()
{
	func_29();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_29()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_32(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_31(unk_0x18F7BE9ACB7D08F4());
			if (func_30(iVar0) && (!func_12(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_30(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_34(int iParam0, int iParam1)
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

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_36(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_36(var uParam0)
{
	Global_15753 = uParam0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
}

void func_37()
{
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_15770 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_40(var uParam0)
{
	return uParam0;
}

void func_41()
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x929C3CBA660376D5(-1, "Menu_Accept", &Global_14442, 1);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		unk_0xEAF61A994304092C(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (!Global_14396)
				{
					if (!unk_0xB03A1684359C50A1(Global_2323, 11))
					{
						func_54();
					}
				}
			}
		}
	}
}

int func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			if (Global_14396 == 0)
			{
				if (Global_1638 != 128)
				{
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (Global_15756 != 2)
						{
						}
					}
				}
			}
		}
		if (func_12(14))
		{
			return 0;
		}
		if (unk_0x0124A4A09C18BD80(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			return 0;
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0xED0E852EE8DE36BB())
			{
				if (unk_0xE1F715CDDC50FD7F(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4()) || unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4())) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x55C0B3D3EFAF48C6(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
		if (Global_103599)
		{
			return 0;
		}
	}
	if (Global_70852)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBE31BF57A0E4641();
	iVar1 = unk_0xC345D9AB8BB3AB24(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xED0E852EE8DE36BB()))
	{
		iVar2 = 1;
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				uVar3 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
				if ((((((((unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(uVar3)) || unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(uVar3))) || unk_0x309C05EAA86E194E(unk_0x4F69FBD64CDF125B(uVar3))) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("seashark")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("seashark2")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("rhino")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("submersible")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("submersible2")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267357 || iVar2 == 1)
	{
		if (unk_0xE7FAF8E78F7D3A73(joaat("apptrackify")) > 0 || Global_104551.f_14021.f_89)
		{
			if (unk_0xE7FAF8E78F7D3A73(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xFC0C00F9DE2AEC93(iParam0, uParam1) || (iParam2 == 1 && unk_0x3199F4F904C324F9(iParam0, iParam1)))
	{
		if (unk_0xC339C5C5B5E8BC5B())
		{
			if (unk_0x73A445C7E1EAA5D2() == 0 || (unk_0x91A08229665C71F1() && unk_0xC9FF45E740135482(2)))
			{
				return 0;
			}
		}
		if (unk_0xC83C302702976DCB() || unk_0xF45F7A07410EF1F5())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_46(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_47()
{
	if (func_44())
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (!Global_14396)
				{
					if (unk_0xB03A1684359C50A1(Global_2323, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

int func_49()
{
	if (unk_0x44243F2E2F58B8E3())
	{
		iLocal_108 = unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), uLocal_107);
	}
	else
	{
		iLocal_105 = unk_0x5AFB8ED811F05E4D();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_50(int iParam0)
{
	if (Global_14615)
	{
		func_51(0, 0);
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
	if (!func_25())
	{
		Global_14453.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_52(0))
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

int func_52(int iParam0)
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

void func_53()
{
	if (func_45(2, Global_14430, 0))
	{
		if (Global_16767 == 0)
		{
			if (Global_15762)
			{
				if (unk_0xB03A1684359C50A1(Global_2324, 17))
				{
				}
				else
				{
					unk_0x6C16FCC5D6845B59();
				}
			}
		}
	}
}

void func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_55() && unk_0x0124A4A09C18BD80(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && iVar1 == 0)
		{
			iVar2 = unk_0x62B4434F66D8AEB5(unk_0x18F7BE9ACB7D08F4(), 0);
			if (Global_70852)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x2E64174C91365575(unk_0x18F7BE9ACB7D08F4()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x2E64174C91365575(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = 1;
			}
			if (!Global_14396)
			{
				if (Global_1638 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
						{
							if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
							{
							}
							else
							{
								if (Global_70852)
								{
									unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 244, 0);
									unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 243, 0);
									unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 242, 0);
								}
								unk_0xD2A9C3F486236CC5(&Global_2323, 11);
								unk_0xC6FD5F4CF31458B8(unk_0x18F7BE9ACB7D08F4(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_55()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xEBE31BF57A0E4641();
	iVar1 = unk_0xC345D9AB8BB3AB24(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_56()
{
	if (Global_70852 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_16769 = 1;
		if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
		{
			func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15898, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15898, &(Global_104551.f_28020[Global_1638 /*29*/].f_7), &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
			func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14379 = 0.2f;
		if (Global_14441)
		{
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x62148293B793073B(&Global_2323, 17);
	}
	if (Global_15809 == 1)
	{
		if (Global_14453.f_1 < 6)
		{
			Global_15809 = 0;
		}
		else
		{
			if (Global_14393 == 0)
			{
				if (func_45(2, Global_14422, 0))
				{
					Global_14379 = 0.19f;
					Global_15809 = 0;
					func_41();
					Global_16774 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14423, 0))
			{
				Global_14379 = 0.19f;
				Global_15809 = 0;
				func_41();
				Global_16774 = 2;
			}
		}
	}
	else if (Global_16774 == 2)
	{
		if (Global_15757 == 0)
		{
			unk_0xBE97F4E2B659331B(0);
			Global_15756 = 6;
		}
		func_13();
		Global_14453.f_1 = Global_14455;
		func_8();
	}
	else if (!unk_0x36328FCBA2944E1F())
	{
		iLocal_32 = 0;
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		unk_0x929C3CBA660376D5(-1, "Hang_Up", &Global_14442, 1);
		func_13();
		Global_14453.f_1 = Global_14455;
		func_8();
	}
}

void func_57()
{
	if (Global_14623 == 1)
	{
		if (unk_0x36328FCBA2944E1F())
		{
			if (unk_0x3BEFBA5ECD14CAF7())
			{
				Global_14623 = 0;
			}
		}
		if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_14623 = 0;
			unk_0xBE97F4E2B659331B(0);
			Global_15756 = 6;
		}
	}
	if (unk_0xC9D9444186B5A374() > iLocal_35)
	{
		if (Global_14623 == 1)
		{
			Global_14623 = 0;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() < Global_16777 || Global_14623 == 1)
	{
		if (func_45(2, Global_14421, 0))
		{
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
				{
					if (unk_0xB03A1684359C50A1(Global_2323, 20))
					{
					}
					else
					{
						Global_14431 = 1;
						func_41();
						unk_0xBE97F4E2B659331B(0);
						Global_15805 = 1;
						Global_15756 = 6;
						unk_0x62148293B793073B(&Global_2323, 27);
						if (!Global_15767)
						{
							unk_0xD2A9C3F486236CC5(&Global_2324, 5);
						}
						func_13();
						Global_14453.f_1 = Global_14455;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 27);
		Global_15756 = 4;
		Global_15813 = 0;
		func_60();
		func_59();
		if (!Global_15769)
		{
			if (Global_16773 == 0)
			{
				if (!unk_0xB03A1684359C50A1(Global_2325, 5))
				{
					unk_0x4BF2327D870EC5DE();
				}
				unk_0x62148293B793073B(&Global_2325, 5);
			}
			else
			{
				unk_0x3CF602D6EE94EC3C(Global_15375.f_368, Global_15375.f_369);
			}
		}
		func_58();
	}
}

void func_58()
{
	if (unk_0x44243F2E2F58B8E3())
	{
		uLocal_107 = unk_0xE92FCF3C05C2EF1D();
	}
	else
	{
		iLocal_104 = unk_0x5AFB8ED811F05E4D();
	}
}

void func_59()
{
	if (Global_15769)
	{
		if (Global_70852)
		{
			if (unk_0x5C716BBF766E1C70(Global_14434))
			{
				if (!unk_0xC339C5C5B5E8BC5B())
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0xD2A9C3F486236CC5(&(Global_2512581.f_1707), 15);
				}
			}
		}
	}
}

void func_60()
{
	if (unk_0x5C716BBF766E1C70(Global_14434))
	{
		if (!Global_15764)
		{
			func_106(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
			if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15769)
			{
				unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(4);
				unk_0x22DD5585E00B80C3(0);
				unk_0x22DD5585E00B80C3(2);
				unk_0x0ECBA72FAFCEBA59("CELL_CONDFON");
				unk_0xB4179F7E88F4C4BF(&Global_15771);
				unk_0xC30401186AC91B01();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0xE2B30EB9B14EEAB2();
			}
			else if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
			{
				func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_106(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_7), "CELL_219", &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()
{
	if (unk_0x44243F2E2F58B8E3())
	{
		iLocal_109 = unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), uLocal_95);
		iLocal_110 = unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), uLocal_98);
	}
	else
	{
		iLocal_94 = unk_0x5AFB8ED811F05E4D();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = unk_0x5AFB8ED811F05E4D();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_15803 == 1)
	{
		if (func_44())
		{
			if (iLocal_109 > 4000)
			{
				if (unk_0xB03A1684359C50A1(Global_2323, 14))
				{
					if (unk_0x5C716BBF766E1C70(Global_14434))
					{
						func_41();
						Global_14452 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
			{
				if (unk_0x5C716BBF766E1C70(Global_14434))
				{
					func_41();
					Global_14452 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_14452 = 3;
	}
	if (Global_14452 == 2)
	{
		iLocal_30 = 0;
		Global_15756 = 4;
		func_54();
		Global_15813 = 0;
		func_60();
		func_59();
		if (!Global_15769)
		{
			if (Global_16773 == 0)
			{
				unk_0x4BF2327D870EC5DE();
			}
			else
			{
				unk_0x3CF602D6EE94EC3C(Global_15375.f_368, Global_15375.f_369);
			}
		}
		func_58();
		Global_16772 = 0;
	}
	if (Global_15803 == 0)
	{
		if (Global_14452 == 3)
		{
			if (Global_15769)
			{
				func_63();
				func_50(0);
			}
			else
			{
				func_62();
				Global_16772 = 1;
				unk_0xBE97F4E2B659331B(0);
				Global_15756 = 6;
				func_13();
				Global_14453.f_1 = Global_14455;
				func_8();
			}
		}
	}
	else if (Global_14452 == 3)
	{
	}
}

void func_62()
{
}

void func_63()
{
	Global_2518483.f_2 = 1;
	Global_2518483.f_38 = 1;
	if (unk_0xA1C84586015AE5DB())
	{
		if (unk_0xF9817C8F3EA8ACFA())
		{
			while (unk_0x56084A31DC07B408())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x846E40A2A310ADEB();
			Global_2518483 = 0;
			Global_2518483.f_2 = 0;
		}
		else if (func_66(Global_2518483.f_20))
		{
			if (unk_0x5AA8CFBEDE9B83FC(&(Global_2518483.f_20)))
			{
				if (!unk_0x9AD4F3A39CDEADAA(&(Global_2518483.f_20)))
				{
					func_64();
				}
			}
		}
		else
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
	if (Global_2518483.f_37)
	{
		func_50(0);
	}
	Global_2518483.f_37 = 0;
	Global_2518483.f_3 = 0;
}

void func_64()
{
	Global_2518483.f_1 = 0;
	Global_2518483 = 0;
	Global_2518483.f_2 = 0;
	Global_2518483.f_33 = -1;
	Global_2518483.f_34 = -1;
	StringCopy(&(Global_2518483.f_4), "", 64);
	StringCopy(&(Global_2518483.f_39[0 /*16*/]), "", 64);
	Global_2518483.f_38 = 0;
	Global_2518483.f_56 = 0;
	Global_2518483.f_57 = 0;
	Global_2518483.f_58 = -2;
	Global_2518483.f_3 = 0;
	func_65(&(Global_2518483.f_20));
}

void func_65(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xBD82AF3F842B99A5(&uParam0, 13);
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_92 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_92 < Global_15752)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_15375.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_14624[iVar2 /*6*/] = { Global_15375.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_14624[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14624[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_14624[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0xD76CFACBF6A6F21E(&cLocal_38))
			{
				StringCopy(&cLocal_50, unk_0xE883B8F5FA6A04DA(&cLocal_38), 64);
				iVar3 = func_81(iVar13);
				iVar4 = func_80(iVar13);
				uVar5 = func_78(iVar13);
				uLocal_82 = func_77();
				uLocal_83 = func_76();
				uLocal_84 = func_75();
				uVar6 = func_74(iVar13);
				uVar7 = func_73(iVar13);
				uVar8 = func_72(iVar13);
				uVar12 = func_71(iVar13);
				uVar9 = func_70(iVar13);
				uVar10 = func_69(iVar13);
				uVar11 = func_68(iVar13);
				if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar2 /*6*/])))
				{
					if (unk_0x9D39145AD645E383(&(Global_14624[iVar2 /*6*/]), &(Global_15375.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x03DC4AA3F17BCF02(iVar3, &cLocal_50, &(Global_14624[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0xD76CFACBF6A6F21E(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xE883B8F5FA6A04DA(&cLocal_44), 64);
				iVar3 = func_81(0);
				iVar4 = func_80(0);
				uVar5 = func_78(0);
				uLocal_82 = func_77();
				uLocal_83 = func_76();
				uLocal_84 = func_75();
				uVar6 = func_74(0);
				uVar7 = func_73(0);
				uVar8 = func_72(0);
				uVar12 = func_71(0);
				uVar9 = func_70(0);
				uVar10 = func_69(0);
				uVar11 = func_68(0);
				unk_0x03DC4AA3F17BCF02(iVar3, &cLocal_50, &(Global_15375.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14624[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14624[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_92++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_15762 == 0)
	{
		unk_0xFDB93EA630039D98(uLocal_83);
		unk_0xB085D7520EFE204B(uLocal_84);
		unk_0x3B5B2A8D52635644(Global_15375.f_368, Global_15375.f_369, Global_15375.f_370, uLocal_82);
		Global_15756 = 4;
	}
}

int func_68(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0x9D39145AD645E383(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0x9D39145AD645E383(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0x9D39145AD645E383(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0x9D39145AD645E383(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_73), 2, 3);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_73), 1, 2);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_73), 0, 1);
	if (unk_0x9D39145AD645E383(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(uVar0);
}

int func_79(var uParam0)
{
	if (unk_0x9D39145AD645E383(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0x9D39145AD645E383(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0x9D39145AD645E383(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0x9D39145AD645E383(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0x9D39145AD645E383(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0x9D39145AD645E383(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0x9D39145AD645E383(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0x9D39145AD645E383(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0x9D39145AD645E383(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0x9D39145AD645E383(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0x9D39145AD645E383(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0x9D39145AD645E383(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0x9D39145AD645E383(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0x9D39145AD645E383(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0x9D39145AD645E383(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0x9D39145AD645E383(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0x9D39145AD645E383(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0x9D39145AD645E383(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0x9D39145AD645E383(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0x9D39145AD645E383(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0x9D39145AD645E383(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0x9D39145AD645E383(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0x9D39145AD645E383(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0x9D39145AD645E383(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0x9D39145AD645E383(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0x9D39145AD645E383(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0x9D39145AD645E383(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x9D39145AD645E383(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0x9D39145AD645E383(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0x9D39145AD645E383(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0x9D39145AD645E383(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0x9D39145AD645E383(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0x9D39145AD645E383(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0x9D39145AD645E383(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0x9D39145AD645E383(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x9D39145AD645E383(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x9D39145AD645E383(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(uVar0);
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(uVar0);
}

void func_82()
{
	cLocal_85 = { Global_15375.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0xD76CFACBF6A6F21E(&cLocal_85))
	{
		sLocal_91 = unk_0xE883B8F5FA6A04DA(&cLocal_85);
		if (unk_0xE0C4A595CD61B7F2(sLocal_91))
		{
		}
	}
}

void func_83()
{
	cLocal_73 = { Global_15375.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0xD76CFACBF6A6F21E(&cLocal_73))
	{
		sLocal_79 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_73), 0, 1);
		if (unk_0xE0C4A595CD61B7F2(sLocal_79))
		{
		}
		sLocal_80 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_73), 1, 2);
		if (unk_0xE0C4A595CD61B7F2(sLocal_80))
		{
		}
		sLocal_81 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_73), 2, 3);
		if (unk_0xE0C4A595CD61B7F2(sLocal_81))
		{
		}
	}
}

void func_84()
{
	cLocal_66 = { Global_15375.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0xD76CFACBF6A6F21E(&cLocal_66))
	{
		sLocal_72 = unk_0xE883B8F5FA6A04DA(&cLocal_66);
		if (unk_0xE0C4A595CD61B7F2(sLocal_72))
		{
		}
	}
}

void func_85()
{
	func_86();
	unk_0xFDB93EA630039D98(uLocal_83);
	unk_0xB085D7520EFE204B(uLocal_84);
	if (Global_16748)
	{
		unk_0x827E1C14B5CA0B5B(Global_15375.f_368, Global_15375.f_369, Global_15375.f_370, uLocal_82);
		iLocal_36 = unk_0x5AFB8ED811F05E4D();
	}
	else
	{
		unk_0x3B5B2A8D52635644(Global_15375.f_368, Global_15375.f_369, Global_15375.f_370, uLocal_82);
	}
	Global_15756 = 4;
}

void func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0xA8A077D859511229(&Global_15832))
	{
		if (unk_0x9D39145AD645E383(&Global_15832, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0x0A8A596EB9C068FA() || unk_0x929A0C5D6A986B4F())
		{
			if (Global_1573340 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_70852 || func_94())
		{
			if (Global_1573340 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_92())
		{
			iVar14 = 1;
		}
		if (func_91(unk_0x6E987D62C8535B6E(&Global_15832)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_15758 < 5 || Global_15758 == 10) || Global_15758 == 12) || Global_15758 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0x8E058779F430F4D7(&Global_15832, 7);
				while (!unk_0x9F22E45F3CF7EACA(7))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			else
			{
				unk_0x53F6F87C56851564(&Global_15832, 15);
				while (!unk_0x9F22E45F3CF7EACA(15))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0x8E058779F430F4D7(&Global_15832, 6);
			while (!unk_0x9F22E45F3CF7EACA(6))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0x53F6F87C56851564(&Global_15832, 14);
			while (!unk_0x9F22E45F3CF7EACA(14))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0xAD5C369AC5359425();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_16766 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_15375 };
		StringConCat(&cLocal_44, "A", 24);
		Global_14624[iVar2 /*6*/] = { Global_15375 };
		StringConCat(&(Global_14624[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14624[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_14624[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0xD76CFACBF6A6F21E(&cLocal_38))
		{
			StringCopy(&cLocal_50, unk_0xE883B8F5FA6A04DA(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4267331 == 0)
				{
				}
			}
			iVar4 = func_80(iVar2);
			uVar5 = func_78(iVar2);
			uLocal_82 = func_77();
			uLocal_83 = func_76();
			uLocal_84 = func_75();
			uVar6 = func_74(iVar2);
			uVar7 = func_73(iVar2);
			uVar8 = func_72(iVar2);
			uVar12 = func_71(iVar2);
			uVar9 = func_70(iVar2);
			uVar10 = func_69(iVar2);
			uVar11 = func_68(iVar2);
			if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar2 /*6*/])))
			{
				if (Global_16746 == 0 && Global_16752 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x03DC4AA3F17BCF02(iVar3, &cLocal_50, &(Global_14624[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x9D39145AD645E383(&(Global_14624[iVar2 /*6*/]), &Global_16754))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x03DC4AA3F17BCF02(iVar3, &cLocal_50, &(Global_14624[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16766 = iVar2;
					if (Global_16752 == 1)
					{
						Global_16752 = 0;
					}
				}
			}
			else if (Global_16752 == 0 && Global_16746 == 0)
			{
				unk_0x03DC4AA3F17BCF02(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0xD76CFACBF6A6F21E(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xE883B8F5FA6A04DA(&cLocal_44), 64);
				iVar3 = func_81(iVar2);
				iVar4 = func_80(iVar2);
				uVar5 = func_78(iVar2);
				uLocal_82 = func_77();
				uLocal_83 = func_76();
				uLocal_84 = func_75();
				uVar6 = func_74(iVar2);
				uVar7 = func_73(iVar2);
				uVar8 = func_72(iVar2);
				uVar12 = func_71(iVar2);
				uVar9 = func_70(iVar2);
				uVar10 = func_69(iVar2);
				uVar11 = func_68(iVar2);
				unk_0x03DC4AA3F17BCF02(iVar3, &cLocal_50, &Global_15375, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_15045[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0x31F12808DC47A9E5(Global_15045[iVar0 /*10*/]) || Global_15045[iVar0 /*10*/] == 0)
			{
				unk_0x98E986A451DA8BCF(iVar0, Global_15045[iVar0 /*10*/], &(Global_15045[iVar0 /*10*/].f_1));
			}
			if (Global_15045.f_161 == iVar0)
			{
				if ((Global_15045.f_162 != 0f && Global_15045.f_162.f_1 != 0f) && Global_15045.f_162.f_2 != 0f)
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x011001D5DE8C95C8(Global_15045.f_161, Global_15045.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4267331 == 1)
	{
		Global_4267331 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4267150[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0x31F12808DC47A9E5(Global_4267150[iVar0 /*9*/]) || Global_4267150[iVar0 /*9*/] == 0)
				{
					unk_0x98E986A451DA8BCF(Global_4267150[iVar0 /*9*/].f_8, Global_4267150[iVar0 /*9*/], &(Global_4267150[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()
{
	cLocal_85 = { Global_15375 };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0xD76CFACBF6A6F21E(&cLocal_85))
	{
		sLocal_91 = unk_0xE883B8F5FA6A04DA(&cLocal_85);
		if (unk_0xE0C4A595CD61B7F2(sLocal_91))
		{
		}
	}
}

void func_89()
{
	cLocal_73 = { Global_15375 };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0xD76CFACBF6A6F21E(&cLocal_73))
	{
		sLocal_79 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_73), 0, 1);
		if (unk_0xE0C4A595CD61B7F2(sLocal_79))
		{
		}
		sLocal_80 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_73), 1, 2);
		if (unk_0xE0C4A595CD61B7F2(sLocal_80))
		{
		}
		sLocal_81 = unk_0xF4EF524EA11DCDA1(unk_0xE883B8F5FA6A04DA(&cLocal_73), 2, 3);
		if (unk_0xE0C4A595CD61B7F2(sLocal_81))
		{
		}
	}
}

void func_90()
{
	cLocal_66 = { Global_15375 };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0xD76CFACBF6A6F21E(&cLocal_66))
	{
		sLocal_72 = unk_0xE883B8F5FA6A04DA(&cLocal_66);
		if (unk_0xE0C4A595CD61B7F2(sLocal_72))
		{
		}
	}
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
			return 1;
		
		default:
	}
	return 0;
}

int func_92()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_93(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_93(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

var func_94()
{
	return Global_1312831;
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0x0A8A596EB9C068FA() || unk_0x929A0C5D6A986B4F())
	{
		if (Global_1573340 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_70852)
	{
		if (Global_1573340 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_92())
	{
		iVar1 = 1;
	}
	if (unk_0xA8A077D859511229(&Global_15832))
	{
		if (unk_0x9D39145AD645E383(&Global_15832, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_91(unk_0x6E987D62C8535B6E(&Global_15832)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_15758 < 5 || Global_15758 == 10) || Global_15758 == 12) || Global_15758 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0x8E058779F430F4D7(&Global_15832, 7);
			while (!unk_0x9F22E45F3CF7EACA(7))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0x53F6F87C56851564(&Global_15832, 15);
			while (!unk_0x9F22E45F3CF7EACA(15))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0x8E058779F430F4D7(&Global_15832, 6);
		while (!unk_0x9F22E45F3CF7EACA(6))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		unk_0x53F6F87C56851564(&Global_15832, 14);
		while (!unk_0x9F22E45F3CF7EACA(14))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0xAD5C369AC5359425();
	func_87();
}

void func_96()
{
	while (Global_14436 == 1 && unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_14436 = 0;
	if (unk_0xB03A1684359C50A1(Global_2323, 20))
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 1);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2324, 1);
	}
	Global_14437 = 0;
	if (Global_15752 == 0)
	{
		if (!Global_15769)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_14623 = 0;
	if (Global_15766)
	{
		if (Global_16773 == 0)
		{
			if (Global_15769 == 0)
			{
				iLocal_34 = 5000;
				unk_0x336C2CEF8F934645(Global_15375.f_368, Global_15375.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_14623 = 1;
		unk_0x5AE11BC36633DE4E(0);
		while ((Global_14623 == 1 && Global_15756 == 1) && unk_0xC9D9444186B5A374() < iLocal_34)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				Global_14623 = 0;
				unk_0xBE97F4E2B659331B(0);
				Global_15756 = 6;
			}
			if (unk_0x36328FCBA2944E1F())
			{
				if (unk_0x3BEFBA5ECD14CAF7())
				{
					Global_14623 = 0;
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > iLocal_34)
		{
		}
		if (Global_15756 != 1)
		{
		}
		if (Global_14623 == 0)
		{
		}
	}
	Global_14623 = 0;
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 0) || Global_15756 != 1) || Global_14419 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
	else
	{
		if (Global_15764)
		{
			Global_16774 = 0;
			iLocal_32 = 0;
		}
		if (Global_15766 == 0)
		{
			if (Global_15807 == 0)
			{
				Global_14455 = Global_14453.f_1;
				Global_15807 = 1;
			}
			iLocal_30 = 0;
			if (Global_16773 == 0)
			{
				unk_0x336C2CEF8F934645(Global_15375.f_368, Global_15375.f_369);
				unk_0x4EDE34FBADD967A6(0);
				Global_15756 = 3;
				Global_14623 = 1;
				unk_0x5AE11BC36633DE4E(0);
				unk_0xD2A9C3F486236CC5(&Global_2323, 27);
				unk_0xC1B1E9A034A63A62(0);
			}
			else
			{
				Global_14623 = 0;
				Global_15756 = 4;
			}
			Global_14452 = 0;
			if (Global_15767 == 1)
			{
				if (Global_14453.f_1 == 10)
				{
				}
				if (!Global_14453.f_1 == 9)
				{
					if (Global_14453.f_1 > 4)
					{
						if (Global_14436 == 0)
						{
							Global_14453.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14453.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14453.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (Global_14623 == 1)
					{
						if (unk_0x36328FCBA2944E1F())
						{
							if (unk_0x3BEFBA5ECD14CAF7())
							{
								Global_14623 = 0;
							}
						}
					}
				}
				if (Global_14453.f_1 == 6)
				{
				}
				if (Global_14453.f_1 == 10)
				{
				}
				if (Global_14453.f_1 == 3)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_15756 = 6;
					Global_14437 = 1;
					return;
				}
				Global_14453.f_1 = 9;
				func_8();
			}
			if (unk_0x44243F2E2F58B8E3())
			{
				uLocal_101 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				iLocal_99 = unk_0x5AFB8ED811F05E4D();
			}
			while (Global_14453.f_1 != 9 && Global_14436 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14623 == 1)
				{
					if (unk_0x36328FCBA2944E1F())
					{
						if (unk_0x3BEFBA5ECD14CAF7())
						{
							Global_14623 = 0;
						}
					}
				}
				if (unk_0x44243F2E2F58B8E3())
				{
					iLocal_108 = unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x5AFB8ED811F05E4D();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_16772 = 1;
						Global_14436 = 1;
					}
				}
			}
			if (!unk_0xB03A1684359C50A1(Global_2323, 11))
			{
				if (func_44() == 0)
				{
					func_54();
				}
			}
			if (Global_14436 == 0)
			{
				if (!Global_16773 == 0)
				{
					Global_15813 = 0;
					func_60();
					func_59();
					if (!Global_15769)
					{
						if (Global_16773 == 0)
						{
							unk_0x4BF2327D870EC5DE();
						}
						else
						{
							unk_0x3CF602D6EE94EC3C(Global_15375.f_368, Global_15375.f_369);
						}
					}
					func_58();
				}
			}
			else
			{
				func_97();
				Global_14437 = 1;
			}
		}
		else
		{
			Global_14452 = 1;
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (Global_14453.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x62148293B793073B(&Global_2324, 21);
				}
			}
			if (Global_15807 == 0)
			{
				Global_14455 = Global_14453.f_1;
				Global_15807 = 1;
			}
			if (Global_14453.f_1 == 3)
			{
				Global_14453.f_1 = 4;
			}
			else
			{
				while (Global_14453.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (Global_14453.f_1 == 6)
				{
				}
				Global_14453.f_1 = 9;
				func_8();
			}
			if (unk_0x44243F2E2F58B8E3())
			{
				uLocal_101 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				iLocal_99 = unk_0x5AFB8ED811F05E4D();
			}
			while (Global_14453.f_1 != 9 && Global_14436 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x44243F2E2F58B8E3())
				{
					iLocal_108 = unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x5AFB8ED811F05E4D();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_16772 = 1;
						Global_14436 = 1;
						unk_0x62148293B793073B(&Global_2324, 21);
					}
				}
			}
			if (Global_14436 == 0)
			{
				Global_15756 = 2;
			}
			else
			{
				func_97();
				Global_14437 = 1;
			}
			if (unk_0x44243F2E2F58B8E3())
			{
				uLocal_95 = unk_0xE92FCF3C05C2EF1D();
				uLocal_98 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				iLocal_93 = unk_0x5AFB8ED811F05E4D();
				iLocal_96 = unk_0x5AFB8ED811F05E4D();
			}
		}
	}
}

void func_97()
{
	Global_14622 = 0;
	func_102();
}

void func_98()
{
	float fVar0;
	
	fVar0 = func_99(Global_14406[Global_14398 /*3*/], Global_14399[Global_14398 /*3*/], Global_14413, Global_14384, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16770 == 0)
		{
			unk_0x77B57B2BB7F3EA0A(1);
		}
		iLocal_32 = 0;
	}
}

float func_99(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4267358 == 0)
	{
		if (unk_0xB03A1684359C50A1(Global_2323, 14) && Global_14453.f_1 < 4)
		{
			unk_0xE0F240E99D061E79(&Var0);
			if (Global_14406[Global_14398 /*3*/].f_1 == Var0.f_1)
			{
				Global_4267358 = 1;
			}
		}
	}
	if (func_44() && Global_4267358 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x5AFB8ED811F05E4D();
	}
	fVar3 = func_101((unk_0xBBDA792448DB5A89((unk_0x5AFB8ED811F05E4D() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = unk_0x0BADBFA3B172435F((fVar3 * 90f));
		}
		Global_14381 = { func_100(Param0, Param3, fVar4) };
		Global_14384 = { func_100(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14381 = { Param3 };
		Global_14384 = { Param9 };
	}
	unk_0x1F7EA74AE820583A(Global_14381);
	unk_0xA4EB4F11347C8C00(Global_14384, 0);
	return fVar3;
}

Vector3 func_100(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_101(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_102()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_104(sParam2, iParam3, 0);
}

int func_104(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_102();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_33();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_27();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
				}
			}
			if (func_25())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_24();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_48();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_102();
	}
	return 0;
}

int func_105()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_106(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xFAFFA408239A026B(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xFAFFA408239A026B(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xFAFFA408239A026B(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xFAFFA408239A026B(iParam11))
	{
		func_9(iParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

