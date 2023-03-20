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
	unk_0xBD9A2AF38E96A0ED();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB519E5386FBF69E5(Global_2284, 1))
		{
			if (!unk_0xB519E5386FBF69E5(Global_2283, 20))
			{
				if (unk_0xD6F17BA188A65E8F())
				{
					if (Global_14401)
					{
						func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14356)
						{
							func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x73817D396768E4C6(&Global_2284, 1);
				}
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_14578, 0))
		{
			if (!func_104())
			{
				if (!unk_0xB519E5386FBF69E5(Global_14578, 1))
				{
					unk_0x9956FB0E4B50ECB8(&Global_14578, 1);
					if (unk_0x00AAD79B42B3E036())
					{
						uLocal_106 = unk_0xC7F926248AF8587B();
					}
					else
					{
						iLocal_102 = unk_0x9D40BBF80D8F5E8A();
					}
				}
				if (unk_0x00AAD79B42B3E036())
				{
					iLocal_108 = unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), uLocal_106);
				}
				else
				{
					iLocal_103 = unk_0x9D40BBF80D8F5E8A();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_102(&Global_15166, &Global_15782, &Global_15702, Global_15715, Global_16697, Global_16698, 0))
					{
						Global_14578 = 0;
					}
				}
				else
				{
					Global_14578 = 0;
				}
			}
		}
		if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if (Global_15712 != 0)
			{
				if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) == 0)
				{
					func_101();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_97();
		}
		switch (Global_15712)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15718)
				{
					if (Global_15708 == 0)
					{
						func_95();
					}
					else
					{
						func_94();
						func_95();
					}
				}
				else if (Global_15708 == 0)
				{
					func_85();
				}
				else
				{
					func_94();
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
				if (Global_15718)
				{
					if (Global_15720)
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
	Global_15722 = 0;
	Global_14412 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15723 = 0;
	Global_15724 = 0;
	Global_15725 = 0;
	Global_15726 = 0;
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
	Global_15716 = 0;
	Global_15717 = 0;
	Global_15759 = 0;
	Global_15760 = 0;
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15764 = 0;
	Global_15767 = 0;
	Global_15766 = 0;
	Global_16729 = 0;
	Global_15769 = 0;
	if (Global_14413.f_1 == 10)
	{
	}
	else if (unk_0xB519E5386FBF69E5(Global_2283, 11))
	{
		func_3();
	}
	Global_15718 = 0;
	Global_15719 = 0;
	Global_15720 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16702 = 0;
	Global_16709 = 0;
	Global_16708 = 0;
	Global_16705 = 0;
	Global_16704 = 0;
	Global_16706 = 0;
	Global_16707 = 0;
	Global_15708 = 0;
	Global_15709 = 0;
	Global_15710 = 0;
	Global_15711 = 0;
	Global_15970 = 0;
	Global_16733 = 5000;
	Global_14396 = 0;
	unk_0x73817D396768E4C6(&Global_2283, 20);
	unk_0x73817D396768E4C6(&Global_2283, 24);
	unk_0x73817D396768E4C6(&Global_2284, 23);
	unk_0x73817D396768E4C6(&Global_2285, 0);
	unk_0x73817D396768E4C6(&Global_2284, 9);
	unk_0x73817D396768E4C6(&Global_2284, 31);
	unk_0x73817D396768E4C6(&Global_2284, 17);
	unk_0x73817D396768E4C6(&Global_2285, 5);
	Global_16696 = 0;
	Global_16695 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		Global_15712 = 4;
	}
	else
	{
		Global_15712 = 0;
		Global_16723 = 0;
		Global_16734 = unk_0x9D40BBF80D8F5E8A();
	}
}

void func_3()
{
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 11))
			{
				if (!Global_14356)
				{
					unk_0x6FD4DE4DAEA4ED56(unk_0xE7869D5D7816A9B6(), 0, 1);
				}
				if (Global_69236)
				{
					unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 244, 1);
					unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 243, 1);
					unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 242, 1);
				}
				unk_0x73817D396768E4C6(&Global_2283, 11);
			}
		}
	}
}

void func_4()
{
	Global_15722 = 0;
	Global_14412 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x317621AF5DB7A5FF(unk_0xE7869D5D7816A9B6()))
		{
			if (Global_15768 == 0)
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
	if (Global_16704 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16723 == 1)
			{
				unk_0xC232BBFC96440A8E(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16723 == 0)
		{
			unk_0xACA77D3E6C847C83();
			iLocal_31 = 0;
		}
	}
	else if (Global_16706 > 0)
	{
		iLocal_37 = unk_0x9D40BBF80D8F5E8A();
		if ((iLocal_37 - iLocal_36) > Global_16706)
		{
			unk_0xE8273F81C4CD68DD();
			Global_16704 = 0;
		}
	}
	if (Global_16723 == 0)
	{
		if (!unk_0xF0A330A29F97AA7E())
		{
			Global_15712 = 6;
		}
	}
}

void func_6()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD6F17BA188A65E8F())
	{
		if (!unk_0xB519E5386FBF69E5(Global_2283, 11))
		{
			if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
			{
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					if (Global_69236 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
			{
				if (Global_69236 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_69236 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16723 == 1)
		{
			if (Global_16724 == 1)
			{
				unk_0xC232BBFC96440A8E(1);
				iLocal_31 = 1;
				Global_16724 = 0;
			}
		}
	}
	else if (Global_16723 == 0)
	{
		if (Global_16724 == 1)
		{
			unk_0xACA77D3E6C847C83();
			iLocal_31 = 0;
			Global_16724 = 0;
		}
	}
	if (Global_15765 == 0)
	{
		if (!Global_15725)
		{
			if (!unk_0xB519E5386FBF69E5(Global_2284, 31))
			{
				if (!unk_0xB519E5386FBF69E5(Global_2284, 27))
				{
					if (func_49())
					{
						if (Global_14413.f_1 > 6)
						{
							unk_0x9956FB0E4B50ECB8(&Global_2284, 24);
							unk_0x9956FB0E4B50ECB8(&Global_2284, 27);
							unk_0x73817D396768E4C6(&Global_2284, 26);
							unk_0x73817D396768E4C6(&Global_2284, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0xD6F17BA188A65E8F() == 0 && Global_15725 == 0)
	{
		if (Global_15765 == 1)
		{
			unk_0x9956FB0E4B50ECB8(&Global_2284, 23);
		}
		else
		{
			unk_0x73817D396768E4C6(&Global_2284, 23);
		}
		if (Global_15769)
		{
			if (Global_15765 == 0)
			{
				Global_15331 = { Global_15770 };
				Global_15788 = { Global_15776 };
				Global_15722 = 0;
				Global_16729 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15767)
		{
			while (Global_15765 == 1)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14413.f_1 < 6)
				{
					Global_15765 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15767)
						{
							iLocal_30 = 1;
							Global_16727 = 1;
							func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15854, &(Global_99155.f_32499[Global_1598 /*29*/].f_7), &(Global_99155.f_32499[Global_1598 /*29*/].f_3), &(Global_99155.f_32499[Global_1598 /*29*/].f_3), 0);
							func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14401)
							{
								func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
								func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
								func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16725 = 1;
							if (Global_99155.f_32499[Global_1598 /*29*/].f_24[Global_14413] == 0)
							{
								func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15854, "CELL_300", &(Global_117[Global_1598 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15854, &(Global_99155.f_32499[Global_1598 /*29*/].f_7), &(Global_99155.f_32499[Global_1598 /*29*/].f_3), &(Global_99155.f_32499[Global_1598 /*29*/].f_3), 0);
								func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14401)
							{
								func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0x73817D396768E4C6(&Global_2283, 17);
						}
					}
					if (func_45(2, Global_14382, 0))
					{
						func_43();
						Global_14339 = 0.19f;
						Global_15765 = 0;
						func_41();
						if (Global_15767)
						{
							Global_15331 = { Global_15848 };
							Global_16729 = 5;
						}
						else if (Global_15710 > 0)
						{
							Global_15970 = 1;
							Global_15712 = 0;
							Global_16733 = 0;
							if (unk_0xB519E5386FBF69E5(Global_2284, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16696 + 1)
								{
									uLocal_111[iVar0] = func_40(&(Global_15971[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_40(&(Global_16333[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16696, &Global_15001, Global_1598, &Global_15788, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_15710 == 2)
							{
								func_22(&Global_15001, Global_1598, &Global_15788, &(Global_15866[0 /*6*/]), &(Global_15918[0 /*6*/]), &(Global_15866[1 /*6*/]), &(Global_15918[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16729 = 1;
							Global_16725 = 0;
							Global_16727 = 0;
							Global_15722 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15331 = { Global_15806 };
							Global_16729 = 1;
						}
						Global_16725 = 0;
						Global_16727 = 0;
						Global_15722 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14383, 0) || unk_0xB519E5386FBF69E5(Global_2283, 24))
					{
						func_43();
						Global_14339 = 0.19f;
						Global_15765 = 0;
						func_41();
						if (Global_15767)
						{
							Global_15331 = { Global_15842 };
							Global_16729 = 4;
						}
						else if (Global_15710 > 0)
						{
							Global_15970 = 1;
							Global_15712 = 0;
							Global_16733 = 0;
							if (unk_0xB519E5386FBF69E5(Global_2284, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16695 + 1)
								{
									uLocal_173[iVar1] = func_40(&(Global_16152[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_40(&(Global_16514[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16695, &Global_15001, Global_1598, &Global_15788, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_15710 == 2)
							{
								func_22(&Global_15001, Global_1598, &Global_15788, &(Global_15879[0 /*6*/]), &(Global_15931[0 /*6*/]), &(Global_15879[1 /*6*/]), &(Global_15931[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16729 = 2;
							Global_16725 = 0;
							Global_16727 = 0;
							Global_15722 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15331 = { Global_15812 };
							Global_16729 = 2;
						}
						Global_16725 = 0;
						Global_16727 = 0;
						Global_15722 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14385, 0))
					{
						if (Global_15767)
						{
							Global_14339 = 0.19f;
							Global_15765 = 0;
							func_41();
							func_43();
							Global_15331 = { Global_15836 };
							Global_16729 = 3;
							Global_16725 = 0;
							Global_16727 = 0;
							Global_15722 = 0;
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
			while (Global_15765)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14413.f_1 < 6)
				{
					Global_15765 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14394, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14401)
						{
							func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x73817D396768E4C6(&Global_2283, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14382, 0))
					{
						func_43();
						Global_15765 = 0;
						func_41();
						unk_0xA4F3B84032D46C13(Global_14394, "GET_CURRENT_SELECTION");
						uLocal_236 = unk_0x96E794F94B35432F();
						while (!unk_0x4B2BEE3B1540A0A3(uLocal_236))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iVar2 = unk_0x9FF96E17DE53C966(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_15331 = { Global_15842 };
								Global_16729 = 4;
								break;
							
							case 1:
								Global_15331 = { Global_15836 };
								Global_16729 = 3;
								break;
							
							case 2:
								Global_15331 = { Global_15848 };
								Global_16729 = 5;
								break;
						}
						Global_16725 = 0;
						Global_16727 = 0;
						Global_15722 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14383, 0))
					{
						Global_15765 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15713 == 0)
		{
			unk_0xDA09A6E60FE9645E(0);
			unk_0xC1B1E9A034A63A62(0);
			while (unk_0x83666F9FB8FEBD4B() < 900 && Global_14413.f_1 == 9)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_15712 = 6;
		}
		unk_0xCC18B241D266EF14(-1, "Hang_Up", &Global_14402, 1);
		func_13();
		Global_14413.f_1 = Global_14415;
		func_8();
	}
	else if (Global_14571 == 0)
	{
		if (func_45(2, Global_14381, 0))
		{
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
				{
					if (unk_0xB519E5386FBF69E5(Global_2283, 20))
					{
					}
					else
					{
						Global_14391 = 1;
						func_41();
						unk_0xDA09A6E60FE9645E(0);
						Global_15761 = 1;
						Global_15762 = 1;
						Global_15712 = 6;
						func_13();
						Global_14413.f_1 = Global_14415;
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
	
	if (Global_14396 == 1)
	{
		return;
	}
	if (Global_14413.f_1 < 4)
	{
		return;
	}
	while (!unk_0x4A4851D44CDF03C0(Global_14394))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14413.f_1)
	{
		case 6:
			func_46(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2888);
			if (Global_2888 == 1)
			{
				func_46(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_46(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x73817D396768E4C6(&Global_2283, 17);
			}
			else if (Global_69236)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x73817D396768E4C6(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
			if (unk_0xB519E5386FBF69E5(Global_2283, 20))
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_10();
				func_46(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_99155.f_12665[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
					unk_0x43C93E686A1E92C5(4);
					unk_0x43C93E686A1E92C5(0);
					unk_0x43C93E686A1E92C5(2);
					unk_0x33D37B75FC2BCC8C("CELL_CONDFON");
					unk_0x63E8D6007C32E426(&Global_15727);
					unk_0x057886C01DDC535D();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xFF141057ED7B4C73();
				}
				else if (Global_99155.f_32499[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_99155.f_32499[Global_1598 /*29*/].f_3), &(Global_99155.f_32499[Global_1598 /*29*/].f_7), "CELL_217", &(Global_99155.f_32499[Global_1598 /*29*/].f_3), 0);
				}
				func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_46(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_99155.f_12665[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15725)
				{
					unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
					unk_0x43C93E686A1E92C5(4);
					unk_0x43C93E686A1E92C5(0);
					unk_0x43C93E686A1E92C5(2);
					unk_0x33D37B75FC2BCC8C("CELL_CONDFON");
					unk_0x63E8D6007C32E426(&Global_15727);
					unk_0x057886C01DDC535D();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xFF141057ED7B4C73();
				}
				else
				{
					if (Global_15970)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_99155.f_32499[Global_1598 /*29*/].f_24[Global_14413] == 0)
					{
						func_46(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_99155.f_32499[Global_1598 /*29*/].f_3), &(Global_99155.f_32499[Global_1598 /*29*/].f_7), &Var0, &(Global_99155.f_32499[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x33D37B75FC2BCC8C(sParam0);
	unk_0x057886C01DDC535D();
}

void func_10()
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (Global_14413 == 0)
		{
			switch (Global_99155.f_12665[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 0);
					break;
				
				case 2:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 1);
					break;
				
				case 3:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 2);
					break;
				
				case 4:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 3);
					break;
				
				case 5:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 4);
					break;
				
				case 6:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 5);
					break;
				
				case 7:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_99155.f_12665[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 6);
					break;
				
				case 2:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 0);
					break;
				
				case 3:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 1);
					break;
				
				case 4:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 2);
					break;
				
				case 5:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 3);
					break;
				
				case 6:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 4);
					break;
				
				case 7:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_99155.f_12665[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 5);
					break;
				
				case 2:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 6);
					break;
				
				case 3:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 1);
					break;
				
				case 4:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 0);
					break;
				
				case 5:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 2);
					break;
				
				case 6:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 3);
					break;
				
				case 7:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2558796)
			{
				case 1:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 0);
					break;
				
				case 2:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 1);
					break;
				
				case 3:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 2);
					break;
				
				case 4:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 3);
					break;
				
				case 5:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 4);
					break;
				
				case 6:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 5);
					break;
				
				case 7:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 6);
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xB519E5386FBF69E5(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(iVar2);
								unk_0xFF141057ED7B4C73();
							}
							if (Global_2440970)
							{
								if (iVar1 == 14)
								{
									func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_99155.f_12755[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_99155.f_12755[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_99155.f_12755[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69236)
								{
									iVar4 = 0;
									iVar4 = Global_2557324;
									func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36674;
											break;
										
										case 1:
											iVar5 = Global_36675;
											break;
										
										case 2:
											iVar5 = Global_36676;
											break;
										
										default:
											break;
									}
									func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(Global_2289);
								unk_0xFF141057ED7B4C73();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB519E5386FBF69E5(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(iVar6);
								unk_0xFF141057ED7B4C73();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB519E5386FBF69E5(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(iVar7);
								unk_0xFF141057ED7B4C73();
							}
							else if (iVar1 == 8)
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(42);
								unk_0xFF141057ED7B4C73();
							}
							else if ((iVar1 == 23 && unk_0x04E7E853E31F41A3(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB519E5386FBF69E5(Global_2284, 6))
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(42);
								unk_0xFF141057ED7B4C73();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1606484.f_1;
								func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
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
	return Global_35619 == iParam0;
}

void func_13()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return;
	}
	switch (Global_14415)
	{
		case 5:
			Global_14415 = 6;
			break;
		
		case 6:
			if (unk_0xB519E5386FBF69E5(Global_2284, 5))
			{
				Global_14415 = 6;
				unk_0x73817D396768E4C6(&Global_2284, 5);
			}
			else
			{
				Global_14415 = 3;
			}
			break;
		
		case 7:
			Global_14415 = 3;
			break;
		
		case 3:
			if (unk_0xB519E5386FBF69E5(Global_2284, 5))
			{
				Global_14415 = 6;
				unk_0x73817D396768E4C6(&Global_2284, 5);
			}
			else
			{
				Global_14415 = 3;
			}
			break;
		
		default:
			Global_14415 = 3;
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
		if (func_45(2, Global_14389, 0) || unk_0x958B4351DD28B142(2, 181))
		{
			func_18();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_45(2, Global_14390, 0) || unk_0x958B4351DD28B142(2, 180))
		{
			func_15();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_15()
{
	func_46(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xCC18B241D266EF14(-1, "Menu_Navigate", &Global_14402, 1);
	func_16();
}

void func_16()
{
	if (func_17())
	{
		if (Global_14576 == 0)
		{
			unk_0xEDC530BAFD80E449(2);
		}
		else
		{
			unk_0xEDC530BAFD80E449(1);
		}
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69236)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x5B93518F6779B7F5();
	iVar1 = unk_0x08EE17D4722097C7(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2558798 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	func_46(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xCC18B241D266EF14(-1, "Menu_Navigate", &Global_14402, 1);
	func_19();
}

void func_19()
{
	if (func_17())
	{
		if (Global_14576 == 0)
		{
			unk_0xEDC530BAFD80E449(1);
		}
		else
		{
			unk_0xEDC530BAFD80E449(2);
		}
	}
}

void func_20(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xF6917DE0E003509D(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xF6917DE0E003509D(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xF6917DE0E003509D(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xF6917DE0E003509D(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xFF141057ED7B4C73();
}

void func_21()
{
	if (unk_0x4A4851D44CDF03C0(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xB519E5386FBF69E5(Global_2283, 20))
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
		}
		else
		{
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
			if (unk_0xB519E5386FBF69E5(Global_2283, 20))
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
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
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_35(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam2 > Global_15714)
			{
				if (bParam3 == 0)
				{
					unk_0xDA09A6E60FE9645E(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
				}
				else
				{
					func_101();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_33();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16708 = Global_16709;
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15331.f_370 = Global_16701;
		Global_15708 = Global_15709;
		Global_15710 = Global_15711;
		if (Global_15970 == 0)
		{
			Global_15866[0 /*6*/] = { Global_15892[0 /*6*/] };
			Global_15866[1 /*6*/] = { Global_15892[1 /*6*/] };
			Global_15918[0 /*6*/] = { Global_15944[0 /*6*/] };
			Global_15918[1 /*6*/] = { Global_15944[1 /*6*/] };
			Global_15879[0 /*6*/] = { Global_15905[0 /*6*/] };
			Global_15879[1 /*6*/] = { Global_15905[1 /*6*/] };
			Global_15931[0 /*6*/] = { Global_15957[0 /*6*/] };
			Global_15931[1 /*6*/] = { Global_15957[1 /*6*/] };
		}
		if (Global_15718)
		{
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam3)
			{
				func_27();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (Global_15970 == 0)
					{
						if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
						{
							return 0;
						}
						if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
						{
							return 0;
						}
						if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
						{
							return 0;
						}
						if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
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
				switch (Global_14413.f_1)
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
			Global_15722 = bParam3;
		}
		Global_15714 = iParam2;
		if (Global_15708 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15708)
			{
				StringCopy(&(Global_15331.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15331.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14578 = 0;
		func_48();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15714 || iParam2 == Global_15714)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_101();
	}
	return 0;
}

void func_24()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_25()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_28();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_28()
{
	func_29();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_29()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_32(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_31(unk_0xE7869D5D7816A9B6());
			if (func_30(iVar0) && (!func_12(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_30(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(uParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
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
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
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
	Global_15709 = uParam0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
}

void func_37()
{
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_15726 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
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
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xCC18B241D266EF14(-1, "Menu_Accept", &Global_14402, 1);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		unk_0xEDC530BAFD80E449(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				if (!Global_14356)
				{
					if (!unk_0xB519E5386FBF69E5(Global_2283, 11))
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
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if (Global_15712 != 2)
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
		if (unk_0x121E5731B289F6E9(unk_0xE7869D5D7816A9B6(), 0))
		{
			return 0;
		}
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (!unk_0x88D27563692FA371())
			{
				if (unk_0xA7D2A868253353BE(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x43F528FB3D5E9B0F(unk_0xE7869D5D7816A9B6()) || unk_0x317621AF5DB7A5FF(unk_0xE7869D5D7816A9B6())) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x9E8DC7839B6000A3(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
		if (Global_98203)
		{
			return 0;
		}
	}
	if (Global_69236)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x5B93518F6779B7F5();
	iVar1 = unk_0x08EE17D4722097C7(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x88D27563692FA371()))
	{
		iVar2 = 1;
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				uVar3 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
				if ((((((((unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(uVar3)) || unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(uVar3))) || unk_0x7BB0AC45FF0A3A28(unk_0x1B2DC87EFB36DF80(uVar3))) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("seashark")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("seashark2")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("rhino")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("submersible")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("submersible2")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2558798 || iVar2 == 1)
	{
		if (unk_0xFF6891E21E7FC193(joaat("apptrackify")) > 0 || Global_99155.f_12665.f_89)
		{
			if (unk_0xFF6891E21E7FC193(joaat("michael2")) > 0)
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
	if (unk_0x958B4351DD28B142(iParam0, uParam1) || (iParam2 == 1 && unk_0x28BB6250B86A5CA5(iParam0, iParam1)))
	{
		if (unk_0xA78EA29AC2FFBADE())
		{
			if (unk_0x4C0203C9C5CF4108() == 0 || (unk_0x29C4AA4F29B1E539() && unk_0x7EDB1AFBE755EC7A(2)))
			{
				return 0;
			}
		}
		if (unk_0xA57007F9A665F322() || unk_0xA42A6C736BEA9778())
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
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xFF141057ED7B4C73();
}

void func_47()
{
	if (func_44())
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				if (!Global_14356)
				{
					if (unk_0xB519E5386FBF69E5(Global_2283, 11))
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

int func_49()
{
	if (unk_0x00AAD79B42B3E036())
	{
		iLocal_108 = unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), uLocal_107);
	}
	else
	{
		iLocal_105 = unk_0x9D40BBF80D8F5E8A();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_50(int iParam0)
{
	if (Global_14571)
	{
		func_51(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_25())
	{
		Global_14413.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_52(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	if (func_45(2, Global_14390, 0))
	{
		if (Global_16723 == 0)
		{
			if (Global_15718)
			{
				if (unk_0xB519E5386FBF69E5(Global_2284, 17))
				{
				}
				else
				{
					unk_0x1E286EB9DD72EB55();
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
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (func_55() && unk_0x121E5731B289F6E9(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && iVar1 == 0)
		{
			iVar2 = unk_0x83058EDD668C4856(unk_0xE7869D5D7816A9B6(), 0);
			if (Global_69236)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xAD7645F387EFDC15(unk_0xE7869D5D7816A9B6()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xAD7645F387EFDC15(unk_0xE7869D5D7816A9B6()))
			{
				iVar0 = 1;
			}
			if (!Global_14356)
			{
				if (Global_1598 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
						{
							if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
							{
							}
							else
							{
								if (Global_69236)
								{
									unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 244, 0);
									unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 243, 0);
									unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 242, 0);
								}
								unk_0x9956FB0E4B50ECB8(&Global_2283, 11);
								unk_0x6FD4DE4DAEA4ED56(unk_0xE7869D5D7816A9B6(), 1, 1);
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
	
	uVar0 = unk_0x5B93518F6779B7F5();
	iVar1 = unk_0x08EE17D4722097C7(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_56()
{
	if (Global_69236 == 0)
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
		Global_16725 = 1;
		if (Global_99155.f_32499[Global_1598 /*29*/].f_24[Global_14413] == 0)
		{
			func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15854, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_15854, &(Global_99155.f_32499[Global_1598 /*29*/].f_7), &(Global_99155.f_32499[Global_1598 /*29*/].f_3), &(Global_99155.f_32499[Global_1598 /*29*/].f_3), 0);
			func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14339 = 0.2f;
		if (Global_14401)
		{
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x73817D396768E4C6(&Global_2283, 17);
	}
	if (Global_15765 == 1)
	{
		if (Global_14413.f_1 < 6)
		{
			Global_15765 = 0;
		}
		else
		{
			if (Global_14353 == 0)
			{
				if (func_45(2, Global_14382, 0))
				{
					Global_14339 = 0.19f;
					Global_15765 = 0;
					func_41();
					Global_16730 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14383, 0))
			{
				Global_14339 = 0.19f;
				Global_15765 = 0;
				func_41();
				Global_16730 = 2;
			}
		}
	}
	else if (Global_16730 == 2)
	{
		if (Global_15713 == 0)
		{
			unk_0xDA09A6E60FE9645E(0);
			Global_15712 = 6;
		}
		func_13();
		Global_14413.f_1 = Global_14415;
		func_8();
	}
	else if (!unk_0xD6F17BA188A65E8F())
	{
		iLocal_32 = 0;
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		unk_0xCC18B241D266EF14(-1, "Hang_Up", &Global_14402, 1);
		func_13();
		Global_14413.f_1 = Global_14415;
		func_8();
	}
}

void func_57()
{
	if (Global_14579 == 1)
	{
		if (unk_0xD6F17BA188A65E8F())
		{
			if (unk_0xD770D92195D99971())
			{
				Global_14579 = 0;
			}
		}
		if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			Global_14579 = 0;
			unk_0xDA09A6E60FE9645E(0);
			Global_15712 = 6;
		}
	}
	if (unk_0xC9D9444186B5A374() > iLocal_35)
	{
		if (Global_14579 == 1)
		{
			Global_14579 = 0;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() < Global_16733 || Global_14579 == 1)
	{
		if (func_45(2, Global_14381, 0))
		{
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
				{
					if (unk_0xB519E5386FBF69E5(Global_2283, 20))
					{
					}
					else
					{
						Global_14391 = 1;
						func_41();
						unk_0xDA09A6E60FE9645E(0);
						Global_15761 = 1;
						Global_15712 = 6;
						unk_0x73817D396768E4C6(&Global_2283, 27);
						if (!Global_15723)
						{
							unk_0x9956FB0E4B50ECB8(&Global_2284, 5);
						}
						func_13();
						Global_14413.f_1 = Global_14415;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 27);
		Global_15712 = 4;
		Global_15769 = 0;
		func_60();
		func_59();
		if (!Global_15725)
		{
			if (Global_16729 == 0)
			{
				if (!unk_0xB519E5386FBF69E5(Global_2285, 5))
				{
					unk_0xE8273F81C4CD68DD();
				}
				unk_0x73817D396768E4C6(&Global_2285, 5);
			}
			else
			{
				unk_0xEB54538380C56F96(Global_15331.f_368, Global_15331.f_369);
			}
		}
		func_58();
	}
}

void func_58()
{
	if (unk_0x00AAD79B42B3E036())
	{
		uLocal_107 = unk_0xC7F926248AF8587B();
	}
	else
	{
		iLocal_104 = unk_0x9D40BBF80D8F5E8A();
	}
}

void func_59()
{
	if (Global_15725)
	{
		if (Global_69236)
		{
			if (unk_0x4A4851D44CDF03C0(Global_14394))
			{
				if (!unk_0xA78EA29AC2FFBADE())
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_1632), 15);
				}
			}
		}
	}
}

void func_60()
{
	if (unk_0x4A4851D44CDF03C0(Global_14394))
	{
		if (!Global_15720)
		{
			func_105(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_105(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
			if (unk_0xB519E5386FBF69E5(Global_2283, 20))
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_105(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15725)
			{
				unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
				unk_0x43C93E686A1E92C5(4);
				unk_0x43C93E686A1E92C5(0);
				unk_0x43C93E686A1E92C5(2);
				unk_0x33D37B75FC2BCC8C("CELL_CONDFON");
				unk_0x63E8D6007C32E426(&Global_15727);
				unk_0x057886C01DDC535D();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0xFF141057ED7B4C73();
			}
			else if (Global_99155.f_32499[Global_1598 /*29*/].f_24[Global_14413] == 0)
			{
				func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_105(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_99155.f_32499[Global_1598 /*29*/].f_3), &(Global_99155.f_32499[Global_1598 /*29*/].f_7), "CELL_219", &(Global_99155.f_32499[Global_1598 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()
{
	if (unk_0x00AAD79B42B3E036())
	{
		iLocal_109 = unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), uLocal_95);
		iLocal_110 = unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), uLocal_98);
	}
	else
	{
		iLocal_94 = unk_0x9D40BBF80D8F5E8A();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = unk_0x9D40BBF80D8F5E8A();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_15759 == 1)
	{
		if (func_44())
		{
			if (iLocal_109 > 4000)
			{
				if (unk_0xB519E5386FBF69E5(Global_2283, 14))
				{
					if (unk_0x4A4851D44CDF03C0(Global_14394))
					{
						func_41();
						Global_14412 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
			{
				if (unk_0x4A4851D44CDF03C0(Global_14394))
				{
					func_41();
					Global_14412 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_14412 = 3;
	}
	if (Global_14412 == 2)
	{
		iLocal_30 = 0;
		Global_15712 = 4;
		func_54();
		Global_15769 = 0;
		func_60();
		func_59();
		if (!Global_15725)
		{
			if (Global_16729 == 0)
			{
				unk_0xE8273F81C4CD68DD();
			}
			else
			{
				unk_0xEB54538380C56F96(Global_15331.f_368, Global_15331.f_369);
			}
		}
		func_58();
		Global_16728 = 0;
	}
	if (Global_15759 == 0)
	{
		if (Global_14412 == 3)
		{
			if (Global_15725)
			{
				func_63();
				func_50(0);
			}
			else
			{
				func_62();
				Global_16728 = 1;
				unk_0xDA09A6E60FE9645E(0);
				Global_15712 = 6;
				func_13();
				Global_14413.f_1 = Global_14415;
				func_8();
			}
		}
	}
	else if (Global_14412 == 3)
	{
	}
}

void func_62()
{
}

void func_63()
{
	Global_2462500.f_2 = 1;
	Global_2462500.f_38 = 1;
	if (unk_0xC8FFCE1611C4F73B())
	{
		if (unk_0x15A631E700695B1E())
		{
			while (unk_0xBCCEC967F75E724A())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xB466F85AB56CABD1();
			Global_2462500 = 0;
			Global_2462500.f_2 = 0;
		}
		else if (func_66(Global_2462500.f_20))
		{
			if (unk_0x74320D9FF94A9E7E(&(Global_2462500.f_20)))
			{
				if (!unk_0x7F1AB0DEA02A53B8(&(Global_2462500.f_20)))
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
	if (Global_2462500.f_37)
	{
		func_50(0);
	}
	Global_2462500.f_37 = 0;
	Global_2462500.f_3 = 0;
}

void func_64()
{
	Global_2462500.f_1 = 0;
	Global_2462500 = 0;
	Global_2462500.f_2 = 0;
	Global_2462500.f_33 = -1;
	Global_2462500.f_34 = -1;
	StringCopy(&(Global_2462500.f_4), "", 64);
	StringCopy(&(Global_2462500.f_39[0 /*16*/]), "", 64);
	Global_2462500.f_38 = 0;
	Global_2462500.f_56 = 0;
	Global_2462500.f_57 = 0;
	Global_2462500.f_58 = -2;
	Global_2462500.f_3 = 0;
	func_65(&(Global_2462500.f_20));
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
	return unk_0xAE3F9C24A2DC8030(&uParam0, 13);
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
	while (iLocal_92 < Global_15708)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_15331.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_14580[iVar2 /*6*/] = { Global_15331.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_14580[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14580[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_14580[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0x33FD8E2E139F4FAC(&cLocal_38))
			{
				StringCopy(&cLocal_50, unk_0xC083A2D1EE1A4BFF(&cLocal_38), 64);
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
				if (unk_0x33FD8E2E139F4FAC(&(Global_14580[iVar2 /*6*/])))
				{
					if (unk_0x04E7E853E31F41A3(&(Global_14580[iVar2 /*6*/]), &(Global_15331.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x32A58043AAFDFBD5(iVar3, &cLocal_50, &(Global_14580[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x33FD8E2E139F4FAC(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xC083A2D1EE1A4BFF(&cLocal_44), 64);
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
				unk_0x32A58043AAFDFBD5(iVar3, &cLocal_50, &(Global_15331.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14580[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14580[iVar2 /*6*/]), "END", 24);
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
	if (Global_15718 == 0)
	{
		unk_0x9B2B29DC3F04FEBF(uLocal_83);
		unk_0xB902E3B8BA77ED21(uLocal_84);
		unk_0x63CC0E8436B9BA82(Global_15331.f_368, Global_15331.f_369, Global_15331.f_370, uLocal_82);
		Global_15712 = 4;
	}
}

int func_68(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0x04E7E853E31F41A3(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0x04E7E853E31F41A3(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0x04E7E853E31F41A3(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0x04E7E853E31F41A3(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_73), 2, 3);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_73), 1, 2);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_73), 0, 1);
	if (unk_0x04E7E853E31F41A3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(uVar0);
}

int func_79(var uParam0)
{
	if (unk_0x04E7E853E31F41A3(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x04E7E853E31F41A3(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(uVar0);
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(uVar0);
}

void func_82()
{
	cLocal_85 = { Global_15331.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0x33FD8E2E139F4FAC(&cLocal_85))
	{
		sLocal_91 = unk_0xC083A2D1EE1A4BFF(&cLocal_85);
		if (unk_0x356491C12DAD1A37(sLocal_91))
		{
		}
	}
}

void func_83()
{
	cLocal_73 = { Global_15331.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0x33FD8E2E139F4FAC(&cLocal_73))
	{
		sLocal_79 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_73), 0, 1);
		if (unk_0x356491C12DAD1A37(sLocal_79))
		{
		}
		sLocal_80 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_73), 1, 2);
		if (unk_0x356491C12DAD1A37(sLocal_80))
		{
		}
		sLocal_81 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_73), 2, 3);
		if (unk_0x356491C12DAD1A37(sLocal_81))
		{
		}
	}
}

void func_84()
{
	cLocal_66 = { Global_15331.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0x33FD8E2E139F4FAC(&cLocal_66))
	{
		sLocal_72 = unk_0xC083A2D1EE1A4BFF(&cLocal_66);
		if (unk_0x356491C12DAD1A37(sLocal_72))
		{
		}
	}
}

void func_85()
{
	func_86();
	unk_0x9B2B29DC3F04FEBF(uLocal_83);
	unk_0xB902E3B8BA77ED21(uLocal_84);
	if (Global_16704)
	{
		unk_0xA266636E701A5733(Global_15331.f_368, Global_15331.f_369, Global_15331.f_370, uLocal_82);
		iLocal_36 = unk_0x9D40BBF80D8F5E8A();
	}
	else
	{
		unk_0x63CC0E8436B9BA82(Global_15331.f_368, Global_15331.f_369, Global_15331.f_370, uLocal_82);
	}
	Global_15712 = 4;
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
	if (unk_0xB3E11FB4CABD7067(&Global_15788))
	{
		if (unk_0x04E7E853E31F41A3(&Global_15788, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0x7ECD3D8283875DD1() || unk_0xFD563D1BF81A2CB8())
		{
			if (Global_1572930 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_69236 || func_93())
		{
			if (Global_1572930 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_91())
		{
			iVar14 = 1;
		}
		if (((Global_15714 < 5 || Global_15714 == 10) || Global_15714 == 12) || Global_15714 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0x36A3D6FBED10EF81(&Global_15788, 7);
				while (!unk_0x4D15A085E079AB18(7))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			else
			{
				unk_0xDE372C28E5D47E7C(&Global_15788, 14);
				while (!unk_0x4D15A085E079AB18(14))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0x36A3D6FBED10EF81(&Global_15788, 6);
			while (!unk_0x4D15A085E079AB18(6))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xDE372C28E5D47E7C(&Global_15788, 13);
			while (!unk_0x4D15A085E079AB18(13))
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
	unk_0xBEFEFC8DD16895B0();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_16722 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_15331 };
		StringConCat(&cLocal_44, "A", 24);
		Global_14580[iVar2 /*6*/] = { Global_15331 };
		StringConCat(&(Global_14580[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14580[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_14580[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0x33FD8E2E139F4FAC(&cLocal_38))
		{
			StringCopy(&cLocal_50, unk_0xC083A2D1EE1A4BFF(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_2558778 == 0)
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
			if (unk_0x33FD8E2E139F4FAC(&(Global_14580[iVar2 /*6*/])))
			{
				if (Global_16702 == 0 && Global_16708 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x32A58043AAFDFBD5(iVar3, &cLocal_50, &(Global_14580[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x04E7E853E31F41A3(&(Global_14580[iVar2 /*6*/]), &Global_16710))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x32A58043AAFDFBD5(iVar3, &cLocal_50, &(Global_14580[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16722 = iVar2;
					if (Global_16708 == 1)
					{
						Global_16708 = 0;
					}
				}
			}
			else if (Global_16708 == 0 && Global_16702 == 0)
			{
				unk_0x32A58043AAFDFBD5(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x33FD8E2E139F4FAC(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xC083A2D1EE1A4BFF(&cLocal_44), 64);
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
				unk_0x32A58043AAFDFBD5(iVar3, &cLocal_50, &Global_15331, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
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
		if (Global_15001[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0xD51CFE69539DB6D8(Global_15001[iVar0 /*10*/]) || Global_15001[iVar0 /*10*/] == 0)
			{
				unk_0x3F191086ED021494(iVar0, Global_15001[iVar0 /*10*/], &(Global_15001[iVar0 /*10*/].f_1));
			}
			if (Global_15001.f_161 == iVar0)
			{
				if ((Global_15001.f_162 != 0f && Global_15001.f_162.f_1 != 0f) && Global_15001.f_162.f_2 != 0f)
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0xCB7BF79D563C53AE(Global_15001.f_161, Global_15001.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_2558778 == 1)
	{
		Global_2558778 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_2558597[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0xD51CFE69539DB6D8(Global_2558597[iVar0 /*9*/]) || Global_2558597[iVar0 /*9*/] == 0)
				{
					unk_0x3F191086ED021494(Global_2558597[iVar0 /*9*/].f_8, Global_2558597[iVar0 /*9*/], &(Global_2558597[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()
{
	cLocal_85 = { Global_15331 };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0x33FD8E2E139F4FAC(&cLocal_85))
	{
		sLocal_91 = unk_0xC083A2D1EE1A4BFF(&cLocal_85);
		if (unk_0x356491C12DAD1A37(sLocal_91))
		{
		}
	}
}

void func_89()
{
	cLocal_73 = { Global_15331 };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0x33FD8E2E139F4FAC(&cLocal_73))
	{
		sLocal_79 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_73), 0, 1);
		if (unk_0x356491C12DAD1A37(sLocal_79))
		{
		}
		sLocal_80 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_73), 1, 2);
		if (unk_0x356491C12DAD1A37(sLocal_80))
		{
		}
		sLocal_81 = unk_0xDB77B302A1585346(unk_0xC083A2D1EE1A4BFF(&cLocal_73), 2, 3);
		if (unk_0x356491C12DAD1A37(sLocal_81))
		{
		}
	}
}

void func_90()
{
	cLocal_66 = { Global_15331 };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0x33FD8E2E139F4FAC(&cLocal_66))
	{
		sLocal_72 = unk_0xC083A2D1EE1A4BFF(&cLocal_66);
		if (unk_0x356491C12DAD1A37(sLocal_72))
		{
		}
	}
}

int func_91()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_92(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_92(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_92(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

var func_93()
{
	return Global_1315884;
}

void func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0x7ECD3D8283875DD1() || unk_0xFD563D1BF81A2CB8())
	{
		if (Global_1572930 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_69236)
	{
		if (Global_1572930 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_91())
	{
		iVar1 = 1;
	}
	if (unk_0xB3E11FB4CABD7067(&Global_15788))
	{
		if (unk_0x04E7E853E31F41A3(&Global_15788, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (((Global_15714 < 5 || Global_15714 == 10) || Global_15714 == 12) || Global_15714 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0x36A3D6FBED10EF81(&Global_15788, 7);
			while (!unk_0x4D15A085E079AB18(7))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xDE372C28E5D47E7C(&Global_15788, 14);
			while (!unk_0x4D15A085E079AB18(14))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0x36A3D6FBED10EF81(&Global_15788, 6);
		while (!unk_0x4D15A085E079AB18(6))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		unk_0xDE372C28E5D47E7C(&Global_15788, 13);
		while (!unk_0x4D15A085E079AB18(13))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0xBEFEFC8DD16895B0();
	func_87();
}

void func_95()
{
	while (Global_14396 == 1 && unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_14396 = 0;
	if (unk_0xB519E5386FBF69E5(Global_2283, 20))
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 1);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2284, 1);
	}
	Global_14397 = 0;
	if (Global_15708 == 0)
	{
		if (!Global_15725)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_14579 = 0;
	if (Global_15722)
	{
		if (Global_16729 == 0)
		{
			if (Global_15725 == 0)
			{
				iLocal_34 = 5000;
				unk_0x8FBE4F4BB035B5AB(Global_15331.f_368, Global_15331.f_369);
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
		Global_14579 = 1;
		unk_0x5AE11BC36633DE4E(0);
		while ((Global_14579 == 1 && Global_15712 == 1) && unk_0xC9D9444186B5A374() < iLocal_34)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				Global_14579 = 0;
				unk_0xDA09A6E60FE9645E(0);
				Global_15712 = 6;
			}
			if (unk_0xD6F17BA188A65E8F())
			{
				if (unk_0xD770D92195D99971())
				{
					Global_14579 = 0;
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > iLocal_34)
		{
		}
		if (Global_15712 != 1)
		{
		}
		if (Global_14579 == 0)
		{
		}
	}
	Global_14579 = 0;
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 0) || Global_15712 != 1) || Global_14379 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
	else
	{
		if (Global_15720)
		{
			Global_16730 = 0;
			iLocal_32 = 0;
		}
		if (Global_15722 == 0)
		{
			if (Global_15763 == 0)
			{
				Global_14415 = Global_14413.f_1;
				Global_15763 = 1;
			}
			iLocal_30 = 0;
			if (Global_16729 == 0)
			{
				unk_0x8FBE4F4BB035B5AB(Global_15331.f_368, Global_15331.f_369);
				unk_0x4EDE34FBADD967A6(0);
				Global_15712 = 3;
				Global_14579 = 1;
				unk_0x5AE11BC36633DE4E(0);
				unk_0x9956FB0E4B50ECB8(&Global_2283, 27);
				unk_0xC1B1E9A034A63A62(0);
			}
			else
			{
				Global_14579 = 0;
				Global_15712 = 4;
			}
			Global_14412 = 0;
			if (Global_15723 == 1)
			{
				if (Global_14413.f_1 == 10)
				{
				}
				if (!Global_14413.f_1 == 9)
				{
					if (Global_14413.f_1 > 4)
					{
						if (Global_14396 == 0)
						{
							Global_14413.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14413.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14413.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (Global_14579 == 1)
					{
						if (unk_0xD6F17BA188A65E8F())
						{
							if (unk_0xD770D92195D99971())
							{
								Global_14579 = 0;
							}
						}
					}
				}
				if (Global_14413.f_1 == 6)
				{
				}
				if (Global_14413.f_1 == 10)
				{
				}
				if (Global_14413.f_1 == 3)
				{
					unk_0xDA09A6E60FE9645E(0);
					Global_15712 = 6;
					Global_14397 = 1;
					return;
				}
				Global_14413.f_1 = 9;
				func_8();
			}
			if (unk_0x00AAD79B42B3E036())
			{
				uLocal_101 = unk_0xC7F926248AF8587B();
			}
			else
			{
				iLocal_99 = unk_0x9D40BBF80D8F5E8A();
			}
			while (Global_14413.f_1 != 9 && Global_14396 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_14579 == 1)
				{
					if (unk_0xD6F17BA188A65E8F())
					{
						if (unk_0xD770D92195D99971())
						{
							Global_14579 = 0;
						}
					}
				}
				if (unk_0x00AAD79B42B3E036())
				{
					iLocal_108 = unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x9D40BBF80D8F5E8A();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_16728 = 1;
						Global_14396 = 1;
					}
				}
			}
			if (!unk_0xB519E5386FBF69E5(Global_2283, 11))
			{
				if (func_44() == 0)
				{
					func_54();
				}
			}
			if (Global_14396 == 0)
			{
				if (!Global_16729 == 0)
				{
					Global_15769 = 0;
					func_60();
					func_59();
					if (!Global_15725)
					{
						if (Global_16729 == 0)
						{
							unk_0xE8273F81C4CD68DD();
						}
						else
						{
							unk_0xEB54538380C56F96(Global_15331.f_368, Global_15331.f_369);
						}
					}
					func_58();
				}
			}
			else
			{
				func_96();
				Global_14397 = 1;
			}
		}
		else
		{
			Global_14412 = 1;
			if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					if (Global_14413.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x73817D396768E4C6(&Global_2284, 21);
				}
			}
			if (Global_15763 == 0)
			{
				Global_14415 = Global_14413.f_1;
				Global_15763 = 1;
			}
			if (Global_14413.f_1 == 3)
			{
				Global_14413.f_1 = 4;
			}
			else
			{
				while (Global_14413.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (Global_14413.f_1 == 6)
				{
				}
				Global_14413.f_1 = 9;
				func_8();
			}
			if (unk_0x00AAD79B42B3E036())
			{
				uLocal_101 = unk_0xC7F926248AF8587B();
			}
			else
			{
				iLocal_99 = unk_0x9D40BBF80D8F5E8A();
			}
			while (Global_14413.f_1 != 9 && Global_14396 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x00AAD79B42B3E036())
				{
					iLocal_108 = unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x9D40BBF80D8F5E8A();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_16728 = 1;
						Global_14396 = 1;
						unk_0x73817D396768E4C6(&Global_2284, 21);
					}
				}
			}
			if (Global_14396 == 0)
			{
				Global_15712 = 2;
			}
			else
			{
				func_96();
				Global_14397 = 1;
			}
			if (unk_0x00AAD79B42B3E036())
			{
				uLocal_95 = unk_0xC7F926248AF8587B();
				uLocal_98 = unk_0xC7F926248AF8587B();
			}
			else
			{
				iLocal_93 = unk_0x9D40BBF80D8F5E8A();
				iLocal_96 = unk_0x9D40BBF80D8F5E8A();
			}
		}
	}
}

void func_96()
{
	Global_14578 = 0;
	func_101();
}

void func_97()
{
	float fVar0;
	
	fVar0 = func_98(Global_14366[Global_14358 /*3*/], Global_14359[Global_14358 /*3*/], Global_14373, Global_14344, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16726 == 0)
		{
			unk_0xA8010B7497A9230B(1);
		}
		iLocal_32 = 0;
	}
}

float func_98(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_2558799 == 0)
	{
		if (unk_0xB519E5386FBF69E5(Global_2283, 14) && Global_14413.f_1 < 4)
		{
			unk_0x2EA67F1118848733(&Var0);
			if (Global_14366[Global_14358 /*3*/].f_1 == Var0.f_1)
			{
				Global_2558799 = 1;
			}
		}
	}
	if (func_44() && Global_2558799 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x9D40BBF80D8F5E8A();
	}
	fVar3 = func_100((unk_0xBBDA792448DB5A89((unk_0x9D40BBF80D8F5E8A() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_14341 = { func_99(Param0, Param3, fVar4) };
		Global_14344 = { func_99(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14341 = { Param3 };
		Global_14344 = { Param9 };
	}
	unk_0xD61764696C2259C9(Global_14341);
	unk_0xB0E0125CA07D4D7A(Global_14344, 0);
	return fVar3;
}

Vector3 func_99(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_100(float fParam0, float fParam1, float fParam2)
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

void func_101()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

bool func_102(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_103(sParam2, iParam3, 0);
}

int func_103(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xDA09A6E60FE9645E(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_101();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_33();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_27();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
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
				switch (Global_14413.f_1)
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_24();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_48();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_101();
	}
	return 0;
}

int func_104()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF6917DE0E003509D(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xF6917DE0E003509D(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xF6917DE0E003509D(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xF6917DE0E003509D(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xF6917DE0E003509D(iParam11))
	{
		func_9(iParam11);
	}
	unk_0xFF141057ED7B4C73();
}

