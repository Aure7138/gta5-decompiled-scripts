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
	unk_0x11103F6657466FF8();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x2A3398C6222EB190(Global_2314, 1))
		{
			if (!unk_0x2A3398C6222EB190(Global_2313, 20))
			{
				if (unk_0xCAD6D8C85D0F329B())
				{
					if (Global_14431)
					{
						func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14386)
						{
							func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xD804ACF2A7171150(&Global_2314, 1);
				}
			}
		}
		if (unk_0x2A3398C6222EB190(Global_14611, 0))
		{
			if (!func_105())
			{
				if (!unk_0x2A3398C6222EB190(Global_14611, 1))
				{
					unk_0xCD7E92DE2BFA0B0D(&Global_14611, 1);
					if (unk_0x27CA09C6DFAB1E79())
					{
						uLocal_106 = unk_0x898811EA80D35DE2();
					}
					else
					{
						iLocal_102 = unk_0x31CD6E9F83C10233();
					}
				}
				if (unk_0x27CA09C6DFAB1E79())
				{
					iLocal_108 = unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uLocal_106);
				}
				else
				{
					iLocal_103 = unk_0x31CD6E9F83C10233();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_103(&Global_15199, &Global_15815, &Global_15735, Global_15748, Global_16730, Global_16731, 0))
					{
						Global_14611 = 0;
					}
				}
				else
				{
					Global_14611 = 0;
				}
			}
		}
		if (!unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !unk_0x2A3398C6222EB190(Global_1641087.f_17, 4))
		{
			if (Global_15745 != 0)
			{
				if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) == 0)
				{
					func_102();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_98();
		}
		switch (Global_15745)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15751)
				{
					if (Global_15741 == 0)
					{
						func_96();
					}
					else
					{
						func_95();
						func_96();
					}
				}
				else if (Global_15741 == 0)
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
				if (Global_15751)
				{
					if (Global_15753)
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
	Global_15755 = 0;
	Global_14442 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15756 = 0;
	Global_15757 = 0;
	Global_15758 = 0;
	Global_15759 = 0;
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
	Global_15749 = 0;
	Global_15750 = 0;
	Global_15792 = 0;
	Global_15793 = 0;
	Global_15796 = 0;
	Global_15798 = 0;
	Global_15797 = 0;
	Global_15800 = 0;
	Global_15799 = 0;
	Global_16762 = 0;
	Global_15802 = 0;
	if (Global_14443.f_1 == 10)
	{
	}
	else if (unk_0x2A3398C6222EB190(Global_2313, 11))
	{
		func_3();
	}
	Global_15751 = 0;
	Global_15752 = 0;
	Global_15753 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16735 = 0;
	Global_16742 = 0;
	Global_16741 = 0;
	Global_16738 = 0;
	Global_16737 = 0;
	Global_16739 = 0;
	Global_16740 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	Global_15744 = 0;
	Global_16003 = 0;
	Global_16766 = 5000;
	Global_14426 = 0;
	unk_0xD804ACF2A7171150(&Global_2313, 20);
	unk_0xD804ACF2A7171150(&Global_2313, 24);
	unk_0xD804ACF2A7171150(&Global_2314, 23);
	unk_0xD804ACF2A7171150(&Global_2315, 0);
	unk_0xD804ACF2A7171150(&Global_2314, 9);
	unk_0xD804ACF2A7171150(&Global_2314, 31);
	unk_0xD804ACF2A7171150(&Global_2314, 17);
	unk_0xD804ACF2A7171150(&Global_2315, 5);
	Global_16729 = 0;
	Global_16728 = 0;
	if (unk_0x0065EA0CBFB686EA())
	{
		Global_15745 = 4;
	}
	else
	{
		Global_15745 = 0;
		Global_16756 = 0;
		Global_16767 = unk_0x31CD6E9F83C10233();
	}
}

void func_3()
{
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 11))
			{
				if (!Global_14386)
				{
					unk_0xA4BA93573C518C2C(unk_0x0031992CA618A445(), 0, 1);
				}
				if (Global_70785)
				{
					unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 244, 1);
					unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 243, 1);
					unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 242, 1);
				}
				unk_0xD804ACF2A7171150(&Global_2313, 11);
			}
		}
	}
}

void func_4()
{
	Global_15755 = 0;
	Global_14442 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445()))
		{
			if (Global_15801 == 0)
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
	if (Global_16737 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16756 == 1)
			{
				unk_0x5E99165A37D8F08F(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16756 == 0)
		{
			unk_0x8C8894B8C4CFE97F();
			iLocal_31 = 0;
		}
	}
	else if (Global_16739 > 0)
	{
		iLocal_37 = unk_0x31CD6E9F83C10233();
		if ((iLocal_37 - iLocal_36) > Global_16739)
		{
			unk_0xE88229579D31DD06();
			Global_16737 = 0;
		}
	}
	if (Global_16756 == 0)
	{
		if (!unk_0x0065EA0CBFB686EA())
		{
			Global_15745 = 6;
		}
	}
}

void func_6()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xCAD6D8C85D0F329B())
	{
		if (!unk_0x2A3398C6222EB190(Global_2313, 11))
		{
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					if (Global_70785 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
			{
				if (Global_70785 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_70785 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16756 == 1)
		{
			if (Global_16757 == 1)
			{
				unk_0x5E99165A37D8F08F(1);
				iLocal_31 = 1;
				Global_16757 = 0;
			}
		}
	}
	else if (Global_16756 == 0)
	{
		if (Global_16757 == 1)
		{
			unk_0x8C8894B8C4CFE97F();
			iLocal_31 = 0;
			Global_16757 = 0;
		}
	}
	if (Global_15798 == 0)
	{
		if (!Global_15758)
		{
			if (!unk_0x2A3398C6222EB190(Global_2314, 31))
			{
				if (!unk_0x2A3398C6222EB190(Global_2314, 27))
				{
					if (func_49())
					{
						if (Global_14443.f_1 > 6)
						{
							unk_0xCD7E92DE2BFA0B0D(&Global_2314, 24);
							unk_0xCD7E92DE2BFA0B0D(&Global_2314, 27);
							unk_0xD804ACF2A7171150(&Global_2314, 26);
							unk_0xD804ACF2A7171150(&Global_2314, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0xCAD6D8C85D0F329B() == 0 && Global_15758 == 0)
	{
		if (Global_15798 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_2314, 23);
		}
		else
		{
			unk_0xD804ACF2A7171150(&Global_2314, 23);
		}
		if (Global_15802)
		{
			if (Global_15798 == 0)
			{
				Global_15364 = { Global_15803 };
				Global_15821 = { Global_15809 };
				Global_15755 = 0;
				Global_16762 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15800)
		{
			while (Global_15798 == 1)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14443.f_1 < 6)
				{
					Global_15798 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15800)
						{
							iLocal_30 = 1;
							Global_16760 = 1;
							func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, &(Global_104439.f_27911[Global_1628 /*29*/].f_7), &(Global_104439.f_27911[Global_1628 /*29*/].f_3), &(Global_104439.f_27911[Global_1628 /*29*/].f_3), 0);
							func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14431)
							{
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0xCD7E92DE2BFA0B0D(&Global_2313, 17);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0xCD7E92DE2BFA0B0D(&Global_2313, 17);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16758 = 1;
							if (Global_104439.f_27911[Global_1628 /*29*/].f_24[Global_14443] == 0)
							{
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, "CELL_300", &(Global_117[Global_1628 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, &(Global_104439.f_27911[Global_1628 /*29*/].f_7), &(Global_104439.f_27911[Global_1628 /*29*/].f_3), &(Global_104439.f_27911[Global_1628 /*29*/].f_3), 0);
								func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14431)
							{
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0xD804ACF2A7171150(&Global_2313, 17);
						}
					}
					if (func_45(2, Global_14412, 0))
					{
						func_43();
						Global_14369 = 0.19f;
						Global_15798 = 0;
						func_41();
						if (Global_15800)
						{
							Global_15364 = { Global_15881 };
							Global_16762 = 5;
						}
						else if (Global_15743 > 0)
						{
							Global_16003 = 1;
							Global_15745 = 0;
							Global_16766 = 0;
							if (unk_0x2A3398C6222EB190(Global_2314, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16729 + 1)
								{
									uLocal_111[iVar0] = func_40(&(Global_16004[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_40(&(Global_16366[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16729, &Global_15034, Global_1628, &Global_15821, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_15743 == 2)
							{
								func_22(&Global_15034, Global_1628, &Global_15821, &(Global_15899[0 /*6*/]), &(Global_15951[0 /*6*/]), &(Global_15899[1 /*6*/]), &(Global_15951[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16762 = 1;
							Global_16758 = 0;
							Global_16760 = 0;
							Global_15755 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15364 = { Global_15839 };
							Global_16762 = 1;
						}
						Global_16758 = 0;
						Global_16760 = 0;
						Global_15755 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14413, 0) || unk_0x2A3398C6222EB190(Global_2313, 24))
					{
						func_43();
						Global_14369 = 0.19f;
						Global_15798 = 0;
						func_41();
						if (Global_15800)
						{
							Global_15364 = { Global_15875 };
							Global_16762 = 4;
						}
						else if (Global_15743 > 0)
						{
							Global_16003 = 1;
							Global_15745 = 0;
							Global_16766 = 0;
							if (unk_0x2A3398C6222EB190(Global_2314, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16728 + 1)
								{
									uLocal_173[iVar1] = func_40(&(Global_16185[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_40(&(Global_16547[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16728, &Global_15034, Global_1628, &Global_15821, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_15743 == 2)
							{
								func_22(&Global_15034, Global_1628, &Global_15821, &(Global_15912[0 /*6*/]), &(Global_15964[0 /*6*/]), &(Global_15912[1 /*6*/]), &(Global_15964[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16762 = 2;
							Global_16758 = 0;
							Global_16760 = 0;
							Global_15755 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15364 = { Global_15845 };
							Global_16762 = 2;
						}
						Global_16758 = 0;
						Global_16760 = 0;
						Global_15755 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14415, 0))
					{
						if (Global_15800)
						{
							Global_14369 = 0.19f;
							Global_15798 = 0;
							func_41();
							func_43();
							Global_15364 = { Global_15869 };
							Global_16762 = 3;
							Global_16758 = 0;
							Global_16760 = 0;
							Global_15755 = 0;
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
			while (Global_15798)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14443.f_1 < 6)
				{
					Global_15798 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14424, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14431)
						{
							func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xD804ACF2A7171150(&Global_2313, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14412, 0))
					{
						func_43();
						Global_15798 = 0;
						func_41();
						unk_0xEBD23F68B1A617FC(Global_14424, "GET_CURRENT_SELECTION");
						uLocal_236 = unk_0xF55F467DF47A6BB8();
						while (!unk_0xA9BE7EE5DC102E89(uLocal_236))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iVar2 = unk_0xE6E83F46130402E8(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_15364 = { Global_15875 };
								Global_16762 = 4;
								break;
							
							case 1:
								Global_15364 = { Global_15869 };
								Global_16762 = 3;
								break;
							
							case 2:
								Global_15364 = { Global_15881 };
								Global_16762 = 5;
								break;
						}
						Global_16758 = 0;
						Global_16760 = 0;
						Global_15755 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14413, 0))
					{
						Global_15798 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15746 == 0)
		{
			unk_0x683F0CB6CA4C99D0(0);
			unk_0xC1B1E9A034A63A62(0);
			while (unk_0x83666F9FB8FEBD4B() < 900 && Global_14443.f_1 == 9)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_15745 = 6;
		}
		unk_0x18F1BFAF88AC511B(-1, "Hang_Up", &Global_14432, 1);
		func_13();
		Global_14443.f_1 = Global_14445;
		func_8();
	}
	else if (Global_14604 == 0)
	{
		if (func_45(2, Global_14411, 0))
		{
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
				{
					if (unk_0x2A3398C6222EB190(Global_2313, 20))
					{
					}
					else
					{
						Global_14421 = 1;
						func_41();
						unk_0x683F0CB6CA4C99D0(0);
						Global_15794 = 1;
						Global_15795 = 1;
						Global_15745 = 6;
						func_13();
						Global_14443.f_1 = Global_14445;
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
	
	if (Global_14426 == 1)
	{
		return;
	}
	if (Global_14443.f_1 < 4)
	{
		return;
	}
	while (!unk_0x77FA56883245AD26(Global_14424))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14443.f_1)
	{
		case 6:
			func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2918);
			if (Global_2918 == 1)
			{
				func_46(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14447), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14447;
			}
			else
			{
				func_46(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14448), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14448;
			}
			if (Global_14431)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14606 == 0)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD804ACF2A7171150(&Global_2313, 17);
			}
			else if (Global_70785)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD804ACF2A7171150(&Global_2313, 17);
			}
			else
			{
				if (Global_14605 == 1)
				{
					if (Global_14431)
					{
						func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14431)
				{
					func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xCD7E92DE2BFA0B0D(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD804ACF2A7171150(&Global_2313, 17);
			if (unk_0x2A3398C6222EB190(Global_2313, 20))
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14442 == 1)
			{
				func_10();
				func_46(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104439.f_13912[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
					unk_0x32F9127910F63DFA(4);
					unk_0x32F9127910F63DFA(0);
					unk_0x32F9127910F63DFA(2);
					unk_0x9BC6C9E77AAC792E("CELL_CONDFON");
					unk_0x50B3C23D0902259F(&Global_15760);
					unk_0xCC5EB3A492FB7D4B();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x1C703A54AB4B12F6();
				}
				else if (Global_104439.f_27911[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_104439.f_27911[Global_1628 /*29*/].f_3), &(Global_104439.f_27911[Global_1628 /*29*/].f_7), "CELL_217", &(Global_104439.f_27911[Global_1628 /*29*/].f_3), 0);
				}
				func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_46(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104439.f_13912[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15758)
				{
					unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
					unk_0x32F9127910F63DFA(4);
					unk_0x32F9127910F63DFA(0);
					unk_0x32F9127910F63DFA(2);
					unk_0x9BC6C9E77AAC792E("CELL_CONDFON");
					unk_0x50B3C23D0902259F(&Global_15760);
					unk_0xCC5EB3A492FB7D4B();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x1C703A54AB4B12F6();
				}
				else
				{
					if (Global_16003)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_104439.f_27911[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_104439.f_27911[Global_1628 /*29*/].f_3), &(Global_104439.f_27911[Global_1628 /*29*/].f_7), &Var0, &(Global_104439.f_27911[Global_1628 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_10()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_104439.f_13912[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 0);
					break;
				
				case 2:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 1);
					break;
				
				case 3:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 2);
					break;
				
				case 4:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 3);
					break;
				
				case 5:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 4);
					break;
				
				case 6:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 5);
					break;
				
				case 7:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_104439.f_13912[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 6);
					break;
				
				case 2:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 0);
					break;
				
				case 3:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 1);
					break;
				
				case 4:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 2);
					break;
				
				case 5:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 3);
					break;
				
				case 6:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 4);
					break;
				
				case 7:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_104439.f_13912[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 5);
					break;
				
				case 2:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 6);
					break;
				
				case 3:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 1);
					break;
				
				case 4:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 0);
					break;
				
				case 5:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 2);
					break;
				
				case 6:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 3);
					break;
				
				case 7:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2608354)
			{
				case 1:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 0);
					break;
				
				case 2:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 1);
					break;
				
				case 3:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 2);
					break;
				
				case 4:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 3);
					break;
				
				case 5:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 4);
					break;
				
				case 6:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 5);
					break;
				
				case 7:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 6);
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
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar2);
								unk_0x1C703A54AB4B12F6();
							}
							if (Global_2455109)
							{
								if (iVar1 == 14)
								{
									func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104439.f_14002[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104439.f_14002[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104439.f_14002[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70785)
								{
									iVar4 = 0;
									iVar4 = Global_2606876;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2606877[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2606877[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2606877[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
											break;
										
										default:
											break;
									}
									func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(Global_2319);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar7);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar8);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 8)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if ((iVar1 == 23 && unk_0xB3404E397FF56B3B(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x2A3398C6222EB190(Global_2314, 6))
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622539.f_1;
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
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
	return Global_35813 == iParam0;
}

void func_13()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return;
	}
	switch (Global_14445)
	{
		case 5:
			Global_14445 = 6;
			break;
		
		case 6:
			if (unk_0x2A3398C6222EB190(Global_2314, 5))
			{
				Global_14445 = 6;
				unk_0xD804ACF2A7171150(&Global_2314, 5);
			}
			else
			{
				Global_14445 = 3;
			}
			break;
		
		case 7:
			Global_14445 = 3;
			break;
		
		case 3:
			if (unk_0x2A3398C6222EB190(Global_2314, 5))
			{
				Global_14445 = 6;
				unk_0xD804ACF2A7171150(&Global_2314, 5);
			}
			else
			{
				Global_14445 = 3;
			}
			break;
		
		default:
			Global_14445 = 3;
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
		if (func_45(2, Global_14419, 0) || unk_0xD887E21676314450(2, 181))
		{
			func_18();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_45(2, Global_14420, 0) || unk_0xD887E21676314450(2, 180))
		{
			func_15();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_15()
{
	func_46(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
	func_16();
}

void func_16()
{
	if (func_17())
	{
		if (Global_14609 == 0)
		{
			unk_0xA7FC4412652EAFAA(2);
		}
		else
		{
			unk_0xA7FC4412652EAFAA(1);
		}
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70785)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x72A1F054E4BCA1A8();
	iVar1 = unk_0xE2378BA63E191ED9(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2608356 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	func_46(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
	func_19();
}

void func_19()
{
	if (func_17())
	{
		if (Global_14609 == 0)
		{
			unk_0xA7FC4412652EAFAA(1);
		}
		else
		{
			unk_0xA7FC4412652EAFAA(2);
		}
	}
}

void func_20(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x1C703A54AB4B12F6();
}

void func_21()
{
	if (unk_0x77FA56883245AD26(Global_14424))
	{
		if (Global_14442 == 1)
		{
			if (Global_14431)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x2A3398C6222EB190(Global_2313, 20))
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD804ACF2A7171150(&Global_2313, 17);
		}
		else
		{
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD804ACF2A7171150(&Global_2313, 17);
			if (unk_0x2A3398C6222EB190(Global_2313, 20))
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
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
		Global_15757 = 1;
	}
	else
	{
		Global_15757 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_35(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam2 > Global_15747)
			{
				if (bParam3 == 0)
				{
					unk_0x683F0CB6CA4C99D0(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
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
		if (unk_0x0065EA0CBFB686EA())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_33();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16741 = Global_16742;
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15364.f_370 = Global_16734;
		Global_15741 = Global_15742;
		Global_15743 = Global_15744;
		if (Global_16003 == 0)
		{
			Global_15899[0 /*6*/] = { Global_15925[0 /*6*/] };
			Global_15899[1 /*6*/] = { Global_15925[1 /*6*/] };
			Global_15951[0 /*6*/] = { Global_15977[0 /*6*/] };
			Global_15951[1 /*6*/] = { Global_15977[1 /*6*/] };
			Global_15912[0 /*6*/] = { Global_15938[0 /*6*/] };
			Global_15912[1 /*6*/] = { Global_15938[1 /*6*/] };
			Global_15964[0 /*6*/] = { Global_15990[0 /*6*/] };
			Global_15964[1 /*6*/] = { Global_15990[1 /*6*/] };
		}
		if (Global_15751)
		{
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
			if (bParam3)
			{
				func_27();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (Global_16003 == 0)
					{
						if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
						{
							return 0;
						}
						if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
						{
							return 0;
						}
						if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
						{
							return 0;
						}
						if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
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
				switch (Global_14443.f_1)
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
			Global_15755 = bParam3;
		}
		Global_15747 = iParam2;
		if (Global_15741 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15741)
			{
				StringCopy(&(Global_15364.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15364.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14611 = 0;
		func_48();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15747 || iParam2 == Global_15747)
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
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0xD804ACF2A7171150(&Global_2314, 16);
}

int func_25()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
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
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_28();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_28()
{
	func_29();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_29()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_32(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_31(unk_0x0031992CA618A445());
			if (func_30(iVar0) && (!func_12(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_30(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(uParam0);
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
		return Global_104439.f_27911[iParam0 /*29*/];
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
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
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
	Global_15742 = uParam0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
}

void func_37()
{
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_15759 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15757 = 1;
	}
	else
	{
		Global_15757 = 0;
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
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x18F1BFAF88AC511B(-1, "Menu_Accept", &Global_14432, 1);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		unk_0xA7FC4412652EAFAA(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (!Global_14386)
				{
					if (!unk_0x2A3398C6222EB190(Global_2313, 11))
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
	
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if (Global_15745 != 2)
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
		if (unk_0xCAAA726E313CCCFD(unk_0x0031992CA618A445(), 0))
		{
			return 0;
		}
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (!unk_0x7EB7875F6B85DD39())
			{
				if (unk_0x7019CC495F72B3AC(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x5BB7DB96F2D9F1A9(unk_0x0031992CA618A445()) || unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445())) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || unk_0x2818B6547D0A3E36(unk_0x0031992CA618A445()))
		{
			return 0;
		}
		if (Global_103487)
		{
			return 0;
		}
	}
	if (Global_70785)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x72A1F054E4BCA1A8();
	iVar1 = unk_0xE2378BA63E191ED9(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x7EB7875F6B85DD39()))
	{
		iVar2 = 1;
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				uVar3 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if ((((((((unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(uVar3)) || unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(uVar3))) || unk_0x01301B632ADFA6CA(unk_0xE9559A12052415BE(uVar3))) || unk_0xE9559A12052415BE(uVar3) == joaat("seashark")) || unk_0xE9559A12052415BE(uVar3) == joaat("seashark2")) || unk_0xE9559A12052415BE(uVar3) == joaat("rhino")) || unk_0xE9559A12052415BE(uVar3) == joaat("submersible")) || unk_0xE9559A12052415BE(uVar3) == joaat("submersible2")) || unk_0xE9559A12052415BE(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2608356 || iVar2 == 1)
	{
		if (unk_0x7832F791572D5809(joaat("apptrackify")) > 0 || Global_104439.f_13912.f_89)
		{
			if (unk_0x7832F791572D5809(joaat("michael2")) > 0)
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
	if (unk_0xD887E21676314450(iParam0, uParam1) || (iParam2 == 1 && unk_0x42F812C5F1AA300A(iParam0, iParam1)))
	{
		if (unk_0x20551D6D924ED04B())
		{
			if (unk_0xB74983234B4F06A7() == 0 || (unk_0xFCFC2645B6CF6425() && unk_0xFF512A008EA368FF(2)))
			{
				return 0;
			}
		}
		if (unk_0x957E53BB191CB24D() || unk_0x0CF4609684193305())
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
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x1C703A54AB4B12F6();
}

void func_47()
{
	if (func_44())
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (!Global_14386)
				{
					if (unk_0x2A3398C6222EB190(Global_2313, 11))
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x683F0CB6CA4C99D0(0);
	Global_15745 = 1;
}

int func_49()
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		iLocal_108 = unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uLocal_107);
	}
	else
	{
		iLocal_105 = unk_0x31CD6E9F83C10233();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_50(int iParam0)
{
	if (Global_14604)
	{
		func_51(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_25())
	{
		Global_14443.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_52(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	if (func_45(2, Global_14420, 0))
	{
		if (Global_16756 == 0)
		{
			if (Global_15751)
			{
				if (unk_0x2A3398C6222EB190(Global_2314, 17))
				{
				}
				else
				{
					unk_0xA50D081D42010233();
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
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (func_55() && unk_0xCAAA726E313CCCFD(unk_0x0031992CA618A445(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && iVar1 == 0)
		{
			iVar2 = unk_0x6C5A6C5A6F492576(unk_0x0031992CA618A445(), 0);
			if (Global_70785)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x10E51EA4FB366520(unk_0x0031992CA618A445()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x10E51EA4FB366520(unk_0x0031992CA618A445()))
			{
				iVar0 = 1;
			}
			if (!Global_14386)
			{
				if (Global_1628 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
						{
							if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
							{
							}
							else
							{
								if (Global_70785)
								{
									unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 244, 0);
									unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 243, 0);
									unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 242, 0);
								}
								unk_0xCD7E92DE2BFA0B0D(&Global_2313, 11);
								unk_0xA4BA93573C518C2C(unk_0x0031992CA618A445(), 1, 1);
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
	
	uVar0 = unk_0x72A1F054E4BCA1A8();
	iVar1 = unk_0xE2378BA63E191ED9(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_56()
{
	if (Global_70785 == 0)
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
		Global_16758 = 1;
		if (Global_104439.f_27911[Global_1628 /*29*/].f_24[Global_14443] == 0)
		{
			func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, &(Global_104439.f_27911[Global_1628 /*29*/].f_7), &(Global_104439.f_27911[Global_1628 /*29*/].f_3), &(Global_104439.f_27911[Global_1628 /*29*/].f_3), 0);
			func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14369 = 0.2f;
		if (Global_14431)
		{
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xD804ACF2A7171150(&Global_2313, 17);
	}
	if (Global_15798 == 1)
	{
		if (Global_14443.f_1 < 6)
		{
			Global_15798 = 0;
		}
		else
		{
			if (Global_14383 == 0)
			{
				if (func_45(2, Global_14412, 0))
				{
					Global_14369 = 0.19f;
					Global_15798 = 0;
					func_41();
					Global_16763 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14413, 0))
			{
				Global_14369 = 0.19f;
				Global_15798 = 0;
				func_41();
				Global_16763 = 2;
			}
		}
	}
	else if (Global_16763 == 2)
	{
		if (Global_15746 == 0)
		{
			unk_0x683F0CB6CA4C99D0(0);
			Global_15745 = 6;
		}
		func_13();
		Global_14443.f_1 = Global_14445;
		func_8();
	}
	else if (!unk_0xCAD6D8C85D0F329B())
	{
		iLocal_32 = 0;
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		unk_0x18F1BFAF88AC511B(-1, "Hang_Up", &Global_14432, 1);
		func_13();
		Global_14443.f_1 = Global_14445;
		func_8();
	}
}

void func_57()
{
	if (Global_14612 == 1)
	{
		if (unk_0xCAD6D8C85D0F329B())
		{
			if (unk_0x350A13DA0A9487A3())
			{
				Global_14612 = 0;
			}
		}
		if (!unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			Global_14612 = 0;
			unk_0x683F0CB6CA4C99D0(0);
			Global_15745 = 6;
		}
	}
	if (unk_0xC9D9444186B5A374() > iLocal_35)
	{
		if (Global_14612 == 1)
		{
			Global_14612 = 0;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() < Global_16766 || Global_14612 == 1)
	{
		if (func_45(2, Global_14411, 0))
		{
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
				{
					if (unk_0x2A3398C6222EB190(Global_2313, 20))
					{
					}
					else
					{
						Global_14421 = 1;
						func_41();
						unk_0x683F0CB6CA4C99D0(0);
						Global_15794 = 1;
						Global_15745 = 6;
						unk_0xD804ACF2A7171150(&Global_2313, 27);
						if (!Global_15756)
						{
							unk_0xCD7E92DE2BFA0B0D(&Global_2314, 5);
						}
						func_13();
						Global_14443.f_1 = Global_14445;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 27);
		Global_15745 = 4;
		Global_15802 = 0;
		func_60();
		func_59();
		if (!Global_15758)
		{
			if (Global_16762 == 0)
			{
				if (!unk_0x2A3398C6222EB190(Global_2315, 5))
				{
					unk_0xE88229579D31DD06();
				}
				unk_0xD804ACF2A7171150(&Global_2315, 5);
			}
			else
			{
				unk_0x40D2F12208C7A228(Global_15364.f_368, Global_15364.f_369);
			}
		}
		func_58();
	}
}

void func_58()
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		uLocal_107 = unk_0x898811EA80D35DE2();
	}
	else
	{
		iLocal_104 = unk_0x31CD6E9F83C10233();
	}
}

void func_59()
{
	if (Global_15758)
	{
		if (Global_70785)
		{
			if (unk_0x77FA56883245AD26(Global_14424))
			{
				if (!unk_0x20551D6D924ED04B())
				{
					func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_1698), 15);
				}
			}
		}
	}
}

void func_60()
{
	if (unk_0x77FA56883245AD26(Global_14424))
	{
		if (!Global_15753)
		{
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD804ACF2A7171150(&Global_2313, 17);
			if (unk_0x2A3398C6222EB190(Global_2313, 20))
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15758)
			{
				unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
				unk_0x32F9127910F63DFA(4);
				unk_0x32F9127910F63DFA(0);
				unk_0x32F9127910F63DFA(2);
				unk_0x9BC6C9E77AAC792E("CELL_CONDFON");
				unk_0x50B3C23D0902259F(&Global_15760);
				unk_0xCC5EB3A492FB7D4B();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0x1C703A54AB4B12F6();
			}
			else if (Global_104439.f_27911[Global_1628 /*29*/].f_24[Global_14443] == 0)
			{
				func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_104439.f_27911[Global_1628 /*29*/].f_3), &(Global_104439.f_27911[Global_1628 /*29*/].f_7), "CELL_219", &(Global_104439.f_27911[Global_1628 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		iLocal_109 = unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uLocal_95);
		iLocal_110 = unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uLocal_98);
	}
	else
	{
		iLocal_94 = unk_0x31CD6E9F83C10233();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = unk_0x31CD6E9F83C10233();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_15792 == 1)
	{
		if (func_44())
		{
			if (iLocal_109 > 4000)
			{
				if (unk_0x2A3398C6222EB190(Global_2313, 14))
				{
					if (unk_0x77FA56883245AD26(Global_14424))
					{
						func_41();
						Global_14442 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
			{
				if (unk_0x77FA56883245AD26(Global_14424))
				{
					func_41();
					Global_14442 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_14442 = 3;
	}
	if (Global_14442 == 2)
	{
		iLocal_30 = 0;
		Global_15745 = 4;
		func_54();
		Global_15802 = 0;
		func_60();
		func_59();
		if (!Global_15758)
		{
			if (Global_16762 == 0)
			{
				unk_0xE88229579D31DD06();
			}
			else
			{
				unk_0x40D2F12208C7A228(Global_15364.f_368, Global_15364.f_369);
			}
		}
		func_58();
		Global_16761 = 0;
	}
	if (Global_15792 == 0)
	{
		if (Global_14442 == 3)
		{
			if (Global_15758)
			{
				func_63();
				func_50(0);
			}
			else
			{
				func_62();
				Global_16761 = 1;
				unk_0x683F0CB6CA4C99D0(0);
				Global_15745 = 6;
				func_13();
				Global_14443.f_1 = Global_14445;
				func_8();
			}
		}
	}
	else if (Global_14442 == 3)
	{
	}
}

void func_62()
{
}

void func_63()
{
	Global_2507625.f_2 = 1;
	Global_2507625.f_38 = 1;
	if (unk_0xE096BC82D913B3DB())
	{
		if (unk_0x5CEC950AC6DFA966())
		{
			while (unk_0x1B1A23E823AFBA34())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x561E43F0D8CEEA31();
			Global_2507625 = 0;
			Global_2507625.f_2 = 0;
		}
		else if (func_66(Global_2507625.f_20))
		{
			if (unk_0x9EC1A7C50E0AB3CF(&(Global_2507625.f_20)))
			{
				if (!unk_0x09F6700424D0B0B4(&(Global_2507625.f_20)))
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
	if (Global_2507625.f_37)
	{
		func_50(0);
	}
	Global_2507625.f_37 = 0;
	Global_2507625.f_3 = 0;
}

void func_64()
{
	Global_2507625.f_1 = 0;
	Global_2507625 = 0;
	Global_2507625.f_2 = 0;
	Global_2507625.f_33 = -1;
	Global_2507625.f_34 = -1;
	StringCopy(&(Global_2507625.f_4), "", 64);
	StringCopy(&(Global_2507625.f_39[0 /*16*/]), "", 64);
	Global_2507625.f_38 = 0;
	Global_2507625.f_56 = 0;
	Global_2507625.f_57 = 0;
	Global_2507625.f_58 = -2;
	Global_2507625.f_3 = 0;
	func_65(&(Global_2507625.f_20));
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
	return unk_0x3E72C35EA9759781(&uParam0, 13);
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
	while (iLocal_92 < Global_15741)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_15364.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_14613[iVar2 /*6*/] = { Global_15364.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_14613[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14613[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_14613[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0xA56C5821F50C3275(&cLocal_38))
			{
				StringCopy(&cLocal_50, unk_0xC0D54565FC1032F4(&cLocal_38), 64);
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
				if (unk_0xA56C5821F50C3275(&(Global_14613[iVar2 /*6*/])))
				{
					if (unk_0xB3404E397FF56B3B(&(Global_14613[iVar2 /*6*/]), &(Global_15364.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x8D86C0651327BCC6(iVar3, &cLocal_50, &(Global_14613[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0xA56C5821F50C3275(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xC0D54565FC1032F4(&cLocal_44), 64);
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
				unk_0x8D86C0651327BCC6(iVar3, &cLocal_50, &(Global_15364.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14613[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14613[iVar2 /*6*/]), "END", 24);
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
	if (Global_15751 == 0)
	{
		unk_0x15CD2E21E32A8244(uLocal_83);
		unk_0xA191FCC60A243122(uLocal_84);
		unk_0x8A9E1161761725C4(Global_15364.f_368, Global_15364.f_369, Global_15364.f_370, uLocal_82);
		Global_15745 = 4;
	}
}

int func_68(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0xB3404E397FF56B3B(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0xB3404E397FF56B3B(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0xB3404E397FF56B3B(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0xB3404E397FF56B3B(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_73), 2, 3);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_73), 1, 2);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_73), 0, 1);
	if (unk_0xB3404E397FF56B3B(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(uVar0);
}

int func_79(var uParam0)
{
	if (unk_0xB3404E397FF56B3B(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0xB3404E397FF56B3B(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(uVar0);
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(uVar0);
}

void func_82()
{
	cLocal_85 = { Global_15364.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0xA56C5821F50C3275(&cLocal_85))
	{
		sLocal_91 = unk_0xC0D54565FC1032F4(&cLocal_85);
		if (unk_0x996B09F758C57FBE(sLocal_91))
		{
		}
	}
}

void func_83()
{
	cLocal_73 = { Global_15364.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0xA56C5821F50C3275(&cLocal_73))
	{
		sLocal_79 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_73), 0, 1);
		if (unk_0x996B09F758C57FBE(sLocal_79))
		{
		}
		sLocal_80 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_73), 1, 2);
		if (unk_0x996B09F758C57FBE(sLocal_80))
		{
		}
		sLocal_81 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_73), 2, 3);
		if (unk_0x996B09F758C57FBE(sLocal_81))
		{
		}
	}
}

void func_84()
{
	cLocal_66 = { Global_15364.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0xA56C5821F50C3275(&cLocal_66))
	{
		sLocal_72 = unk_0xC0D54565FC1032F4(&cLocal_66);
		if (unk_0x996B09F758C57FBE(sLocal_72))
		{
		}
	}
}

void func_85()
{
	func_86();
	unk_0x15CD2E21E32A8244(uLocal_83);
	unk_0xA191FCC60A243122(uLocal_84);
	if (Global_16737)
	{
		unk_0x9435559A32753BD2(Global_15364.f_368, Global_15364.f_369, Global_15364.f_370, uLocal_82);
		iLocal_36 = unk_0x31CD6E9F83C10233();
	}
	else
	{
		unk_0x8A9E1161761725C4(Global_15364.f_368, Global_15364.f_369, Global_15364.f_370, uLocal_82);
	}
	Global_15745 = 4;
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
	if (unk_0x87AA5A2E3C3B272A(&Global_15821))
	{
		if (unk_0xB3404E397FF56B3B(&Global_15821, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0x43F4A6D2081CC5ED() || unk_0x9D3EA2635512FD6B())
		{
			if (Global_1573338 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_70785 || func_94())
		{
			if (Global_1573338 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_92())
		{
			iVar14 = 1;
		}
		if (func_91())
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_15747 < 5 || Global_15747 == 10) || Global_15747 == 12) || Global_15747 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0x1D69C39ECF71C85C(&Global_15821, 7);
				while (!unk_0xF376F1492C8D737F(7))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			else
			{
				unk_0x21F221E63D711C64(&Global_15821, 15);
				while (!unk_0xF376F1492C8D737F(15))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0x1D69C39ECF71C85C(&Global_15821, 6);
			while (!unk_0xF376F1492C8D737F(6))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0x21F221E63D711C64(&Global_15821, 14);
			while (!unk_0xF376F1492C8D737F(14))
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
	unk_0xADD24809F93C3841();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_16755 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_15364 };
		StringConCat(&cLocal_44, "A", 24);
		Global_14613[iVar2 /*6*/] = { Global_15364 };
		StringConCat(&(Global_14613[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14613[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_14613[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0xA56C5821F50C3275(&cLocal_38))
		{
			StringCopy(&cLocal_50, unk_0xC0D54565FC1032F4(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_2608330 == 0)
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
			if (unk_0xA56C5821F50C3275(&(Global_14613[iVar2 /*6*/])))
			{
				if (Global_16735 == 0 && Global_16741 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x8D86C0651327BCC6(iVar3, &cLocal_50, &(Global_14613[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0xB3404E397FF56B3B(&(Global_14613[iVar2 /*6*/]), &Global_16743))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x8D86C0651327BCC6(iVar3, &cLocal_50, &(Global_14613[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16755 = iVar2;
					if (Global_16741 == 1)
					{
						Global_16741 = 0;
					}
				}
			}
			else if (Global_16741 == 0 && Global_16735 == 0)
			{
				unk_0x8D86C0651327BCC6(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0xA56C5821F50C3275(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xC0D54565FC1032F4(&cLocal_44), 64);
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
				unk_0x8D86C0651327BCC6(iVar3, &cLocal_50, &Global_15364, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
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
		if (Global_15034[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0x76B3C79DE564AFC6(Global_15034[iVar0 /*10*/]) || Global_15034[iVar0 /*10*/] == 0)
			{
				unk_0x51C469122FD2BF2B(iVar0, Global_15034[iVar0 /*10*/], &(Global_15034[iVar0 /*10*/].f_1));
			}
			if (Global_15034.f_161 == iVar0)
			{
				if ((Global_15034.f_162 != 0f && Global_15034.f_162.f_1 != 0f) && Global_15034.f_162.f_2 != 0f)
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x30E630058E65C15C(Global_15034.f_161, Global_15034.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_2608330 == 1)
	{
		Global_2608330 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_2608149[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0x76B3C79DE564AFC6(Global_2608149[iVar0 /*9*/]) || Global_2608149[iVar0 /*9*/] == 0)
				{
					unk_0x51C469122FD2BF2B(Global_2608149[iVar0 /*9*/].f_8, Global_2608149[iVar0 /*9*/], &(Global_2608149[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()
{
	cLocal_85 = { Global_15364 };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0xA56C5821F50C3275(&cLocal_85))
	{
		sLocal_91 = unk_0xC0D54565FC1032F4(&cLocal_85);
		if (unk_0x996B09F758C57FBE(sLocal_91))
		{
		}
	}
}

void func_89()
{
	cLocal_73 = { Global_15364 };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0xA56C5821F50C3275(&cLocal_73))
	{
		sLocal_79 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_73), 0, 1);
		if (unk_0x996B09F758C57FBE(sLocal_79))
		{
		}
		sLocal_80 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_73), 1, 2);
		if (unk_0x996B09F758C57FBE(sLocal_80))
		{
		}
		sLocal_81 = unk_0x6B73FBA4FFD49093(unk_0xC0D54565FC1032F4(&cLocal_73), 2, 3);
		if (unk_0x996B09F758C57FBE(sLocal_81))
		{
		}
	}
}

void func_90()
{
	cLocal_66 = { Global_15364 };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0xA56C5821F50C3275(&cLocal_66))
	{
		sLocal_72 = unk_0xC0D54565FC1032F4(&cLocal_66);
		if (unk_0x996B09F758C57FBE(sLocal_72))
		{
		}
	}
}

int func_91()
{
	if ((((((((((((((((((((((((((((((((((((((unk_0xB3404E397FF56B3B(&Global_15821, "APCUTAU") || unk_0xB3404E397FF56B3B(&Global_15821, "APAIR")) || unk_0xB3404E397FF56B3B(&Global_15821, "APCALAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "PBPAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "EXPOWAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "EXCALAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "EXCPAAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "EXHELAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "BPLESAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "BPMALAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "LOWREAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMTRAAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMAMPAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMWEDAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMBUSAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMROCAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMFLIAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMPAAUD")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMDUNAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMRUIAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMMECAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMARMAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMBLZAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMPHAAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMTECAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMVOLAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "IMWASAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "GNRCAUD")) || unk_0xB3404E397FF56B3B(&Global_15821, "GNRWEAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "GRAPCAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "GRHALAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "GRDUNAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "GRMOCAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "GROPPAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "GROP2AU")) || unk_0xB3404E397FF56B3B(&Global_15821, "GRTAMAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "GRTRSAU")) || unk_0xB3404E397FF56B3B(&Global_15821, "SMGCAUD")) || unk_0xB3404E397FF56B3B(&Global_15821, "SMGFZAU"))
	{
		return 1;
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
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

var func_94()
{
	return Global_1312830;
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0x43F4A6D2081CC5ED() || unk_0x9D3EA2635512FD6B())
	{
		if (Global_1573338 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_70785)
	{
		if (Global_1573338 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_92())
	{
		iVar1 = 1;
	}
	if (unk_0x87AA5A2E3C3B272A(&Global_15821))
	{
		if (unk_0xB3404E397FF56B3B(&Global_15821, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_91())
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_15747 < 5 || Global_15747 == 10) || Global_15747 == 12) || Global_15747 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0x1D69C39ECF71C85C(&Global_15821, 7);
			while (!unk_0xF376F1492C8D737F(7))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0x21F221E63D711C64(&Global_15821, 15);
			while (!unk_0xF376F1492C8D737F(15))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0x1D69C39ECF71C85C(&Global_15821, 6);
		while (!unk_0xF376F1492C8D737F(6))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		unk_0x21F221E63D711C64(&Global_15821, 14);
		while (!unk_0xF376F1492C8D737F(14))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0xADD24809F93C3841();
	func_87();
}

void func_96()
{
	while (Global_14426 == 1 && unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_14426 = 0;
	if (unk_0x2A3398C6222EB190(Global_2313, 20))
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 1);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2314, 1);
	}
	Global_14427 = 0;
	if (Global_15741 == 0)
	{
		if (!Global_15758)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_14612 = 0;
	if (Global_15755)
	{
		if (Global_16762 == 0)
		{
			if (Global_15758 == 0)
			{
				iLocal_34 = 5000;
				unk_0xDE4B755ED375E9B6(Global_15364.f_368, Global_15364.f_369);
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
		Global_14612 = 1;
		unk_0x5AE11BC36633DE4E(0);
		while ((Global_14612 == 1 && Global_15745 == 1) && unk_0xC9D9444186B5A374() < iLocal_34)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				Global_14612 = 0;
				unk_0x683F0CB6CA4C99D0(0);
				Global_15745 = 6;
			}
			if (unk_0xCAD6D8C85D0F329B())
			{
				if (unk_0x350A13DA0A9487A3())
				{
					Global_14612 = 0;
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > iLocal_34)
		{
		}
		if (Global_15745 != 1)
		{
		}
		if (Global_14612 == 0)
		{
		}
	}
	Global_14612 = 0;
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 0) || Global_15745 != 1) || Global_14409 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
	}
	else
	{
		if (Global_15753)
		{
			Global_16763 = 0;
			iLocal_32 = 0;
		}
		if (Global_15755 == 0)
		{
			if (Global_15796 == 0)
			{
				Global_14445 = Global_14443.f_1;
				Global_15796 = 1;
			}
			iLocal_30 = 0;
			if (Global_16762 == 0)
			{
				unk_0xDE4B755ED375E9B6(Global_15364.f_368, Global_15364.f_369);
				unk_0x4EDE34FBADD967A6(0);
				Global_15745 = 3;
				Global_14612 = 1;
				unk_0x5AE11BC36633DE4E(0);
				unk_0xCD7E92DE2BFA0B0D(&Global_2313, 27);
				unk_0xC1B1E9A034A63A62(0);
			}
			else
			{
				Global_14612 = 0;
				Global_15745 = 4;
			}
			Global_14442 = 0;
			if (Global_15756 == 1)
			{
				if (Global_14443.f_1 == 10)
				{
				}
				if (!Global_14443.f_1 == 9)
				{
					if (Global_14443.f_1 > 4)
					{
						if (Global_14426 == 0)
						{
							Global_14443.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14443.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14443.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (Global_14612 == 1)
					{
						if (unk_0xCAD6D8C85D0F329B())
						{
							if (unk_0x350A13DA0A9487A3())
							{
								Global_14612 = 0;
							}
						}
					}
				}
				if (Global_14443.f_1 == 6)
				{
				}
				if (Global_14443.f_1 == 10)
				{
				}
				if (Global_14443.f_1 == 3)
				{
					unk_0x683F0CB6CA4C99D0(0);
					Global_15745 = 6;
					Global_14427 = 1;
					return;
				}
				Global_14443.f_1 = 9;
				func_8();
			}
			if (unk_0x27CA09C6DFAB1E79())
			{
				uLocal_101 = unk_0x898811EA80D35DE2();
			}
			else
			{
				iLocal_99 = unk_0x31CD6E9F83C10233();
			}
			while (Global_14443.f_1 != 9 && Global_14426 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14612 == 1)
				{
					if (unk_0xCAD6D8C85D0F329B())
					{
						if (unk_0x350A13DA0A9487A3())
						{
							Global_14612 = 0;
						}
					}
				}
				if (unk_0x27CA09C6DFAB1E79())
				{
					iLocal_108 = unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x31CD6E9F83C10233();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_16761 = 1;
						Global_14426 = 1;
					}
				}
			}
			if (!unk_0x2A3398C6222EB190(Global_2313, 11))
			{
				if (func_44() == 0)
				{
					func_54();
				}
			}
			if (Global_14426 == 0)
			{
				if (!Global_16762 == 0)
				{
					Global_15802 = 0;
					func_60();
					func_59();
					if (!Global_15758)
					{
						if (Global_16762 == 0)
						{
							unk_0xE88229579D31DD06();
						}
						else
						{
							unk_0x40D2F12208C7A228(Global_15364.f_368, Global_15364.f_369);
						}
					}
					func_58();
				}
			}
			else
			{
				func_97();
				Global_14427 = 1;
			}
		}
		else
		{
			Global_14442 = 1;
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					if (Global_14443.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0xD804ACF2A7171150(&Global_2314, 21);
				}
			}
			if (Global_15796 == 0)
			{
				Global_14445 = Global_14443.f_1;
				Global_15796 = 1;
			}
			if (Global_14443.f_1 == 3)
			{
				Global_14443.f_1 = 4;
			}
			else
			{
				while (Global_14443.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (Global_14443.f_1 == 6)
				{
				}
				Global_14443.f_1 = 9;
				func_8();
			}
			if (unk_0x27CA09C6DFAB1E79())
			{
				uLocal_101 = unk_0x898811EA80D35DE2();
			}
			else
			{
				iLocal_99 = unk_0x31CD6E9F83C10233();
			}
			while (Global_14443.f_1 != 9 && Global_14426 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x27CA09C6DFAB1E79())
				{
					iLocal_108 = unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x31CD6E9F83C10233();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_16761 = 1;
						Global_14426 = 1;
						unk_0xD804ACF2A7171150(&Global_2314, 21);
					}
				}
			}
			if (Global_14426 == 0)
			{
				Global_15745 = 2;
			}
			else
			{
				func_97();
				Global_14427 = 1;
			}
			if (unk_0x27CA09C6DFAB1E79())
			{
				uLocal_95 = unk_0x898811EA80D35DE2();
				uLocal_98 = unk_0x898811EA80D35DE2();
			}
			else
			{
				iLocal_93 = unk_0x31CD6E9F83C10233();
				iLocal_96 = unk_0x31CD6E9F83C10233();
			}
		}
	}
}

void func_97()
{
	Global_14611 = 0;
	func_102();
}

void func_98()
{
	float fVar0;
	
	fVar0 = func_99(Global_14396[Global_14388 /*3*/], Global_14389[Global_14388 /*3*/], Global_14403, Global_14374, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16759 == 0)
		{
			unk_0x4C4F62CD43971CED(1);
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
	
	if (Global_2608357 == 0)
	{
		if (unk_0x2A3398C6222EB190(Global_2313, 14) && Global_14443.f_1 < 4)
		{
			unk_0x4EBACDA5E9A0E784(&Var0);
			if (Global_14396[Global_14388 /*3*/].f_1 == Var0.f_1)
			{
				Global_2608357 = 1;
			}
		}
	}
	if (func_44() && Global_2608357 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x31CD6E9F83C10233();
	}
	fVar3 = func_101((unk_0xBBDA792448DB5A89((unk_0x31CD6E9F83C10233() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_14371 = { func_100(Param0, Param3, fVar4) };
		Global_14374 = { func_100(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14371 = { Param3 };
		Global_14374 = { Param9 };
	}
	unk_0x99C19CAA37B6F6D3(Global_14371);
	unk_0xB0C8424D8C3EF063(Global_14374, 0);
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
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_104(sParam2, iParam3, 0);
}

int func_104(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x683F0CB6CA4C99D0(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
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
		if (unk_0x0065EA0CBFB686EA())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_33();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
			if (bParam2)
			{
				func_27();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
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
				switch (Global_14443.f_1)
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
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
				{
					return 0;
				}
			}
			func_24();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_48();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
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
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_106(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam11))
	{
		func_9(iParam11);
	}
	unk_0x1C703A54AB4B12F6();
}

