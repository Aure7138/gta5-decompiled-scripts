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
	unk_0x330AFE43E1483B3F();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x48B8265059381CD0(Global_2314, 1))
		{
			if (!unk_0x48B8265059381CD0(Global_2313, 20))
			{
				if (unk_0x3ED8A07C6FA41E1B())
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
					unk_0x21E7933CCC7B3724(&Global_2314, 1);
				}
			}
		}
		if (unk_0x48B8265059381CD0(Global_14611, 0))
		{
			if (!func_105())
			{
				if (!unk_0x48B8265059381CD0(Global_14611, 1))
				{
					unk_0xEB79FECD9022AAF0(&Global_14611, 1);
					if (unk_0x63C468D583002D23())
					{
						uLocal_106 = unk_0xCB150A8B81012128();
					}
					else
					{
						iLocal_102 = unk_0x94E3E074F38DF86C();
					}
				}
				if (unk_0x63C468D583002D23())
				{
					iLocal_108 = unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), uLocal_106);
				}
				else
				{
					iLocal_103 = unk_0x94E3E074F38DF86C();
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
		if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !unk_0x48B8265059381CD0(Global_1633501.f_17, 4))
		{
			if (Global_15745 != 0)
			{
				if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) == 0)
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
	else if (unk_0x48B8265059381CD0(Global_2313, 11))
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
	unk_0x21E7933CCC7B3724(&Global_2313, 20);
	unk_0x21E7933CCC7B3724(&Global_2313, 24);
	unk_0x21E7933CCC7B3724(&Global_2314, 23);
	unk_0x21E7933CCC7B3724(&Global_2315, 0);
	unk_0x21E7933CCC7B3724(&Global_2314, 9);
	unk_0x21E7933CCC7B3724(&Global_2314, 31);
	unk_0x21E7933CCC7B3724(&Global_2314, 17);
	unk_0x21E7933CCC7B3724(&Global_2315, 5);
	Global_16729 = 0;
	Global_16728 = 0;
	if (unk_0x55C74612BE548D78())
	{
		Global_15745 = 4;
	}
	else
	{
		Global_15745 = 0;
		Global_16756 = 0;
		Global_16767 = unk_0x94E3E074F38DF86C();
	}
}

void func_3()
{
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x48B8265059381CD0(Global_2313, 11))
			{
				if (!Global_14386)
				{
					unk_0xD11C043590A1D7B7(unk_0x17B5CC8A8615737D(), 0, 1);
				}
				if (Global_69702)
				{
					unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 244, 1);
					unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 243, 1);
					unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 242, 1);
				}
				unk_0x21E7933CCC7B3724(&Global_2313, 11);
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
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D()))
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
				unk_0xC05FD77F568965EB(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16756 == 0)
		{
			unk_0x5FB0B609B3A49840();
			iLocal_31 = 0;
		}
	}
	else if (Global_16739 > 0)
	{
		iLocal_37 = unk_0x94E3E074F38DF86C();
		if ((iLocal_37 - iLocal_36) > Global_16739)
		{
			unk_0xFBB765291A96B687();
			Global_16737 = 0;
		}
	}
	if (Global_16756 == 0)
	{
		if (!unk_0x55C74612BE548D78())
		{
			Global_15745 = 6;
		}
	}
}

void func_6()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x3ED8A07C6FA41E1B())
	{
		if (!unk_0x48B8265059381CD0(Global_2313, 11))
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					if (Global_69702 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
			{
				if (Global_69702 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_69702 == 0)
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
				unk_0xC05FD77F568965EB(1);
				iLocal_31 = 1;
				Global_16757 = 0;
			}
		}
	}
	else if (Global_16756 == 0)
	{
		if (Global_16757 == 1)
		{
			unk_0x5FB0B609B3A49840();
			iLocal_31 = 0;
			Global_16757 = 0;
		}
	}
	if (Global_15798 == 0)
	{
		if (!Global_15758)
		{
			if (!unk_0x48B8265059381CD0(Global_2314, 31))
			{
				if (!unk_0x48B8265059381CD0(Global_2314, 27))
				{
					if (func_49())
					{
						if (Global_14443.f_1 > 6)
						{
							unk_0xEB79FECD9022AAF0(&Global_2314, 24);
							unk_0xEB79FECD9022AAF0(&Global_2314, 27);
							unk_0x21E7933CCC7B3724(&Global_2314, 26);
							unk_0x21E7933CCC7B3724(&Global_2314, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0x3ED8A07C6FA41E1B() == 0 && Global_15758 == 0)
	{
		if (Global_15798 == 1)
		{
			unk_0xEB79FECD9022AAF0(&Global_2314, 23);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&Global_2314, 23);
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
							func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, &(Global_101700.f_27009[Global_1628 /*29*/].f_7), &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
							func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14431)
							{
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0xEB79FECD9022AAF0(&Global_2313, 17);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0xEB79FECD9022AAF0(&Global_2313, 17);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16758 = 1;
							if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
							{
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, "CELL_300", &(Global_117[Global_1628 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, &(Global_101700.f_27009[Global_1628 /*29*/].f_7), &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
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
							unk_0x21E7933CCC7B3724(&Global_2313, 17);
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
							if (unk_0x48B8265059381CD0(Global_2314, 9))
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
					if (func_45(2, Global_14413, 0) || unk_0x48B8265059381CD0(Global_2313, 24))
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
							if (unk_0x48B8265059381CD0(Global_2314, 9))
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
						unk_0x21E7933CCC7B3724(&Global_2313, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14412, 0))
					{
						func_43();
						Global_15798 = 0;
						func_41();
						unk_0xEAC9A8A194DF8F91(Global_14424, "GET_CURRENT_SELECTION");
						uLocal_236 = unk_0x2B5EF283DBE89739();
						while (!unk_0x78FB53FF5C2D4903(uLocal_236))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iVar2 = unk_0x38CC180A8259BCD8(uLocal_236);
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
			unk_0x660E8E7836E95077(0);
			unk_0xC1B1E9A034A63A62(0);
			while (unk_0x83666F9FB8FEBD4B() < 900 && Global_14443.f_1 == 9)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_15745 = 6;
		}
		unk_0x4988C48537D1AE4F(-1, "Hang_Up", &Global_14432, 1);
		func_13();
		Global_14443.f_1 = Global_14445;
		func_8();
	}
	else if (Global_14604 == 0)
	{
		if (func_45(2, Global_14411, 0))
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
				{
					if (unk_0x48B8265059381CD0(Global_2313, 20))
					{
					}
					else
					{
						Global_14421 = 1;
						func_41();
						unk_0x660E8E7836E95077(0);
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
	while (!unk_0xFF84A94166FBB351(Global_14424))
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
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
			}
			else if (Global_69702)
			{
				func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
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
				unk_0xEB79FECD9022AAF0(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
			if (unk_0x48B8265059381CD0(Global_2313, 20))
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
				func_46(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101700.f_13010[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(4);
					unk_0xDF18CF55301CEB8B(0);
					unk_0xDF18CF55301CEB8B(2);
					unk_0xDCEB60B79ECB219E("CELL_CONDFON");
					unk_0xBAB00B98D1E61BEE(&Global_15760);
					unk_0x1798EBF9408190D3();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x44983883E630A945();
				}
				else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), "CELL_217", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
				}
				func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_46(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101700.f_13010[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15758)
				{
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(4);
					unk_0xDF18CF55301CEB8B(0);
					unk_0xDF18CF55301CEB8B(2);
					unk_0xDCEB60B79ECB219E("CELL_CONDFON");
					unk_0xBAB00B98D1E61BEE(&Global_15760);
					unk_0x1798EBF9408190D3();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x44983883E630A945();
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
					if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), &Var0, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
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
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
}

void func_10()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2595530)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
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
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar2);
								unk_0x44983883E630A945();
							}
							if (Global_2452520)
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
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69702)
								{
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2594053[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2594053[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2594053[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36917;
											break;
										
										case 1:
											iVar6 = Global_36918;
											break;
										
										case 2:
											iVar6 = Global_36919;
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
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(Global_2319);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar7);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar8);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 8)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if ((iVar1 == 23 && unk_0x6A7B0D91FD88D9EE(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x48B8265059381CD0(Global_2314, 6))
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
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
	return Global_35781 == iParam0;
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
			if (unk_0x48B8265059381CD0(Global_2314, 5))
			{
				Global_14445 = 6;
				unk_0x21E7933CCC7B3724(&Global_2314, 5);
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
			if (unk_0x48B8265059381CD0(Global_2314, 5))
			{
				Global_14445 = 6;
				unk_0x21E7933CCC7B3724(&Global_2314, 5);
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
		if (func_45(2, Global_14419, 0) || unk_0x4B972043966C2EB8(2, 181))
		{
			func_18();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_45(2, Global_14420, 0) || unk_0x4B972043966C2EB8(2, 180))
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
	unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
	func_16();
}

void func_16()
{
	if (func_17())
	{
		if (Global_14609 == 0)
		{
			unk_0xCC21A1BB2C60F0A4(2);
		}
		else
		{
			unk_0xCC21A1BB2C60F0A4(1);
		}
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69702)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2595532 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	func_46(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
	func_19();
}

void func_19()
{
	if (func_17())
	{
		if (Global_14609 == 0)
		{
			unk_0xCC21A1BB2C60F0A4(1);
		}
		else
		{
			unk_0xCC21A1BB2C60F0A4(2);
		}
	}
}

void func_20(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x9C88EB7B70229335(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x9C88EB7B70229335(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x9C88EB7B70229335(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x9C88EB7B70229335(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x44983883E630A945();
}

void func_21()
{
	if (unk_0xFF84A94166FBB351(Global_14424))
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
			else if (unk_0x48B8265059381CD0(Global_2313, 20))
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
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
		}
		else
		{
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
			if (unk_0x48B8265059381CD0(Global_2313, 20))
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
					unk_0x660E8E7836E95077(0);
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
		if (unk_0x55C74612BE548D78())
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (Global_16003 == 0)
					{
						if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
						{
							return 0;
						}
						if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
						{
							return 0;
						}
						if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
						{
							return 0;
						}
						if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
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
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		if (Global_69702)
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
	return Global_101700.f_2095.f_539.f_3549;
}

void func_29()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_32(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_31(unk_0x17B5CC8A8615737D());
			if (func_30(iVar0) && (!func_12(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_30(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(uParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
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
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Accept", &Global_14432, 1);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		unk_0xCC21A1BB2C60F0A4(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				if (!Global_14386)
				{
					if (!unk_0x48B8265059381CD0(Global_2313, 11))
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
	
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
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
		if (unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			if (!unk_0xC448AAB174DBB233())
			{
				if (unk_0xA77EE6C138A588EB(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D()) || unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D())) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x73D75E5206725CCD(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		if (Global_100748)
		{
			return 0;
		}
	}
	if (Global_69702)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xC448AAB174DBB233()))
	{
		iVar2 = 1;
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				uVar3 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if ((((((((unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(uVar3)) || unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(uVar3))) || unk_0xBA3A0947FBDD9ADD(unk_0x0324EEB10F81965F(uVar3))) || unk_0x0324EEB10F81965F(uVar3) == joaat("seashark")) || unk_0x0324EEB10F81965F(uVar3) == joaat("seashark2")) || unk_0x0324EEB10F81965F(uVar3) == joaat("rhino")) || unk_0x0324EEB10F81965F(uVar3) == joaat("submersible")) || unk_0x0324EEB10F81965F(uVar3) == joaat("submersible2")) || unk_0x0324EEB10F81965F(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2595532 || iVar2 == 1)
	{
		if (unk_0x82F1A060D8F4583B(joaat("apptrackify")) > 0 || Global_101700.f_13010.f_89)
		{
			if (unk_0x82F1A060D8F4583B(joaat("michael2")) > 0)
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
	if (unk_0x4B972043966C2EB8(iParam0, uParam1) || (iParam2 == 1 && unk_0x698C9A4C14BF3957(iParam0, iParam1)))
	{
		if (unk_0xEF4E5E47AF0D4480())
		{
			if (unk_0x8F013F929677E75D() == 0 || (unk_0x349B6C82BE3EF6DD() && unk_0xF23B2033129FFCF0(2)))
			{
				return 0;
			}
		}
		if (unk_0x95DBE123BC2DB80B() || unk_0x1CB39616BED2D488())
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
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x44983883E630A945();
}

void func_47()
{
	if (func_44())
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				if (!Global_14386)
				{
					if (unk_0x48B8265059381CD0(Global_2313, 11))
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
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

int func_49()
{
	if (unk_0x63C468D583002D23())
	{
		iLocal_108 = unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), uLocal_107);
	}
	else
	{
		iLocal_105 = unk_0x94E3E074F38DF86C();
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
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
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
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
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
				if (unk_0x48B8265059381CD0(Global_2314, 17))
				{
				}
				else
				{
					unk_0x7E2A2E92B575F006();
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
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (func_55() && unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && iVar1 == 0)
		{
			iVar2 = unk_0xB50239D338267F95(unk_0x17B5CC8A8615737D(), 0);
			if (Global_69702)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x697A7F59AC98FE0F(unk_0x17B5CC8A8615737D()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x697A7F59AC98FE0F(unk_0x17B5CC8A8615737D()))
			{
				iVar0 = 1;
			}
			if (!Global_14386)
			{
				if (Global_1628 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
						{
							if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
							}
							else
							{
								if (Global_69702)
								{
									unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 244, 0);
									unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 243, 0);
									unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 242, 0);
								}
								unk_0xEB79FECD9022AAF0(&Global_2313, 11);
								unk_0xD11C043590A1D7B7(unk_0x17B5CC8A8615737D(), 1, 1);
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
	
	uVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_56()
{
	if (Global_69702 == 0)
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
		if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
		{
			func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15887, &(Global_101700.f_27009[Global_1628 /*29*/].f_7), &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
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
		unk_0x21E7933CCC7B3724(&Global_2313, 17);
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
			unk_0x660E8E7836E95077(0);
			Global_15745 = 6;
		}
		func_13();
		Global_14443.f_1 = Global_14445;
		func_8();
	}
	else if (!unk_0x3ED8A07C6FA41E1B())
	{
		iLocal_32 = 0;
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		unk_0x4988C48537D1AE4F(-1, "Hang_Up", &Global_14432, 1);
		func_13();
		Global_14443.f_1 = Global_14445;
		func_8();
	}
}

void func_57()
{
	if (Global_14612 == 1)
	{
		if (unk_0x3ED8A07C6FA41E1B())
		{
			if (unk_0xC4AC39C3BC732D73())
			{
				Global_14612 = 0;
			}
		}
		if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			Global_14612 = 0;
			unk_0x660E8E7836E95077(0);
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
				{
					if (unk_0x48B8265059381CD0(Global_2313, 20))
					{
					}
					else
					{
						Global_14421 = 1;
						func_41();
						unk_0x660E8E7836E95077(0);
						Global_15794 = 1;
						Global_15745 = 6;
						unk_0x21E7933CCC7B3724(&Global_2313, 27);
						if (!Global_15756)
						{
							unk_0xEB79FECD9022AAF0(&Global_2314, 5);
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
		unk_0x21E7933CCC7B3724(&Global_2313, 27);
		Global_15745 = 4;
		Global_15802 = 0;
		func_60();
		func_59();
		if (!Global_15758)
		{
			if (Global_16762 == 0)
			{
				if (!unk_0x48B8265059381CD0(Global_2315, 5))
				{
					unk_0xFBB765291A96B687();
				}
				unk_0x21E7933CCC7B3724(&Global_2315, 5);
			}
			else
			{
				unk_0x35ABFBDBACB79654(Global_15364.f_368, Global_15364.f_369);
			}
		}
		func_58();
	}
}

void func_58()
{
	if (unk_0x63C468D583002D23())
	{
		uLocal_107 = unk_0xCB150A8B81012128();
	}
	else
	{
		iLocal_104 = unk_0x94E3E074F38DF86C();
	}
}

void func_59()
{
	if (Global_15758)
	{
		if (Global_69702)
		{
			if (unk_0xFF84A94166FBB351(Global_14424))
			{
				if (!unk_0xEF4E5E47AF0D4480())
				{
					func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0xEB79FECD9022AAF0(&(Global_2494199.f_1640), 15);
				}
			}
		}
	}
}

void func_60()
{
	if (unk_0xFF84A94166FBB351(Global_14424))
	{
		if (!Global_15753)
		{
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
			if (unk_0x48B8265059381CD0(Global_2313, 20))
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
				unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
				unk_0xDF18CF55301CEB8B(4);
				unk_0xDF18CF55301CEB8B(0);
				unk_0xDF18CF55301CEB8B(2);
				unk_0xDCEB60B79ECB219E("CELL_CONDFON");
				unk_0xBAB00B98D1E61BEE(&Global_15760);
				unk_0x1798EBF9408190D3();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0x44983883E630A945();
			}
			else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
			{
				func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_106(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), "CELL_219", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()
{
	if (unk_0x63C468D583002D23())
	{
		iLocal_109 = unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), uLocal_95);
		iLocal_110 = unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), uLocal_98);
	}
	else
	{
		iLocal_94 = unk_0x94E3E074F38DF86C();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = unk_0x94E3E074F38DF86C();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_15792 == 1)
	{
		if (func_44())
		{
			if (iLocal_109 > 4000)
			{
				if (unk_0x48B8265059381CD0(Global_2313, 14))
				{
					if (unk_0xFF84A94166FBB351(Global_14424))
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
			if (unk_0x48B8265059381CD0(Global_2313, 14))
			{
				if (unk_0xFF84A94166FBB351(Global_14424))
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
				unk_0xFBB765291A96B687();
			}
			else
			{
				unk_0x35ABFBDBACB79654(Global_15364.f_368, Global_15364.f_369);
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
				unk_0x660E8E7836E95077(0);
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
	Global_2499540.f_2 = 1;
	Global_2499540.f_38 = 1;
	if (unk_0x6C119F3638AC7ABE())
	{
		if (unk_0x462BB6BF1879A145())
		{
			while (unk_0x42DEB42B49D342CC())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x8F6CF1874D6F6F16();
			Global_2499540 = 0;
			Global_2499540.f_2 = 0;
		}
		else if (func_66(Global_2499540.f_20))
		{
			if (unk_0x2D5BDD3304DD4725(&(Global_2499540.f_20)))
			{
				if (!unk_0x00F8BCD915B03B62(&(Global_2499540.f_20)))
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
	if (Global_2499540.f_37)
	{
		func_50(0);
	}
	Global_2499540.f_37 = 0;
	Global_2499540.f_3 = 0;
}

void func_64()
{
	Global_2499540.f_1 = 0;
	Global_2499540 = 0;
	Global_2499540.f_2 = 0;
	Global_2499540.f_33 = -1;
	Global_2499540.f_34 = -1;
	StringCopy(&(Global_2499540.f_4), "", 64);
	StringCopy(&(Global_2499540.f_39[0 /*16*/]), "", 64);
	Global_2499540.f_38 = 0;
	Global_2499540.f_56 = 0;
	Global_2499540.f_57 = 0;
	Global_2499540.f_58 = -2;
	Global_2499540.f_3 = 0;
	func_65(&(Global_2499540.f_20));
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
	return unk_0x7BC6F3BBFEAB9958(&uParam0, 13);
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
			if (unk_0x63A528817609801B(&cLocal_38))
			{
				StringCopy(&cLocal_50, unk_0xC7E52B74A3B4973C(&cLocal_38), 64);
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
				if (unk_0x63A528817609801B(&(Global_14613[iVar2 /*6*/])))
				{
					if (unk_0x6A7B0D91FD88D9EE(&(Global_14613[iVar2 /*6*/]), &(Global_15364.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x999BA34C412E3B34(iVar3, &cLocal_50, &(Global_14613[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x63A528817609801B(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xC7E52B74A3B4973C(&cLocal_44), 64);
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
				unk_0x999BA34C412E3B34(iVar3, &cLocal_50, &(Global_15364.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
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
		unk_0x263EED6868F6421C(uLocal_83);
		unk_0x08F58F314645FF2D(uLocal_84);
		unk_0x41ACFA25553A5732(Global_15364.f_368, Global_15364.f_369, Global_15364.f_370, uLocal_82);
		Global_15745 = 4;
	}
}

int func_68(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_73), 2, 3);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_73), 1, 2);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_73), 0, 1);
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(uVar0);
}

int func_79(var uParam0)
{
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x6A7B0D91FD88D9EE(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(uVar0);
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(uVar0);
}

void func_82()
{
	cLocal_85 = { Global_15364.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0x63A528817609801B(&cLocal_85))
	{
		sLocal_91 = unk_0xC7E52B74A3B4973C(&cLocal_85);
		if (unk_0xD3115E7F7876D6E6(sLocal_91))
		{
		}
	}
}

void func_83()
{
	cLocal_73 = { Global_15364.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0x63A528817609801B(&cLocal_73))
	{
		sLocal_79 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_73), 0, 1);
		if (unk_0xD3115E7F7876D6E6(sLocal_79))
		{
		}
		sLocal_80 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_73), 1, 2);
		if (unk_0xD3115E7F7876D6E6(sLocal_80))
		{
		}
		sLocal_81 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_73), 2, 3);
		if (unk_0xD3115E7F7876D6E6(sLocal_81))
		{
		}
	}
}

void func_84()
{
	cLocal_66 = { Global_15364.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0x63A528817609801B(&cLocal_66))
	{
		sLocal_72 = unk_0xC7E52B74A3B4973C(&cLocal_66);
		if (unk_0xD3115E7F7876D6E6(sLocal_72))
		{
		}
	}
}

void func_85()
{
	func_86();
	unk_0x263EED6868F6421C(uLocal_83);
	unk_0x08F58F314645FF2D(uLocal_84);
	if (Global_16737)
	{
		unk_0x34CA490C757DC319(Global_15364.f_368, Global_15364.f_369, Global_15364.f_370, uLocal_82);
		iLocal_36 = unk_0x94E3E074F38DF86C();
	}
	else
	{
		unk_0x41ACFA25553A5732(Global_15364.f_368, Global_15364.f_369, Global_15364.f_370, uLocal_82);
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
	if (unk_0x45028EC213071A32(&Global_15821))
	{
		if (unk_0x6A7B0D91FD88D9EE(&Global_15821, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0x7C2F31E78C33DE0F() || unk_0x8EA3D5407E9F4AF0())
		{
			if (Global_1573336 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_69702 || func_94())
		{
			if (Global_1573336 == 0)
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
				unk_0xA73AE78D2491E6E1(&Global_15821, 7);
				while (!unk_0x657558590DD37F85(7))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			else
			{
				unk_0xCCF06EFB1D1BBFE7(&Global_15821, 15);
				while (!unk_0x657558590DD37F85(15))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0xA73AE78D2491E6E1(&Global_15821, 6);
			while (!unk_0x657558590DD37F85(6))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xCCF06EFB1D1BBFE7(&Global_15821, 14);
			while (!unk_0x657558590DD37F85(14))
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
	unk_0x2EAE4D4764ADC4B5();
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
		if (unk_0x63A528817609801B(&cLocal_38))
		{
			StringCopy(&cLocal_50, unk_0xC7E52B74A3B4973C(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_2595506 == 0)
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
			if (unk_0x63A528817609801B(&(Global_14613[iVar2 /*6*/])))
			{
				if (Global_16735 == 0 && Global_16741 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x999BA34C412E3B34(iVar3, &cLocal_50, &(Global_14613[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x6A7B0D91FD88D9EE(&(Global_14613[iVar2 /*6*/]), &Global_16743))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x999BA34C412E3B34(iVar3, &cLocal_50, &(Global_14613[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16755 = iVar2;
					if (Global_16741 == 1)
					{
						Global_16741 = 0;
					}
				}
			}
			else if (Global_16741 == 0 && Global_16735 == 0)
			{
				unk_0x999BA34C412E3B34(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x63A528817609801B(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xC7E52B74A3B4973C(&cLocal_44), 64);
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
				unk_0x999BA34C412E3B34(iVar3, &cLocal_50, &Global_15364, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
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
			if (unk_0x23E9113C762466ED(Global_15034[iVar0 /*10*/]) || Global_15034[iVar0 /*10*/] == 0)
			{
				unk_0xD893946689A76D8F(iVar0, Global_15034[iVar0 /*10*/], &(Global_15034[iVar0 /*10*/].f_1));
			}
			if (Global_15034.f_161 == iVar0)
			{
				if ((Global_15034.f_162 != 0f && Global_15034.f_162.f_1 != 0f) && Global_15034.f_162.f_2 != 0f)
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x9074D24A8A610983(Global_15034.f_161, Global_15034.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_2595506 == 1)
	{
		Global_2595506 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_2595325[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0x23E9113C762466ED(Global_2595325[iVar0 /*9*/]) || Global_2595325[iVar0 /*9*/] == 0)
				{
					unk_0xD893946689A76D8F(Global_2595325[iVar0 /*9*/].f_8, Global_2595325[iVar0 /*9*/], &(Global_2595325[iVar0 /*9*/].f_1));
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
	if (unk_0x63A528817609801B(&cLocal_85))
	{
		sLocal_91 = unk_0xC7E52B74A3B4973C(&cLocal_85);
		if (unk_0xD3115E7F7876D6E6(sLocal_91))
		{
		}
	}
}

void func_89()
{
	cLocal_73 = { Global_15364 };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0x63A528817609801B(&cLocal_73))
	{
		sLocal_79 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_73), 0, 1);
		if (unk_0xD3115E7F7876D6E6(sLocal_79))
		{
		}
		sLocal_80 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_73), 1, 2);
		if (unk_0xD3115E7F7876D6E6(sLocal_80))
		{
		}
		sLocal_81 = unk_0xCF2B6C8AD32541B9(unk_0xC7E52B74A3B4973C(&cLocal_73), 2, 3);
		if (unk_0xD3115E7F7876D6E6(sLocal_81))
		{
		}
	}
}

void func_90()
{
	cLocal_66 = { Global_15364 };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0x63A528817609801B(&cLocal_66))
	{
		sLocal_72 = unk_0xC7E52B74A3B4973C(&cLocal_66);
		if (unk_0xD3115E7F7876D6E6(sLocal_72))
		{
		}
	}
}

int func_91()
{
	if ((((((((((((((((((((((((((unk_0x6A7B0D91FD88D9EE(&Global_15821, "APCUTAU") || unk_0x6A7B0D91FD88D9EE(&Global_15821, "APAIR")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "APCALAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "PBPAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "EXPOWAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "EXCALAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "EXCPAAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "EXHELAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "BPLESAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "BPMALAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "LOWREAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMTRAAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMAMPAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMWEDAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMBUSAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMROCAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMFLIAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMPAAUD")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMDUNAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMRUIAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMMECAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMARMAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMBLZAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMPHAAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMTECAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMVOLAU")) || unk_0x6A7B0D91FD88D9EE(&Global_15821, "IMWASAU"))
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
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

var func_94()
{
	return Global_1315210;
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0x7C2F31E78C33DE0F() || unk_0x8EA3D5407E9F4AF0())
	{
		if (Global_1573336 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_69702)
	{
		if (Global_1573336 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_92())
	{
		iVar1 = 1;
	}
	if (unk_0x45028EC213071A32(&Global_15821))
	{
		if (unk_0x6A7B0D91FD88D9EE(&Global_15821, "CT_AUD"))
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
			unk_0xA73AE78D2491E6E1(&Global_15821, 7);
			while (!unk_0x657558590DD37F85(7))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xCCF06EFB1D1BBFE7(&Global_15821, 15);
			while (!unk_0x657558590DD37F85(15))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0xA73AE78D2491E6E1(&Global_15821, 6);
		while (!unk_0x657558590DD37F85(6))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		unk_0xCCF06EFB1D1BBFE7(&Global_15821, 14);
		while (!unk_0x657558590DD37F85(14))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0x2EAE4D4764ADC4B5();
	func_87();
}

void func_96()
{
	while (Global_14426 == 1 && unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_14426 = 0;
	if (unk_0x48B8265059381CD0(Global_2313, 20))
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 1);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2314, 1);
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
				unk_0x8B4DC5EBB154F21F(Global_15364.f_368, Global_15364.f_369);
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
			if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				Global_14612 = 0;
				unk_0x660E8E7836E95077(0);
				Global_15745 = 6;
			}
			if (unk_0x3ED8A07C6FA41E1B())
			{
				if (unk_0xC4AC39C3BC732D73())
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
		unk_0x660E8E7836E95077(0);
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
				unk_0x8B4DC5EBB154F21F(Global_15364.f_368, Global_15364.f_369);
				unk_0x4EDE34FBADD967A6(0);
				Global_15745 = 3;
				Global_14612 = 1;
				unk_0x5AE11BC36633DE4E(0);
				unk_0xEB79FECD9022AAF0(&Global_2313, 27);
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
						if (unk_0x3ED8A07C6FA41E1B())
						{
							if (unk_0xC4AC39C3BC732D73())
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
					unk_0x660E8E7836E95077(0);
					Global_15745 = 6;
					Global_14427 = 1;
					return;
				}
				Global_14443.f_1 = 9;
				func_8();
			}
			if (unk_0x63C468D583002D23())
			{
				uLocal_101 = unk_0xCB150A8B81012128();
			}
			else
			{
				iLocal_99 = unk_0x94E3E074F38DF86C();
			}
			while (Global_14443.f_1 != 9 && Global_14426 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14612 == 1)
				{
					if (unk_0x3ED8A07C6FA41E1B())
					{
						if (unk_0xC4AC39C3BC732D73())
						{
							Global_14612 = 0;
						}
					}
				}
				if (unk_0x63C468D583002D23())
				{
					iLocal_108 = unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x94E3E074F38DF86C();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_16761 = 1;
						Global_14426 = 1;
					}
				}
			}
			if (!unk_0x48B8265059381CD0(Global_2313, 11))
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
							unk_0xFBB765291A96B687();
						}
						else
						{
							unk_0x35ABFBDBACB79654(Global_15364.f_368, Global_15364.f_369);
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
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					if (Global_14443.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x21E7933CCC7B3724(&Global_2314, 21);
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
			if (unk_0x63C468D583002D23())
			{
				uLocal_101 = unk_0xCB150A8B81012128();
			}
			else
			{
				iLocal_99 = unk_0x94E3E074F38DF86C();
			}
			while (Global_14443.f_1 != 9 && Global_14426 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x63C468D583002D23())
				{
					iLocal_108 = unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x94E3E074F38DF86C();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_16761 = 1;
						Global_14426 = 1;
						unk_0x21E7933CCC7B3724(&Global_2314, 21);
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
			if (unk_0x63C468D583002D23())
			{
				uLocal_95 = unk_0xCB150A8B81012128();
				uLocal_98 = unk_0xCB150A8B81012128();
			}
			else
			{
				iLocal_93 = unk_0x94E3E074F38DF86C();
				iLocal_96 = unk_0x94E3E074F38DF86C();
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
			unk_0x2D28D5B324F77D2D(1);
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
	
	if (Global_2595533 == 0)
	{
		if (unk_0x48B8265059381CD0(Global_2313, 14) && Global_14443.f_1 < 4)
		{
			unk_0x4EA69F96033BA4FB(&Var0);
			if (Global_14396[Global_14388 /*3*/].f_1 == Var0.f_1)
			{
				Global_2595533 = 1;
			}
		}
	}
	if (func_44() && Global_2595533 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x94E3E074F38DF86C();
	}
	fVar3 = func_101((unk_0xBBDA792448DB5A89((unk_0x94E3E074F38DF86C() - iLocal_18)) / fParam12), 0f, 1f);
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
	unk_0xBB4FC17174B4A105(Global_14371);
	unk_0xE018C448439E147D(Global_14374, 0);
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
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
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
					unk_0x660E8E7836E95077(0);
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
		if (unk_0x55C74612BE548D78())
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
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
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

void func_106(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9C88EB7B70229335(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x9C88EB7B70229335(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0x9C88EB7B70229335(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0x9C88EB7B70229335(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0x9C88EB7B70229335(iParam11))
	{
		func_9(iParam11);
	}
	unk_0x44983883E630A945();
}

