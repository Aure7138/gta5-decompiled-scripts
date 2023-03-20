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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	struct<3> Local_52 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	var uLocal_62 = 16;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
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
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	fLocal_40 = 50f;
	fLocal_41 = 2500f;
	Local_42 = { 409.1539f, -1626.677f, 28.2928f };
	Local_48 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_51 = 202.6928f;
	Local_52 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_55 = 85.7173f;
	if (unk_0x2C897F101BA20806(18))
	{
		func_27();
	}
	if (unk_0x16CDA1894CFE0781(joaat("ambient_tonyacall2")) > 1)
	{
		unk_0x82706E6C897B0FA1();
	}
	while (true)
	{
		unk_0x2AF80829930084FD(unk_0x1788E93557766241());
		if (func_26(0, 14))
		{
			func_27();
		}
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			Local_45 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
		}
		if (unk_0xB7A628320EFF8E47(Local_45, Local_42) > fLocal_41)
		{
			func_27();
		}
		switch (iLocal_36)
		{
			case 0:
				if (func_22())
				{
					iLocal_36 = 1;
				}
				break;
			
			case 1:
				unk_0x3D28909AF30D70F4("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x3D28909AF30D70F4("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x3D28909AF30D70F4("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0x939DA7EBCC6588FF(joaat("prop_phone_ing"));
				if (((unk_0x5494F37F35C1D7D7(joaat("prop_phone_ing")) && unk_0x6C47E32491756A1A("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0x6C47E32491756A1A("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0x6C47E32491756A1A("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_36 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_36 = 3;
				}
				break;
			
			case 3:
				func_27();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	float fVar8;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
	}
	if (!unk_0xE44A580B551C3645(uLocal_37))
	{
		Var3 = { unk_0xBF8499F46AD9093A(uLocal_37, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f || unk_0xE44A580B551C3645(uLocal_37)) || func_21())
	{
		return 1;
	}
	switch (iLocal_39)
	{
		case 0:
			if (unk_0x538DF9E5B1DF01EB(uLocal_37) && !unk_0xE44A580B551C3645(uLocal_37))
			{
				if (unk_0x965556ACF6A83973(uLocal_37, Local_56, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0x2AF68ED52DC74B7D(&uVar7);
					unk_0x6D98AA46076A68BE(&uVar7);
					unk_0x4341FCA05D2E4938(0, fLocal_59, 0);
					unk_0x5B5659C49032B96C(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x5B5659C49032B96C(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x963BB7C99350D827(uVar7);
					unk_0x0891776D0327B77A(uLocal_37, uVar7);
					unk_0x2AF68ED52DC74B7D(&uVar7);
					iLocal_39 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x538DF9E5B1DF01EB(uLocal_37) && !unk_0xE44A580B551C3645(uLocal_37))
			{
				if (unk_0x221830F81FA80744(uLocal_37) == 1)
				{
					if (!unk_0x538DF9E5B1DF01EB(uLocal_38))
					{
						if (unk_0x95EDB2DEFA5BB405(uLocal_37, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar8 = unk_0x4CB0BCFFEC712BA2(uLocal_37, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar8 >= 0.157f)
							{
								uLocal_38 = unk_0x8AC4394F3C9173EE(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0x07CDE0236CD8AAC8(uLocal_38, uLocal_37, unk_0x879EC196F941E547(uLocal_37, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0x221830F81FA80744(uLocal_37) == 2)
				{
					iVar6 = (unk_0x444ECD635D5FD45F(0, 65535) % 2);
					if (iVar6 == 0)
					{
						if (func_4(&uLocal_62, "TOWAUD", "TONYA_CALL3", 8, 0, 0, 0))
						{
							iLocal_39 = 2;
						}
					}
					else if (func_4(&uLocal_62, "TOWAUD", "TONYA_CALL4", 8, 0, 0, 0))
					{
						iLocal_39 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xE44A580B551C3645(uLocal_37))
			{
				if (!func_3())
				{
					unk_0x2AF68ED52DC74B7D(&uVar7);
					unk_0x6D98AA46076A68BE(&uVar7);
					unk_0x5B5659C49032B96C(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0x963BB7C99350D827(uVar7);
					unk_0x0891776D0327B77A(uLocal_37, uVar7);
					unk_0x2AF68ED52DC74B7D(&uVar7);
					iLocal_39 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				if (unk_0x95AD511976EEFC6B(0) != 4)
				{
					if (func_4(&uLocal_62, "TOWAUD", "TOW_MESS2", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_39 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				iLocal_39 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (unk_0x538DF9E5B1DF01EB(uLocal_37) && !unk_0xE44A580B551C3645(uLocal_37))
	{
		if (unk_0x221830F81FA80744(uLocal_37) == 1)
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_38))
			{
				unk_0xD4C90F16EBBFE620(&uLocal_38);
				unk_0x4745F9C50C63A48C(uLocal_37, unk_0xA16EC202D9D35357(), -1, 0, 2);
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(uLocal_37) && !unk_0xE44A580B551C3645(uLocal_37))
	{
		if (unk_0x538DF9E5B1DF01EB(uLocal_38))
		{
			if (unk_0x221AC1EF116F6053(uLocal_37, 993674639) == 1)
			{
				unk_0xD4C90F16EBBFE620(&uLocal_38);
			}
		}
	}
}

int func_3()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_17();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_10();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_8())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_6();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_7()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_8()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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

void func_10()
{
	if (func_16(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_11();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_11()
{
	func_12();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_15(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_14(unk_0xA16EC202D9D35357());
			if (func_13(iVar0) && (!func_16(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_19()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_21()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(uLocal_37))
	{
		if (unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), uLocal_37) || unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_38))
			{
				unk_0xBF1AB1205B822518(uLocal_38, 1, 1);
			}
			unk_0x0D68C13151B68364(0);
			if (unk_0x221AC1EF116F6053(uLocal_37, 1805844857) != 1)
			{
				unk_0x2686393074E14730(uLocal_37, 1);
				unk_0xEA36CC2E7750344B(uLocal_37, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_22()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
	}
	unk_0x31EC0FDDC2D3EB41(Var0, fLocal_40, 1, 1, &uVar3, 0, 1, -1);
	if (unk_0x538DF9E5B1DF01EB(uVar3) && !unk_0xE44A580B551C3645(uVar3))
	{
		iVar4 = unk_0xA609E58449080951(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_37 = uVar3;
			unk_0x7B9576B4E099FB1F(uLocal_37, 1, 0);
			unk_0x065062839FBD7BCF(uLocal_37, 0);
			unk_0xA8BC819B54F5B824(uLocal_37, 0);
			unk_0xCB0714DE8BE81377(uLocal_37, "TONYA");
			unk_0xA9465591B42213AE(uLocal_37, joaat("player"));
			func_25(&uLocal_62, 3, uLocal_37, "TONYA", 1, 1);
			func_24();
			if (!func_23(Local_56))
			{
				if (unk_0x221AC1EF116F6053(uLocal_37, 713668775) != 1)
				{
					unk_0x353F4B963593F141(uLocal_37, Local_56, 1f, -1, 0.25f, 0, fLocal_59);
					unk_0x2686393074E14730(uLocal_37, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_23(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	struct<3> Var0;
	
	if (unk_0x538DF9E5B1DF01EB(uLocal_37) && !unk_0xE44A580B551C3645(uLocal_37))
	{
		Var0 = { unk_0xBF8499F46AD9093A(uLocal_37, 1) };
		if (func_23(Local_56))
		{
			fLocal_60 = unk_0x2A488C176D52CCA5(Var0, Local_48);
			fLocal_61 = unk_0x2A488C176D52CCA5(Var0, Local_52);
			if (fLocal_60 < fLocal_61)
			{
				Local_56 = { Local_48 };
				fLocal_59 = fLocal_51;
			}
			else
			{
				Local_56 = { Local_52 };
				fLocal_59 = fLocal_55;
			}
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					Local_56 = { Local_52 };
					fLocal_59 = fLocal_55;
				}
			}
		}
	}
}

void func_25(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(uParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(uParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(uParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(uParam2, 1);
			}
		}
	}
}

int func_26(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	uVar0 = unk_0x889D01384B54BCE3(Global_97439.f_7341.f_99.f_217[iParam0], iParam1);
	return uVar0;
}

void func_27()
{
	unk_0xB845ECB6BD2996BD("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0xB845ECB6BD2996BD("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0xB845ECB6BD2996BD("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0xEA054561294AEC10(joaat("prop_phone_ing"));
	if (unk_0x538DF9E5B1DF01EB(uLocal_37))
	{
		if (unk_0x0E7E162F5A49FAAA(uLocal_37))
		{
			unk_0x51A89CCC8A5317D0(&uLocal_37);
		}
		else
		{
			unk_0x6B3DDEE91652BE59(&uLocal_37);
		}
	}
	unk_0x82706E6C897B0FA1();
}

