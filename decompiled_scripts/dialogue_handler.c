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
	unk_0x0A2FDF6E490B25B3();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xA2BC31158C8CEFD2(Global_7357, 1))
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				if (unk_0x31634D65216B86B6())
				{
					if (Global_19474)
					{
						func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_19429)
						{
							func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x3B76114EC84D5812(&Global_7357, 1);
				}
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_19671, 0))
		{
			if (!func_115())
			{
				if (!unk_0xA2BC31158C8CEFD2(Global_19671, 1))
				{
					unk_0xA1E7A40E1F56E511(&Global_19671, 1);
					if (unk_0x393E9918BC37548A())
					{
						uLocal_106 = unk_0x169A8AC9F93C2727();
					}
					else
					{
						iLocal_102 = unk_0x9B35D07DCD0F0B43();
					}
				}
				if (unk_0x393E9918BC37548A())
				{
					iLocal_108 = unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), uLocal_106);
				}
				else
				{
					iLocal_103 = unk_0x9B35D07DCD0F0B43();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_108(&Global_20259, &Global_20875, &Global_20795, Global_20808, Global_21790, Global_21791, 0))
					{
						Global_19671 = 0;
					}
				}
				else
				{
					Global_19671 = 0;
				}
			}
		}
		if ((!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_17, 4)) && !func_107())
		{
			if (Global_20805 != 0)
			{
				if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
				{
					func_106();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_102();
		}
		switch (Global_20805)
		{
			case 0:
				break;
			
			case 1:
				if (Global_20811)
				{
					if (Global_20801 == 0)
					{
						func_100();
					}
					else
					{
						func_99();
						func_100();
					}
				}
				else if (Global_20801 == 0)
				{
					func_89();
				}
				else
				{
					func_99();
					func_71();
				}
				break;
			
			case 2:
				func_65();
				break;
			
			case 3:
				func_61();
				break;
			
			case 4:
				if (Global_20811)
				{
					if (Global_20813)
					{
						func_60();
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
	Global_20815 = 0;
	Global_19485 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_20816 = 0;
	Global_20817 = 0;
	Global_20818 = 0;
	Global_20819 = 0;
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
	Global_20809 = 0;
	Global_20810 = 0;
	Global_20852 = 0;
	Global_20853 = 0;
	Global_20856 = 0;
	Global_20858 = 0;
	Global_20857 = 0;
	Global_20860 = 0;
	Global_20859 = 0;
	Global_21822 = 0;
	Global_20862 = 0;
	if (Global_19486.f_1 == 10)
	{
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_7356, 11))
	{
		func_3();
	}
	Global_20811 = 0;
	Global_20812 = 0;
	Global_20813 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21795 = 0;
	Global_21802 = 0;
	Global_21801 = 0;
	Global_21798 = 0;
	Global_21797 = 0;
	Global_21799 = 0;
	Global_21800 = 0;
	Global_20801 = 0;
	Global_20802 = 0;
	Global_20803 = 0;
	Global_20804 = 0;
	Global_21063 = 0;
	Global_21826 = 5000;
	Global_19469 = 0;
	unk_0x3B76114EC84D5812(&Global_7356, 20);
	unk_0x3B76114EC84D5812(&Global_7356, 24);
	unk_0x3B76114EC84D5812(&Global_7357, 23);
	unk_0x3B76114EC84D5812(&Global_7358, 0);
	unk_0x3B76114EC84D5812(&Global_7357, 9);
	unk_0x3B76114EC84D5812(&Global_7357, 31);
	unk_0x3B76114EC84D5812(&Global_7357, 17);
	unk_0x3B76114EC84D5812(&Global_7358, 5);
	Global_21789 = 0;
	Global_21788 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		Global_20805 = 4;
	}
	else
	{
		Global_20805 = 0;
		Global_21816 = 0;
		Global_21827 = unk_0x9B35D07DCD0F0B43();
	}
}

void func_3()
{
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 11))
			{
				if (!Global_19429)
				{
					unk_0xDD91C0502D7C4DFF(unk_0x0FA8183DAD2B3203(), 0, 1);
				}
				if (Global_76577)
				{
					unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 244, 1);
					unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 243, 1);
					unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 242, 1);
				}
				unk_0x3B76114EC84D5812(&Global_7356, 11);
			}
		}
	}
}

void func_4()
{
	Global_20815 = 0;
	Global_19485 = 0;
	func_2();
}

void func_5()
{
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0x2A58EB47597ACFA3(unk_0x0FA8183DAD2B3203()))
		{
			if (Global_20861 == 0)
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
	if (Global_21797 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_21816 == 1)
			{
				unk_0x138FA482B22A38D2(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_21816 == 0)
		{
			unk_0xE4F88BFF8FB3D84C();
			iLocal_31 = 0;
		}
	}
	else if (Global_21799 > 0)
	{
		iLocal_37 = unk_0x9B35D07DCD0F0B43();
		if ((iLocal_37 - iLocal_36) > Global_21799)
		{
			unk_0x16AC804EA3D51938();
			Global_21797 = 0;
		}
	}
	if (Global_21816 == 0)
	{
		if (!unk_0x04C7A9862FF737E9())
		{
			Global_20805 = 6;
		}
	}
}

void func_6()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x31634D65216B86B6())
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_7356, 11))
		{
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					if (Global_76577 == 0)
					{
						func_58();
					}
				}
			}
		}
		else if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
			{
				if (Global_76577 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_76577 == 0)
	{
		func_57();
	}
	if (iLocal_33 == 1)
	{
		func_52(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_21816 == 1)
		{
			if (Global_21817 == 1)
			{
				unk_0x138FA482B22A38D2(1);
				iLocal_31 = 1;
				Global_21817 = 0;
			}
		}
	}
	else if (Global_21816 == 0)
	{
		if (Global_21817 == 1)
		{
			unk_0xE4F88BFF8FB3D84C();
			iLocal_31 = 0;
			Global_21817 = 0;
		}
	}
	if (Global_20858 == 0)
	{
		if (!Global_20818)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_7357, 31))
			{
				if (!unk_0xA2BC31158C8CEFD2(Global_7357, 27))
				{
					if (func_51())
					{
						if (Global_19486.f_1 > 6)
						{
							unk_0xA1E7A40E1F56E511(&Global_7357, 24);
							unk_0xA1E7A40E1F56E511(&Global_7357, 27);
							unk_0x3B76114EC84D5812(&Global_7357, 26);
							unk_0x3B76114EC84D5812(&Global_7357, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0x31634D65216B86B6() == 0 && Global_20818 == 0)
	{
		if (Global_20858 == 1)
		{
			unk_0xA1E7A40E1F56E511(&Global_7357, 23);
		}
		else
		{
			unk_0x3B76114EC84D5812(&Global_7357, 23);
		}
		if (Global_20862)
		{
			if (Global_20858 == 0)
			{
				Global_20424 = { Global_20863 };
				Global_20881 = { Global_20869 };
				Global_20815 = 0;
				Global_21822 = 6;
				func_50();
				return;
			}
		}
		if (!Global_20860)
		{
			while (Global_20858 == 1)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_19486.f_1 < 6)
				{
					Global_20858 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_49();
						if (Global_20860)
						{
							iLocal_30 = 1;
							Global_21820 = 1;
							func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671 /*29*/].f_7), &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_3), 0);
							func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_19474)
							{
								func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0xA1E7A40E1F56E511(&Global_7356, 17);
								func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0xA1E7A40E1F56E511(&Global_7356, 17);
								func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_21818 = 1;
							if (func_47(Global_6671, Global_19486) == 0)
							{
								func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_20947, "CELL_300", &(Global_117[Global_6671 /*10*/].f_4), "CELL_195", 0);
								func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671 /*29*/].f_7), &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_3), 0);
								func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_19474)
							{
								func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0x3B76114EC84D5812(&Global_7356, 17);
						}
					}
					if (func_46(2, Global_19455, 0))
					{
						func_44();
						Global_19412 = 0.19f;
						Global_20858 = 0;
						func_42();
						if (Global_20860)
						{
							Global_20424 = { Global_20941 };
							Global_21822 = 5;
						}
						else if (Global_20803 > 0)
						{
							Global_21063 = 1;
							Global_20805 = 0;
							Global_21826 = 0;
							if (unk_0xA2BC31158C8CEFD2(Global_7357, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_21789 + 1)
								{
									uLocal_111[iVar0] = func_41(&(Global_21064[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_41(&(Global_21426[iVar0 /*6*/]));
									iVar0++;
								}
								func_40(Global_21789, &Global_20094, Global_6671, &Global_20881, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_20803 == 2)
							{
								func_22(&Global_20094, Global_6671, &Global_20881, &(Global_20959[0 /*6*/]), &(Global_21011[0 /*6*/]), &(Global_20959[1 /*6*/]), &(Global_21011[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_21822 = 1;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_21();
							return;
						}
						else
						{
							Global_20424 = { Global_20899 };
							Global_21822 = 1;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_21();
						func_50();
						return;
					}
					if (func_46(2, Global_19456, 0) || unk_0xA2BC31158C8CEFD2(Global_7356, 24))
					{
						func_44();
						Global_19412 = 0.19f;
						Global_20858 = 0;
						func_42();
						if (Global_20860)
						{
							Global_20424 = { Global_20935 };
							Global_21822 = 4;
						}
						else if (Global_20803 > 0)
						{
							Global_21063 = 1;
							Global_20805 = 0;
							Global_21826 = 0;
							if (unk_0xA2BC31158C8CEFD2(Global_7357, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_21788 + 1)
								{
									uLocal_173[iVar1] = func_41(&(Global_21245[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_41(&(Global_21607[iVar1 /*6*/]));
									iVar1++;
								}
								func_40(Global_21788, &Global_20094, Global_6671, &Global_20881, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_20803 == 2)
							{
								func_22(&Global_20094, Global_6671, &Global_20881, &(Global_20972[0 /*6*/]), &(Global_21024[0 /*6*/]), &(Global_20972[1 /*6*/]), &(Global_21024[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_21822 = 2;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_21();
							return;
						}
						else
						{
							Global_20424 = { Global_20905 };
							Global_21822 = 2;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_21();
						func_50();
						return;
					}
					if (func_46(2, Global_19458, 0))
					{
						if (Global_20860)
						{
							Global_19412 = 0.19f;
							Global_20858 = 0;
							func_42();
							func_44();
							Global_20424 = { Global_20929 };
							Global_21822 = 3;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_21();
							func_50();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_20858)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_19486.f_1 < 6)
				{
					Global_20858 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_49();
						func_48(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_48(Global_19467, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_19467, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_19474)
						{
							func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x3B76114EC84D5812(&Global_7356, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_46(2, Global_19455, 0))
					{
						func_44();
						Global_20858 = 0;
						func_42();
						unk_0xF1BC72CEC2746995(Global_19467, "GET_CURRENT_SELECTION");
						uLocal_236 = unk_0x3EC8759D3C8910D6();
						while (!unk_0x308962E80254EB41(uLocal_236))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iVar2 = unk_0x3A48AECE3E8E65D6(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_20424 = { Global_20935 };
								Global_21822 = 4;
								break;
							
							case 1:
								Global_20424 = { Global_20929 };
								Global_21822 = 3;
								break;
							
							case 2:
								Global_20424 = { Global_20941 };
								Global_21822 = 5;
								break;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_21();
						func_50();
						return;
					}
					if (func_46(2, Global_19456, 0))
					{
						Global_20858 = 0;
						func_42();
					}
				}
			}
		}
		if (Global_20806 == 0)
		{
			unk_0x623942A4F366F9BB(0);
			unk_0xC1B1E9A034A63A62(0);
			while (unk_0x83666F9FB8FEBD4B() < 900 && Global_19486.f_1 == 9)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_20805 = 6;
		}
		unk_0x9964F5BBD9415AB7(-1, "Hang_Up", &Global_19475, 1);
		func_13();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
	else if (Global_19664 == 0)
	{
		if (func_46(2, Global_19454, 0))
		{
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
				{
					if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
					{
					}
					else
					{
						Global_19464 = 1;
						func_42();
						unk_0x623942A4F366F9BB(0);
						Global_20854 = 1;
						Global_20855 = 1;
						Global_20805 = 6;
						func_13();
						Global_19486.f_1 = Global_19488;
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
	
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!unk_0x08EA887200715AD9(Global_19467))
	{
		if (Global_76577)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_48(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_7961);
			if (Global_7961 == 1)
			{
				func_48(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_48(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x3B76114EC84D5812(&Global_7356, 17);
			}
			else if (Global_76577)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x3B76114EC84D5812(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xA1E7A40E1F56E511(&Global_7356, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_10();
				func_48(Global_19467, "SET_THEME", unk_0xBBDA792448DB5A89(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
					unk_0xD02F24F3E2DB263A(4);
					unk_0xD02F24F3E2DB263A(0);
					unk_0xD02F24F3E2DB263A(2);
					unk_0x759AC38FBC6CCA9E("CELL_CONDFON");
					unk_0xA89C789CC9FEF523(&Global_20820);
					unk_0x81019766FF500CCA();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xAC7C2DE2DDC7AF03();
				}
				else if (func_47(Global_6671, Global_19486) == 0)
				{
					func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_48(Global_19467, "SET_THEME", unk_0xBBDA792448DB5A89(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_20818)
				{
					unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
					unk_0xD02F24F3E2DB263A(4);
					unk_0xD02F24F3E2DB263A(0);
					unk_0xD02F24F3E2DB263A(2);
					unk_0x759AC38FBC6CCA9E("CELL_CONDFON");
					unk_0xA89C789CC9FEF523(&Global_20820);
					unk_0x81019766FF500CCA();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xAC7C2DE2DDC7AF03();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_47(Global_6671, Global_19486) == 0)
					{
						func_48(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_48(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &Var0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

void func_10()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4269891)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
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
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
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
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar2);
								unk_0xAC7C2DE2DDC7AF03();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
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
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111560.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111560.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111560.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76577)
								{
									iVar4 = 0;
									iVar4 = Global_4268349;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268350[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268350[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268350[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42566;
											break;
										
										case 1:
											iVar6 = Global_42567;
											break;
										
										case 2:
											iVar6 = Global_42568;
											break;
										
										default:
											break;
									}
									func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(Global_7362);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar7);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar8);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 8)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(42);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if ((iVar1 == 23 && unk_0x2553916E420E8EF0(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xA2BC31158C8CEFD2(Global_7357, 6))
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(42);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
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
	return Global_41396 == iParam0;
}

void func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return;
	}
	switch (Global_19488)
	{
		case 5:
			Global_19488 = 6;
			break;
		
		case 6:
			if (unk_0xA2BC31158C8CEFD2(Global_7357, 5))
			{
				Global_19488 = 6;
				unk_0x3B76114EC84D5812(&Global_7357, 5);
			}
			else
			{
				Global_19488 = 3;
			}
			break;
		
		case 7:
			Global_19488 = 3;
			break;
		
		case 3:
			if (unk_0xA2BC31158C8CEFD2(Global_7357, 5))
			{
				Global_19488 = 6;
				unk_0x3B76114EC84D5812(&Global_7357, 5);
			}
			else
			{
				Global_19488 = 3;
			}
			break;
		
		default:
			Global_19488 = 3;
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
		if (func_46(2, Global_19462, 0) || unk_0x26BB91778477F482(2, 181))
		{
			func_18();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_46(2, Global_19463, 0) || unk_0x26BB91778477F482(2, 180))
		{
			func_15();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_15()
{
	func_48(Global_19467, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
	func_16();
}

void func_16()
{
	if (func_17())
	{
		if (Global_19669 == 0)
		{
			unk_0x8C1E539A8DCCD9C9(2);
		}
		else
		{
			unk_0x8C1E539A8DCCD9C9(1);
		}
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x18638AA8DFAAE787();
	iVar1 = unk_0x328DC5757076B0D5(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269893 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	func_48(Global_19467, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
	func_19();
}

void func_19()
{
	if (func_17())
	{
		if (Global_19669 == 0)
		{
			unk_0x8C1E539A8DCCD9C9(1);
		}
		else
		{
			unk_0x8C1E539A8DCCD9C9(2);
		}
	}
}

void func_20(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x9591DE0F00127F2A(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x9591DE0F00127F2A(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x9591DE0F00127F2A(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x9591DE0F00127F2A(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_21()
{
	if (unk_0x08EA887200715AD9(Global_19467))
	{
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
		}
		else
		{
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_39(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_38();
	if (iParam8 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_36(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_106();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_35(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_34();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0 /*6*/] = { Global_20985[0 /*6*/] };
			Global_20959[1 /*6*/] = { Global_20985[1 /*6*/] };
			Global_21011[0 /*6*/] = { Global_21037[0 /*6*/] };
			Global_21011[1 /*6*/] = { Global_21037[1 /*6*/] };
			Global_20972[0 /*6*/] = { Global_20998[0 /*6*/] };
			Global_20972[1 /*6*/] = { Global_20998[1 /*6*/] };
			Global_21024[0 /*6*/] = { Global_21050[0 /*6*/] };
			Global_21024[1 /*6*/] = { Global_21050[1 /*6*/] };
		}
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam3)
			{
				func_27();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (Global_21063 == 0)
					{
						if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
						{
							return 0;
						}
						if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
						{
							return 0;
						}
						if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
						{
							return 0;
						}
						if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
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
				switch (Global_19486.f_1)
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
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_50();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_106();
	}
	return 0;
}

void func_24()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_25()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_28();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_28()
{
	func_29();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_29()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_32(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_31(unk_0x0FA8183DAD2B3203());
			if (func_30(iVar0) && (!func_12(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_30(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(uParam0);
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
		return func_33(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_33(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_35(int iParam0, int iParam1)
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

void func_36(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_37(iParam0);
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

void func_37(var uParam0)
{
	Global_20802 = uParam0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
}

void func_38()
{
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_20819 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_40(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_39(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_38();
	if (iParam7 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	func_37(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_41(var uParam0)
{
	return uParam0;
}

void func_42()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Accept", &Global_19475, 1);
		func_43();
	}
}

void func_43()
{
	if (func_17())
	{
		unk_0x8C1E539A8DCCD9C9(5);
	}
}

void func_44()
{
	if (func_45())
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (!Global_19429)
				{
					if (!unk_0xA2BC31158C8CEFD2(Global_7356, 11))
					{
						func_58();
					}
				}
			}
		}
	}
}

int func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if (Global_20805 != 2)
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
		if (unk_0xA4E0D905CE4E7657(unk_0x0FA8183DAD2B3203(), 0))
		{
			return 0;
		}
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!unk_0x65218F793B9F3C45())
			{
				if (unk_0xE294A1321110B3E9(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xDC58B22FD83FE49F(unk_0x0FA8183DAD2B3203()) || unk_0x2A58EB47597ACFA3(unk_0x0FA8183DAD2B3203())) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x05742CF45F4CFB9C(unk_0x0FA8183DAD2B3203()))
		{
			return 0;
		}
		if (Global_110608)
		{
			return 0;
		}
	}
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x18638AA8DFAAE787();
	iVar1 = unk_0x328DC5757076B0D5(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x65218F793B9F3C45()))
	{
		iVar2 = 1;
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				uVar3 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
				if ((((((((unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(uVar3)) || unk_0xA03B0E2641CE8F87(unk_0x7F375072508F738F(uVar3))) || unk_0x79676C1B659A9398(unk_0x7F375072508F738F(uVar3))) || unk_0x7F375072508F738F(uVar3) == joaat("seashark")) || unk_0x7F375072508F738F(uVar3) == joaat("seashark2")) || unk_0x7F375072508F738F(uVar3) == joaat("rhino")) || unk_0x7F375072508F738F(uVar3) == joaat("submersible")) || unk_0x7F375072508F738F(uVar3) == joaat("submersible2")) || unk_0x7F375072508F738F(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269893 || iVar2 == 1)
	{
		if (unk_0x222F76006659B0EB(joaat("apptrackify")) > 0 || Global_111560.f_14046.f_89)
		{
			if (unk_0x222F76006659B0EB(joaat("michael2")) > 0)
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

int func_46(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x26BB91778477F482(iParam0, uParam1) || (iParam2 == 1 && unk_0x80E2BA2BD5AB1A3F(iParam0, iParam1)))
	{
		if (unk_0xE434AB6E3DE89861())
		{
			if (unk_0x2F972EA053458B78() == 0 || (unk_0x4ABA84DE907E0474() && unk_0x59415A8719336539(2)))
			{
				return 0;
			}
		}
		if (unk_0xCD97B9861557C025() || unk_0x8E01A12946ECF396())
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

int func_47(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_48(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_49()
{
	if (func_45())
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (!Global_19429)
				{
					if (unk_0xA2BC31158C8CEFD2(Global_7356, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

int func_51()
{
	if (unk_0x393E9918BC37548A())
	{
		iLocal_108 = unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), uLocal_107);
	}
	else
	{
		iLocal_105 = unk_0x9B35D07DCD0F0B43();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_52(int iParam0)
{
	if (func_56())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_55())
		{
			func_53(1, 1);
		}
		else
		{
			func_53(0, 0);
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
	if (!func_25())
	{
		Global_19486.f_1 = 3;
	}
}

void func_53(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_54(0))
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

int func_54(int iParam0)
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

bool func_55()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

bool func_56()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_57()
{
	if (func_46(2, Global_19463, 0))
	{
		if (Global_21816 == 0)
		{
			if (Global_20811)
			{
				if (unk_0xA2BC31158C8CEFD2(Global_7357, 17))
				{
				}
				else
				{
					unk_0x9964CD24EE97E704();
				}
			}
		}
	}
}

void func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (func_59() && unk_0xA4E0D905CE4E7657(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && iVar1 == 0)
		{
			iVar2 = unk_0xC74E62D8CDF80E57(unk_0x0FA8183DAD2B3203(), 0);
			if (Global_76577)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xACFB2B501B3CED36(unk_0x0FA8183DAD2B3203()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xACFB2B501B3CED36(unk_0x0FA8183DAD2B3203()))
			{
				iVar0 = 1;
			}
			if (!Global_19429)
			{
				if (Global_6671 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
						{
							if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
							{
							}
							else
							{
								if (Global_76577)
								{
									unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 244, 0);
									unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 243, 0);
									unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 242, 0);
								}
								unk_0xA1E7A40E1F56E511(&Global_7356, 11);
								unk_0xDD91C0502D7C4DFF(unk_0x0FA8183DAD2B3203(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_59()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x18638AA8DFAAE787();
	iVar1 = unk_0x328DC5757076B0D5(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_60()
{
	if (Global_76577 == 0)
	{
		func_57();
	}
	if (iLocal_33 == 1)
	{
		func_52(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_21818 = 1;
		if (func_47(Global_6671, Global_19486) == 0)
		{
			func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_20947, "CELL_300", "CELL_195", "CELL_195", 0);
			func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671 /*29*/].f_7), &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_3), 0);
			func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_19412 = 0.2f;
		if (Global_19474)
		{
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x3B76114EC84D5812(&Global_7356, 17);
	}
	if (Global_20858 == 1)
	{
		if (Global_19486.f_1 < 6)
		{
			Global_20858 = 0;
		}
		else
		{
			if (Global_19426 == 0)
			{
				if (func_46(2, Global_19455, 0))
				{
					Global_19412 = 0.19f;
					Global_20858 = 0;
					func_42();
					Global_21823 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_46(2, Global_19456, 0))
			{
				Global_19412 = 0.19f;
				Global_20858 = 0;
				func_42();
				Global_21823 = 2;
			}
		}
	}
	else if (Global_21823 == 2)
	{
		if (Global_20806 == 0)
		{
			unk_0x623942A4F366F9BB(0);
			Global_20805 = 6;
		}
		func_13();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
	else if (!unk_0x31634D65216B86B6())
	{
		iLocal_32 = 0;
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		unk_0x9964F5BBD9415AB7(-1, "Hang_Up", &Global_19475, 1);
		func_13();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
}

void func_61()
{
	if (Global_19672 == 1)
	{
		if (unk_0x31634D65216B86B6())
		{
			if (unk_0x51D34057172B2AC3())
			{
				Global_19672 = 0;
			}
		}
		if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			Global_19672 = 0;
			unk_0x623942A4F366F9BB(0);
			Global_20805 = 6;
		}
	}
	if (unk_0xC9D9444186B5A374() > iLocal_35)
	{
		if (Global_19672 == 1)
		{
			Global_19672 = 0;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() < Global_21826 || Global_19672 == 1)
	{
		if (func_46(2, Global_19454, 0))
		{
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
				{
					if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
					{
					}
					else
					{
						Global_19464 = 1;
						func_42();
						unk_0x623942A4F366F9BB(0);
						Global_20854 = 1;
						Global_20805 = 6;
						unk_0x3B76114EC84D5812(&Global_7356, 27);
						if (!Global_20816)
						{
							unk_0xA1E7A40E1F56E511(&Global_7357, 5);
						}
						func_13();
						Global_19486.f_1 = Global_19488;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 27);
		Global_20805 = 4;
		Global_20862 = 0;
		func_64();
		func_63();
		if (!Global_20818)
		{
			if (Global_21822 == 0)
			{
				if (!unk_0xA2BC31158C8CEFD2(Global_7358, 5))
				{
					unk_0x16AC804EA3D51938();
				}
				unk_0x3B76114EC84D5812(&Global_7358, 5);
			}
			else
			{
				unk_0x76E6C6D2680476E1(Global_20424.f_368, Global_20424.f_369);
			}
		}
		func_62();
	}
}

void func_62()
{
	if (unk_0x393E9918BC37548A())
	{
		uLocal_107 = unk_0x169A8AC9F93C2727();
	}
	else
	{
		iLocal_104 = unk_0x9B35D07DCD0F0B43();
	}
}

void func_63()
{
	if (Global_20818)
	{
		if (Global_76577)
		{
			if (unk_0x08EA887200715AD9(Global_19467))
			{
				if (!unk_0xE434AB6E3DE89861())
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0xA1E7A40E1F56E511(&(Global_2531497.f_1732), 15);
				}
			}
		}
	}
}

void func_64()
{
	if (unk_0x08EA887200715AD9(Global_19467))
	{
		if (!Global_20813)
		{
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20818)
			{
				unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
				unk_0xD02F24F3E2DB263A(4);
				unk_0xD02F24F3E2DB263A(0);
				unk_0xD02F24F3E2DB263A(2);
				unk_0x759AC38FBC6CCA9E("CELL_CONDFON");
				unk_0xA89C789CC9FEF523(&Global_20820);
				unk_0x81019766FF500CCA();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0xAC7C2DE2DDC7AF03();
			}
			else if (func_47(Global_6671, Global_19486) == 0)
			{
				func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_116(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_219", &(Global_1798[Global_6671 /*29*/].f_3), 0);
			}
		}
		func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_65()
{
	if (unk_0x393E9918BC37548A())
	{
		iLocal_109 = unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), uLocal_95);
		iLocal_110 = unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), uLocal_98);
	}
	else
	{
		iLocal_94 = unk_0x9B35D07DCD0F0B43();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = unk_0x9B35D07DCD0F0B43();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_20852 == 1)
	{
		if (func_45())
		{
			if (iLocal_109 > 4000)
			{
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
				{
					if (unk_0x08EA887200715AD9(Global_19467))
					{
						func_42();
						Global_19485 = 2;
						func_64();
						func_63();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
			{
				if (unk_0x08EA887200715AD9(Global_19467))
				{
					func_42();
					Global_19485 = 2;
					func_64();
					func_63();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_19485 = 3;
	}
	if (Global_19485 == 2)
	{
		iLocal_30 = 0;
		Global_20805 = 4;
		func_58();
		Global_20862 = 0;
		func_64();
		func_63();
		if (!Global_20818)
		{
			if (Global_21822 == 0)
			{
				unk_0x16AC804EA3D51938();
			}
			else
			{
				unk_0x76E6C6D2680476E1(Global_20424.f_368, Global_20424.f_369);
			}
		}
		func_62();
		Global_21821 = 0;
	}
	if (Global_20852 == 0)
	{
		if (Global_19485 == 3)
		{
			if (Global_20818)
			{
				func_67();
				func_52(0);
			}
			else
			{
				func_66();
				Global_21821 = 1;
				unk_0x623942A4F366F9BB(0);
				Global_20805 = 6;
				func_13();
				Global_19486.f_1 = Global_19488;
				func_8();
			}
		}
	}
	else if (Global_19485 == 3)
	{
	}
}

void func_66()
{
}

void func_67()
{
	Global_2537824.f_2 = 1;
	Global_2537824.f_38 = 1;
	if (unk_0x2A983C9CF4EE0D5E())
	{
		if (unk_0xE8BCF9171F9AA37A())
		{
			while (unk_0xDC7A89D54C7236E0())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x2AF198BFBF9DB5C4();
			Global_2537824 = 0;
			Global_2537824.f_2 = 0;
		}
		else if (func_70(Global_2537824.f_20))
		{
			if (unk_0xB8A6A83E8C303720(&(Global_2537824.f_20)))
			{
				if (!unk_0x2DA7D4B6541F8946(&(Global_2537824.f_20)))
				{
					func_68();
				}
			}
		}
		else
		{
			func_68();
		}
	}
	else
	{
		func_68();
	}
	if (Global_2537824.f_37)
	{
		func_52(0);
	}
	Global_2537824.f_37 = 0;
	Global_2537824.f_3 = 0;
}

void func_68()
{
	Global_2537824.f_1 = 0;
	Global_2537824 = 0;
	Global_2537824.f_2 = 0;
	Global_2537824.f_33 = -1;
	Global_2537824.f_34 = -1;
	StringCopy(&(Global_2537824.f_4), "", 64);
	StringCopy(&(Global_2537824.f_39[0 /*16*/]), "", 64);
	Global_2537824.f_38 = 0;
	Global_2537824.f_56 = 0;
	Global_2537824.f_57 = 0;
	Global_2537824.f_58 = -2;
	Global_2537824.f_3 = 0;
	func_69(&(Global_2537824.f_20));
}

void func_69(var uParam0)
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

bool func_70(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5D17AB84230A234B(&uParam0, 13);
}

void func_71()
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
	while (iLocal_92 < Global_20801)
	{
		func_88();
		func_87();
		func_86();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_20424.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_19673[iVar2 /*6*/] = { Global_20424.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_19673[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_19673[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_19673[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0x005AF94672136563(&cLocal_38))
			{
				StringCopy(&cLocal_50, unk_0xD54FB72F71EFE6C4(&cLocal_38), 64);
				iVar3 = func_85(iVar13);
				iVar4 = func_84(iVar13);
				uVar5 = func_82(iVar13);
				uLocal_82 = func_81();
				uLocal_83 = func_80();
				uLocal_84 = func_79();
				uVar6 = func_78(iVar13);
				uVar7 = func_77(iVar13);
				uVar8 = func_76(iVar13);
				uVar12 = func_75(iVar13);
				uVar9 = func_74(iVar13);
				uVar10 = func_73(iVar13);
				uVar11 = func_72(iVar13);
				if (unk_0x005AF94672136563(&(Global_19673[iVar2 /*6*/])))
				{
					if (unk_0x2553916E420E8EF0(&(Global_19673[iVar2 /*6*/]), &(Global_20424.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0xB77219B56E67D9B2(iVar3, &cLocal_50, &(Global_19673[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x005AF94672136563(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xD54FB72F71EFE6C4(&cLocal_44), 64);
				iVar3 = func_85(0);
				iVar4 = func_84(0);
				uVar5 = func_82(0);
				uLocal_82 = func_81();
				uLocal_83 = func_80();
				uLocal_84 = func_79();
				uVar6 = func_78(0);
				uVar7 = func_77(0);
				uVar8 = func_76(0);
				uVar12 = func_75(0);
				uVar9 = func_74(0);
				uVar10 = func_73(0);
				uVar11 = func_72(0);
				unk_0xB77219B56E67D9B2(iVar3, &cLocal_50, &(Global_20424.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_19673[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_19673[iVar2 /*6*/]), "END", 24);
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
	if (Global_20811 == 0)
	{
		unk_0xC4C1531567987794(uLocal_83);
		unk_0xF63BDB1E51E765EA(uLocal_84);
		unk_0xFF034810086B6B59(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_82);
		Global_20805 = 4;
	}
}

int func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0x2553916E420E8EF0(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0x2553916E420E8EF0(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0x2553916E420E8EF0(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0x2553916E420E8EF0(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_76(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_79()
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_73), 2, 3);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80()
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_73), 1, 2);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81()
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_73), 0, 1);
	if (unk_0x2553916E420E8EF0(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_83(uVar0);
}

int func_83(var uParam0)
{
	if (unk_0x2553916E420E8EF0(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x2553916E420E8EF0(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_84(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_83(uVar0);
}

int func_85(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_83(uVar0);
}

void func_86()
{
	cLocal_85 = { Global_20424.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0x005AF94672136563(&cLocal_85))
	{
		sLocal_91 = unk_0xD54FB72F71EFE6C4(&cLocal_85);
		if (unk_0x79FCE4565761C974(sLocal_91))
		{
		}
	}
}

void func_87()
{
	cLocal_73 = { Global_20424.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0x005AF94672136563(&cLocal_73))
	{
		sLocal_79 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_73), 0, 1);
		if (unk_0x79FCE4565761C974(sLocal_79))
		{
		}
		sLocal_80 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_73), 1, 2);
		if (unk_0x79FCE4565761C974(sLocal_80))
		{
		}
		sLocal_81 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_73), 2, 3);
		if (unk_0x79FCE4565761C974(sLocal_81))
		{
		}
	}
}

void func_88()
{
	cLocal_66 = { Global_20424.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0x005AF94672136563(&cLocal_66))
	{
		sLocal_72 = unk_0xD54FB72F71EFE6C4(&cLocal_66);
		if (unk_0x79FCE4565761C974(sLocal_72))
		{
		}
	}
}

void func_89()
{
	func_90();
	unk_0xC4C1531567987794(uLocal_83);
	unk_0xF63BDB1E51E765EA(uLocal_84);
	if (Global_21797)
	{
		unk_0x2FA4971EB8745F88(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_82);
		iLocal_36 = unk_0x9B35D07DCD0F0B43();
	}
	else
	{
		unk_0xFF034810086B6B59(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_82);
	}
	Global_20805 = 4;
}

void func_90()
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
	if (unk_0xDC77FA79613451A8(&Global_20881))
	{
		if (unk_0x2553916E420E8EF0(&Global_20881, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0x39FDED461BF385C3() || unk_0x77BA37DB22C66465())
		{
			if (Global_1573347 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_76577 || func_98())
		{
			if (Global_1573347 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_96())
		{
			iVar14 = 1;
		}
		if (func_95(unk_0xA8C462EF7D9DC564(&Global_20881)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_20807 < 5 || Global_20807 == 10) || Global_20807 == 12) || Global_20807 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0x9F815D4FA0C47F97(&Global_20881, 7);
				while (!unk_0xA3D567B14856EDE1(7))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			else
			{
				unk_0x01109E9331DF4EDE(&Global_20881, 15);
				while (!unk_0xA3D567B14856EDE1(15))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0x9F815D4FA0C47F97(&Global_20881, 6);
			while (!unk_0xA3D567B14856EDE1(6))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0x01109E9331DF4EDE(&Global_20881, 14);
			while (!unk_0xA3D567B14856EDE1(14))
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
	unk_0xC3E48EDCC1B2CC6D();
	func_94();
	func_93();
	func_92();
	func_91();
	Global_21815 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_20424 };
		StringConCat(&cLocal_44, "A", 24);
		Global_19673[iVar2 /*6*/] = { Global_20424 };
		StringConCat(&(Global_19673[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_19673[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_19673[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0x005AF94672136563(&cLocal_38))
		{
			StringCopy(&cLocal_50, unk_0xD54FB72F71EFE6C4(&cLocal_38), 64);
			iVar3 = func_85(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4269803 == 0)
				{
				}
			}
			iVar4 = func_84(iVar2);
			uVar5 = func_82(iVar2);
			uLocal_82 = func_81();
			uLocal_83 = func_80();
			uLocal_84 = func_79();
			uVar6 = func_78(iVar2);
			uVar7 = func_77(iVar2);
			uVar8 = func_76(iVar2);
			uVar12 = func_75(iVar2);
			uVar9 = func_74(iVar2);
			uVar10 = func_73(iVar2);
			uVar11 = func_72(iVar2);
			if (unk_0x005AF94672136563(&(Global_19673[iVar2 /*6*/])))
			{
				if (Global_21795 == 0 && Global_21801 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0xB77219B56E67D9B2(iVar3, &cLocal_50, &(Global_19673[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x2553916E420E8EF0(&(Global_19673[iVar2 /*6*/]), &Global_21803))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0xB77219B56E67D9B2(iVar3, &cLocal_50, &(Global_19673[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_21815 = iVar2;
					if (Global_21801 == 1)
					{
						Global_21801 = 0;
					}
				}
			}
			else if (Global_21801 == 0 && Global_21795 == 0)
			{
				unk_0xB77219B56E67D9B2(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x005AF94672136563(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xD54FB72F71EFE6C4(&cLocal_44), 64);
				iVar3 = func_85(iVar2);
				iVar4 = func_84(iVar2);
				uVar5 = func_82(iVar2);
				uLocal_82 = func_81();
				uLocal_83 = func_80();
				uLocal_84 = func_79();
				uVar6 = func_78(iVar2);
				uVar7 = func_77(iVar2);
				uVar8 = func_76(iVar2);
				uVar12 = func_75(iVar2);
				uVar9 = func_74(iVar2);
				uVar10 = func_73(iVar2);
				uVar11 = func_72(iVar2);
				unk_0xB77219B56E67D9B2(iVar3, &cLocal_50, &Global_20424, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20094[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0xD4B321D9096B01FC(Global_20094[iVar0 /*10*/]) || Global_20094[iVar0 /*10*/] == 0)
			{
				unk_0xFDF1D6C93D9D0BC4(iVar0, Global_20094[iVar0 /*10*/], &(Global_20094[iVar0 /*10*/].f_1));
			}
			if (Global_20094.f_161 == iVar0)
			{
				if ((Global_20094.f_162 != 0f && Global_20094.f_162.f_1 != 0f) && Global_20094.f_162.f_2 != 0f)
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0xAC12A64A20521244(Global_20094.f_161, Global_20094.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4269803 == 1)
	{
		Global_4269803 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4269622[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0xD4B321D9096B01FC(Global_4269622[iVar0 /*9*/]) || Global_4269622[iVar0 /*9*/] == 0)
				{
					unk_0xFDF1D6C93D9D0BC4(Global_4269622[iVar0 /*9*/].f_8, Global_4269622[iVar0 /*9*/], &(Global_4269622[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_92()
{
	cLocal_85 = { Global_20424 };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0x005AF94672136563(&cLocal_85))
	{
		sLocal_91 = unk_0xD54FB72F71EFE6C4(&cLocal_85);
		if (unk_0x79FCE4565761C974(sLocal_91))
		{
		}
	}
}

void func_93()
{
	cLocal_73 = { Global_20424 };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0x005AF94672136563(&cLocal_73))
	{
		sLocal_79 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_73), 0, 1);
		if (unk_0x79FCE4565761C974(sLocal_79))
		{
		}
		sLocal_80 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_73), 1, 2);
		if (unk_0x79FCE4565761C974(sLocal_80))
		{
		}
		sLocal_81 = unk_0x9F91156E46B81976(unk_0xD54FB72F71EFE6C4(&cLocal_73), 2, 3);
		if (unk_0x79FCE4565761C974(sLocal_81))
		{
		}
	}
}

void func_94()
{
	cLocal_66 = { Global_20424 };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0x005AF94672136563(&cLocal_66))
	{
		sLocal_72 = unk_0xD54FB72F71EFE6C4(&cLocal_66);
		if (unk_0x79FCE4565761C974(sLocal_72))
		{
		}
	}
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
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
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
		case joaat("hs3faau"):
		case joaat("hs3prau"):
		case joaat("hs3cwau"):
		case joaat("hs3leau"):
		case -342942601:
		case joaat("hs3ceau"):
		case joaat("hs3reau"):
		case joaat("hs3fiau"):
		case joaat("hs3mnau"):
		case joaat("hs3vnau"):
			return 1;
		
		default:
	}
	return 0;
}

int func_96()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_97(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_97(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_97(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

var func_98()
{
	return Global_1312850;
}

void func_99()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0x39FDED461BF385C3() || unk_0x77BA37DB22C66465())
	{
		if (Global_1573347 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_76577)
	{
		if (Global_1573347 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_96())
	{
		iVar1 = 1;
	}
	if (unk_0xDC77FA79613451A8(&Global_20881))
	{
		if (unk_0x2553916E420E8EF0(&Global_20881, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_95(unk_0xA8C462EF7D9DC564(&Global_20881)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_20807 < 5 || Global_20807 == 10) || Global_20807 == 12) || Global_20807 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0x9F815D4FA0C47F97(&Global_20881, 7);
			while (!unk_0xA3D567B14856EDE1(7))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0x01109E9331DF4EDE(&Global_20881, 15);
			while (!unk_0xA3D567B14856EDE1(15))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0x9F815D4FA0C47F97(&Global_20881, 6);
		while (!unk_0xA3D567B14856EDE1(6))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		unk_0x01109E9331DF4EDE(&Global_20881, 14);
		while (!unk_0xA3D567B14856EDE1(14))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0xC3E48EDCC1B2CC6D();
	func_91();
}

void func_100()
{
	while (Global_19469 == 1 && unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_19469 = 0;
	if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 1);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7357, 1);
	}
	Global_19470 = 0;
	if (Global_20801 == 0)
	{
		if (!Global_20818)
		{
			func_90();
		}
	}
	else
	{
		func_71();
	}
	Global_19672 = 0;
	if (Global_20815)
	{
		if (Global_21822 == 0)
		{
			if (Global_20818 == 0)
			{
				iLocal_34 = 5000;
				unk_0x6BBDA6150B5F3783(Global_20424.f_368, Global_20424.f_369);
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
		Global_19672 = 1;
		unk_0x5AE11BC36633DE4E(0);
		while ((Global_19672 == 1 && Global_20805 == 1) && unk_0xC9D9444186B5A374() < iLocal_34)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				Global_19672 = 0;
				unk_0x623942A4F366F9BB(0);
				Global_20805 = 6;
			}
			if (unk_0x31634D65216B86B6())
			{
				if (unk_0x51D34057172B2AC3())
				{
					Global_19672 = 0;
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > iLocal_34)
		{
		}
		if (Global_20805 != 1)
		{
		}
		if (Global_19672 == 0)
		{
		}
	}
	Global_19672 = 0;
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 0) || Global_20805 != 1) || Global_19452 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
	}
	else
	{
		if (Global_20813)
		{
			Global_21823 = 0;
			iLocal_32 = 0;
		}
		if (Global_20815 == 0)
		{
			if (Global_20856 == 0)
			{
				Global_19488 = Global_19486.f_1;
				Global_20856 = 1;
			}
			iLocal_30 = 0;
			if (Global_21822 == 0)
			{
				unk_0x6BBDA6150B5F3783(Global_20424.f_368, Global_20424.f_369);
				unk_0x4EDE34FBADD967A6(0);
				Global_20805 = 3;
				Global_19672 = 1;
				unk_0x5AE11BC36633DE4E(0);
				unk_0xA1E7A40E1F56E511(&Global_7356, 27);
				unk_0xC1B1E9A034A63A62(0);
			}
			else
			{
				Global_19672 = 0;
				Global_20805 = 4;
			}
			Global_19485 = 0;
			if (Global_20816 == 1)
			{
				if (Global_19486.f_1 == 10)
				{
				}
				if (!Global_19486.f_1 == 9)
				{
					if (Global_19486.f_1 > 4)
					{
						if (Global_19469 == 0)
						{
							Global_19486.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_19486.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_19486.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (Global_19672 == 1)
					{
						if (unk_0x31634D65216B86B6())
						{
							if (unk_0x51D34057172B2AC3())
							{
								Global_19672 = 0;
							}
						}
					}
				}
				if (Global_19486.f_1 == 6)
				{
				}
				if (Global_19486.f_1 == 10)
				{
				}
				if (Global_19486.f_1 == 3)
				{
					unk_0x623942A4F366F9BB(0);
					Global_20805 = 6;
					Global_19470 = 1;
					return;
				}
				Global_19486.f_1 = 9;
				func_8();
			}
			if (unk_0x393E9918BC37548A())
			{
				uLocal_101 = unk_0x169A8AC9F93C2727();
			}
			else
			{
				iLocal_99 = unk_0x9B35D07DCD0F0B43();
			}
			while (Global_19486.f_1 != 9 && Global_19469 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_19672 == 1)
				{
					if (unk_0x31634D65216B86B6())
					{
						if (unk_0x51D34057172B2AC3())
						{
							Global_19672 = 0;
						}
					}
				}
				if (unk_0x393E9918BC37548A())
				{
					iLocal_108 = unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x9B35D07DCD0F0B43();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_21821 = 1;
						Global_19469 = 1;
					}
				}
			}
			if (!unk_0xA2BC31158C8CEFD2(Global_7356, 11))
			{
				if (func_45() == 0)
				{
					func_58();
				}
			}
			if (Global_19469 == 0)
			{
				if (!Global_21822 == 0)
				{
					Global_20862 = 0;
					func_64();
					func_63();
					if (!Global_20818)
					{
						if (Global_21822 == 0)
						{
							unk_0x16AC804EA3D51938();
						}
						else
						{
							unk_0x76E6C6D2680476E1(Global_20424.f_368, Global_20424.f_369);
						}
					}
					func_62();
				}
			}
			else
			{
				func_101();
				Global_19470 = 1;
			}
		}
		else
		{
			Global_19485 = 1;
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					if (Global_19486.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x3B76114EC84D5812(&Global_7357, 21);
				}
			}
			if (Global_20856 == 0)
			{
				Global_19488 = Global_19486.f_1;
				Global_20856 = 1;
			}
			if (Global_19486.f_1 == 3)
			{
				Global_19486.f_1 = 4;
			}
			else
			{
				while (Global_19486.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (Global_19486.f_1 == 6)
				{
				}
				Global_19486.f_1 = 9;
				func_8();
			}
			if (unk_0x393E9918BC37548A())
			{
				uLocal_101 = unk_0x169A8AC9F93C2727();
			}
			else
			{
				iLocal_99 = unk_0x9B35D07DCD0F0B43();
			}
			while (Global_19486.f_1 != 9 && Global_19469 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x393E9918BC37548A())
				{
					iLocal_108 = unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x9B35D07DCD0F0B43();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_21821 = 1;
						Global_19469 = 1;
						unk_0x3B76114EC84D5812(&Global_7357, 21);
					}
				}
			}
			if (Global_19469 == 0)
			{
				Global_20805 = 2;
			}
			else
			{
				func_101();
				Global_19470 = 1;
			}
			if (unk_0x393E9918BC37548A())
			{
				uLocal_95 = unk_0x169A8AC9F93C2727();
				uLocal_98 = unk_0x169A8AC9F93C2727();
			}
			else
			{
				iLocal_93 = unk_0x9B35D07DCD0F0B43();
				iLocal_96 = unk_0x9B35D07DCD0F0B43();
			}
		}
	}
}

void func_101()
{
	Global_19671 = 0;
	func_106();
}

void func_102()
{
	float fVar0;
	
	fVar0 = func_103(Global_19439[Global_19431 /*3*/], Global_19432[Global_19431 /*3*/], Global_19446, Global_19417, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_21819 == 0)
		{
			unk_0x4BEE8AE599A4A300(1);
		}
		iLocal_32 = 0;
	}
}

float func_103(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4269894 == 0)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_7356, 14) && Global_19486.f_1 < 4)
		{
			unk_0xB1B52CCC3333E09F(&Var0);
			if (Global_19439[Global_19431 /*3*/].f_1 == Var0.f_1)
			{
				Global_4269894 = 1;
			}
		}
	}
	if (func_45() && Global_4269894 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x9B35D07DCD0F0B43();
	}
	fVar3 = func_105((unk_0xBBDA792448DB5A89((unk_0x9B35D07DCD0F0B43() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_19414 = { func_104(Param0, Param3, fVar4) };
		Global_19417 = { func_104(Param6, Param9, fVar4) };
	}
	else
	{
		Global_19414 = { Param3 };
		Global_19417 = { Param9 };
	}
	unk_0x4577629BF7B43F7F(Global_19414);
	unk_0x083A4D953C3D26BA(Global_19417, 0);
	return fVar3;
}

Vector3 func_104(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_105(float fParam0, float fParam1, float fParam2)
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

void func_106()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

bool func_107()
{
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_184550, 12);
}

bool func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_109(sParam2, iParam3, 0);
}

int func_109(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_106();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_35(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_34();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_27();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
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
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_24();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_50();
		func_110();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_106();
	}
	return 0;
}

void func_110()
{
	if (!func_111())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_111()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_114())
	{
		return 0;
	}
	if (func_112(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_112(int iParam0)
{
	return func_113(iParam0, 20);
}

bool func_113(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_114()
{
	return -1;
}

int func_115()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

void func_116(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9591DE0F00127F2A(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x9591DE0F00127F2A(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0x9591DE0F00127F2A(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0x9591DE0F00127F2A(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0x9591DE0F00127F2A(iParam11))
	{
		func_9(iParam11);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

