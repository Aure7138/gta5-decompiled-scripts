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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_52 = 0f;
	struct<3> Local_53 = { 0, 0, 0 } ;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	var uLocal_63 = 16;
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
	var uLocal_227 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	Local_43 = { 409.1539f, -1626.677f, 28.2928f };
	Local_49 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_52 = 202.6928f;
	Local_53 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_56 = 85.7173f;
	if (unk_0x24862A9CDC8F8874(18))
	{
		func_27();
	}
	if (unk_0xCBC8FFE55DC722B5(joaat("ambient_tonyacall")) > 1)
	{
		unk_0xA4E0D8FD51F2A6F7();
	}
	while (true)
	{
		unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638());
		if (func_26(0, 14))
		{
			func_27();
		}
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			Local_46 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
		}
		if (unk_0xB7A628320EFF8E47(Local_46, Local_43) > fLocal_42)
		{
			func_27();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_22())
				{
					if (func_5(&uLocal_63, "TOWAUD", "TONYA_HANG", 8, 0, 0, 0))
					{
						iLocal_37 = 1;
					}
				}
				break;
			
			case 1:
				unk_0xC0E8B67A4385D37D("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0xC0E8B67A4385D37D("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0xC0E8B67A4385D37D("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0xC0E8B67A4385D37D("amb@world_human_smoking@female@enter");
				unk_0xC0E8B67A4385D37D("amb@world_human_smoking@female@idle_a");
				unk_0x7567CEA8E6B5340B(joaat("prop_phone_ing"));
				if (((((unk_0x0845149A26DABBA5(joaat("prop_phone_ing")) && unk_0xF9B86DC1728F1339("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xF9B86DC1728F1339("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xF9B86DC1728F1339("amb@world_human_stand_mobile@female@standing@call@exit")) && unk_0xF9B86DC1728F1339("amb@world_human_smoking@female@enter")) && unk_0xF9B86DC1728F1339("amb@world_human_smoking@female@idle_a"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
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
	var uVar6;
	float fVar7;
	int iVar8;
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(uLocal_38))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(uLocal_38, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f || unk_0xB6900B8CB0ABBD2B(uLocal_38)) || func_4())
	{
		if (unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f)
		{
		}
		if (unk_0xB6900B8CB0ABBD2B(uLocal_38))
		{
		}
		if (func_4())
		{
		}
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (unk_0x95CCECA3948CFE7B(uLocal_38) && !unk_0xB6900B8CB0ABBD2B(uLocal_38))
			{
				if (unk_0xA0C23498D8E0BB93(uLocal_38, Local_57, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0xA9351C9309E03069(&uVar6);
					unk_0x3E2E609450787FFE(&uVar6);
					unk_0x6EAFBB3A7F6ADEA9(0, fLocal_60, 0);
					unk_0x5323F488E6A1B660(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x5323F488E6A1B660(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x939BC11172AA1303(uVar6);
					unk_0xBFE865E3B513451B(uLocal_38, uVar6);
					unk_0xA9351C9309E03069(&uVar6);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x95CCECA3948CFE7B(uLocal_38) && !unk_0xB6900B8CB0ABBD2B(uLocal_38))
			{
				if (unk_0xCD88F418C186FA19(uLocal_38) == 1)
				{
					if (!unk_0x95CCECA3948CFE7B(uLocal_39))
					{
						if (unk_0xCD61E9D5CABC7E35(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar7 = unk_0x853B39ECA83DA242(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar7 >= 0.157f)
							{
								uLocal_39 = unk_0x7C62BC1EB194D985(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0xAD318582A32CA5D2(uLocal_39, uLocal_38, unk_0xF2122440C667309F(uLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0xCD88F418C186FA19(uLocal_38) == 2)
				{
					iVar8 = (unk_0x531444754C426278(0, 65535) % 2);
					if (iVar8 == 0)
					{
						if (func_5(&uLocal_63, "TOWAUD", "TONYA_CALL1", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_5(&uLocal_63, "TOWAUD", "TONYA_CALL2", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xB6900B8CB0ABBD2B(uLocal_38))
			{
				if (!func_3())
				{
					unk_0xA9351C9309E03069(&uVar6);
					unk_0x3E2E609450787FFE(&uVar6);
					unk_0x5323F488E6A1B660(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xFCA99C3640D1F1B5(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0x939BC11172AA1303(uVar6);
					unk_0xBFE865E3B513451B(uLocal_38, uVar6);
					unk_0xA9351C9309E03069(&uVar6);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				if (unk_0xA9B6C2A8F9FE269A(0) != 4)
				{
					if (func_5(&uLocal_63, "TOWAUD", "TONYA_MESS", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (unk_0x95CCECA3948CFE7B(uLocal_38) && !unk_0xB6900B8CB0ABBD2B(uLocal_38))
	{
		if (unk_0xCD88F418C186FA19(uLocal_38) == 1)
		{
			if (unk_0x95CCECA3948CFE7B(uLocal_39))
			{
				unk_0xA278ECBE30D8AE4F(&uLocal_39);
				unk_0xE48D9147BC1F4CD7(uLocal_38, unk_0xC8B93D94F8954288(), -1, 0, 2);
			}
		}
	}
	if (unk_0x95CCECA3948CFE7B(uLocal_38) && !unk_0xB6900B8CB0ABBD2B(uLocal_38))
	{
		if (unk_0x95CCECA3948CFE7B(uLocal_39))
		{
			if (unk_0x090C65D5190A249D(uLocal_38, 993674639) == 1)
			{
				unk_0xA278ECBE30D8AE4F(&uLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()) && !unk_0xB6900B8CB0ABBD2B(uLocal_38))
	{
		if (unk_0xA499226F64D3A26A(unk_0xC8B93D94F8954288(), uLocal_38) || unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x95CCECA3948CFE7B(uLocal_39))
			{
				unk_0xB81176DFD2611E8B(uLocal_39, 1, 1);
			}
			unk_0xB518E9C8553B1D2B(0);
			if (unk_0x090C65D5190A249D(uLocal_38, 1805844857) != 1)
			{
				unk_0xF1A02DDEC7E15D6E(uLocal_38, 1);
				unk_0x622E764F80DBF8B7(uLocal_38, unk_0xC8B93D94F8954288(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xB518E9C8553B1D2B(0);
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
					func_20();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_18();
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
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_11();
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
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
				}
			}
			if (func_9())
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_7();
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
		func_20();
	}
	return 0;
}

void func_7()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_8()
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
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_9()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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

void func_11()
{
	if (func_17(14))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
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
		Global_14413 = func_12();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_12()
{
	func_13();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_16(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_15(unk_0xC8B93D94F8954288());
			if (func_14(iVar0) && (!func_17(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_14(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_14(int iParam0)
{
	return iParam0 < 3;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_14(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_18()
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

bool func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_20()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

int func_22()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
	}
	unk_0xC51B1A714DF7543D(Var0, fLocal_41, 1, 1, &uVar3, 0, 1, -1);
	if (unk_0x95CCECA3948CFE7B(uVar3) && !unk_0xB6900B8CB0ABBD2B(uVar3))
	{
		iVar4 = unk_0x6D5BB810CC209E15(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_38 = uVar3;
			unk_0xFD816D0E738EB817(uLocal_38, 1, 0);
			unk_0x90115CB23FA58DD6(uLocal_38, 0);
			unk_0x58F516BB5E324590(uLocal_38, 0);
			unk_0x64B2BC184771BDA3(uLocal_38, "TONYA");
			unk_0xCBD60E398042F554(uLocal_38, joaat("player"));
			func_25(&uLocal_63, 3, uLocal_38, "TONYA", 1, 1);
			func_24();
			if (!func_23(Local_57))
			{
				if (unk_0x090C65D5190A249D(uLocal_38, 713668775) != 1)
				{
					unk_0x81333BEA4837207C(uLocal_38, Local_57, 1f, -1, 0.25f, 0, fLocal_60);
					unk_0xF1A02DDEC7E15D6E(uLocal_38, 1);
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
	
	if (unk_0x95CCECA3948CFE7B(uLocal_38) && !unk_0xB6900B8CB0ABBD2B(uLocal_38))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(uLocal_38, 1) };
		if (func_23(Local_57))
		{
			fLocal_61 = unk_0x2A488C176D52CCA5(Var0, Local_49);
			fLocal_62 = unk_0x2A488C176D52CCA5(Var0, Local_53);
			if (fLocal_61 < fLocal_62)
			{
				Local_57 = { Local_49 };
				fLocal_60 = fLocal_52;
			}
			else
			{
				Local_57 = { Local_53 };
				fLocal_60 = fLocal_56;
			}
			if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					Local_57 = { Local_53 };
					fLocal_60 = fLocal_56;
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
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(uParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(uParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(uParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(uParam2, 1);
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
	uVar0 = unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

void func_27()
{
	unk_0x3ECF1E41E6ED71D8("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0x3ECF1E41E6ED71D8("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0x3ECF1E41E6ED71D8("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x3ECF1E41E6ED71D8("amb@world_human_smoking@female@enter");
	unk_0x3ECF1E41E6ED71D8("amb@world_human_smoking@female@idle_a");
	unk_0x4BBD72565A0AF033(joaat("prop_phone_ing"));
	if (unk_0x95CCECA3948CFE7B(uLocal_38))
	{
		if (unk_0x3F13A387457FD9A7(uLocal_38))
		{
			unk_0x26B3B761603F5232(&uLocal_38);
		}
		else
		{
			unk_0x459A6F82E024C891(&uLocal_38);
		}
	}
	unk_0xA4E0D8FD51F2A6F7();
}

