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
	if (unk_0xB9B05E900D325C36(18))
	{
		func_26();
	}
	if (unk_0x7832F791572D5809(joaat("ambient_tonyacall5")) > 1)
	{
		unk_0xBEE2834559A8897A();
	}
	while (true)
	{
		unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1());
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			Local_46 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
		}
		if (unk_0xB7A628320EFF8E47(Local_46, Local_43) > fLocal_42)
		{
			func_26();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_22())
				{
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				unk_0x9F62787D280BF2EC("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x9F62787D280BF2EC("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x9F62787D280BF2EC("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0xBE91026C1FC72180(joaat("prop_phone_ing"));
				if (((unk_0x772F801619C83779(joaat("prop_phone_ing")) && unk_0xB3379AC2E71D1E7E("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xB3379AC2E71D1E7E("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xB3379AC2E71D1E7E("amb@world_human_stand_mobile@female@standing@call@exit"))
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
				func_26();
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
	
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
	}
	if (!unk_0x7A6C051038031EFA(uLocal_38, 0))
	{
		Var3 = { unk_0xF177E0DA126D71C8(uLocal_38, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f || unk_0x7A6C051038031EFA(uLocal_38, 0)) || func_21())
	{
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (unk_0x76B3C79DE564AFC6(uLocal_38) && !unk_0x7A6C051038031EFA(uLocal_38, 0))
			{
				if (unk_0xF041E50CF58AF6F9(uLocal_38, Local_57, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0x1F5B34056C3CB80B(&uVar7);
					unk_0x173325AAF2CD766A(&uVar7);
					unk_0xCBA311EF4F32CB8A(0, fLocal_60, 0);
					unk_0xBE0E7D38FE7C495C(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xBE0E7D38FE7C495C(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0xF81AD3C937316CCA(uVar7);
					unk_0xEDD5437C49B7B1F8(uLocal_38, uVar7);
					unk_0x1F5B34056C3CB80B(&uVar7);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x76B3C79DE564AFC6(uLocal_38) && !unk_0x7A6C051038031EFA(uLocal_38, 0))
			{
				if (unk_0x034F62676A8F22CA(uLocal_38) == 1)
				{
					if (!unk_0x76B3C79DE564AFC6(uLocal_39))
					{
						if (unk_0x4CB2F72EA418C083(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar8 = unk_0x2D1A3279FE1D23D4(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar8 >= 0.157f)
							{
								uLocal_39 = unk_0x766969A7CEBA91AE(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0x251439A7DA10B1A9(uLocal_39, uLocal_38, unk_0xB5B293DE66E91B64(uLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0x034F62676A8F22CA(uLocal_38) == 2)
				{
					iVar6 = (unk_0x3AF262D7332EEDF5(0, 65535) % 2);
					if (iVar6 == 0)
					{
						if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL5", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL6", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x7A6C051038031EFA(uLocal_38, 0))
			{
				if (!func_3())
				{
					unk_0x1F5B34056C3CB80B(&uVar7);
					unk_0x173325AAF2CD766A(&uVar7);
					unk_0xBE0E7D38FE7C495C(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0xF81AD3C937316CCA(uVar7);
					unk_0xEDD5437C49B7B1F8(uLocal_38, uVar7);
					unk_0x1F5B34056C3CB80B(&uVar7);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				if (unk_0xE2378BA63E191ED9(0) != 4)
				{
					if (func_4(&uLocal_63, "TOWAUD", "TOW_MESS3", 8, 0, 0, 0))
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
	if (unk_0x76B3C79DE564AFC6(uLocal_38) && !unk_0x7A6C051038031EFA(uLocal_38, 0))
	{
		if (unk_0x034F62676A8F22CA(uLocal_38) == 1)
		{
			if (unk_0x76B3C79DE564AFC6(uLocal_39))
			{
				unk_0xF2EFF31F204F4A7D(&uLocal_39);
				unk_0x43EC517AF665D2B9(uLocal_38, unk_0x0031992CA618A445(), -1, 0, 2);
			}
		}
	}
	if (unk_0x76B3C79DE564AFC6(uLocal_38) && !unk_0x7A6C051038031EFA(uLocal_38, 0))
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_39))
		{
			if (unk_0xF57D21B49780A7A8(uLocal_38, 993674639) == 1)
			{
				unk_0xF2EFF31F204F4A7D(&uLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_17();
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
				func_10();
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
				if (func_9())
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
			if (func_8())
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
			func_7();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_6();
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x683F0CB6CA4C99D0(0);
	Global_15745 = 1;
}

void func_7()
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

int func_8()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
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

void func_10()
{
	if (func_16(14))
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
		Global_14443 = func_11();
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

var func_11()
{
	func_12();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_15(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_14(unk_0x0031992CA618A445());
			if (func_13(iVar0) && (!func_16(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_13(Global_104439.f_2244.f_539.f_4301))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(uParam0);
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
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
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

void func_19()
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
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

int func_21()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0) && !unk_0x7A6C051038031EFA(uLocal_38, 0))
	{
		if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), uLocal_38) || unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
		{
			if (unk_0x76B3C79DE564AFC6(uLocal_39))
			{
				unk_0x2C49E28C76DBD67B(uLocal_39, 1, 1);
			}
			unk_0x683F0CB6CA4C99D0(0);
			if (unk_0xF57D21B49780A7A8(uLocal_38, 1805844857) != 1)
			{
				unk_0x390D16BCBFB23E1A(uLocal_38, 1);
				unk_0x53E150F8F0AD7101(uLocal_38, unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
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
	
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
	}
	unk_0x50076A31F0A27861(Var0, fLocal_41, 1, 1, &uVar3, 0, 1, -1);
	if (unk_0x76B3C79DE564AFC6(uVar3) && !unk_0x7A6C051038031EFA(uVar3, 0))
	{
		iVar4 = unk_0xE9559A12052415BE(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_38 = uVar3;
			unk_0x1581691D748490F3(uLocal_38, 1, 0);
			unk_0xE236218481966790(uLocal_38, 0);
			unk_0x0EB00C68DDFABE19(uLocal_38, 0);
			unk_0x2E8F82DEEA1D25B8(uLocal_38, "TONYA");
			unk_0x7F53E53C6F32D196(uLocal_38, joaat("player"));
			func_25(&uLocal_63, 3, uLocal_38, "TONYA", 1, 1);
			func_24();
			if (!func_23(Local_57))
			{
				if (unk_0xF57D21B49780A7A8(uLocal_38, 713668775) != 1)
				{
					unk_0x276406356F4120BB(uLocal_38, Local_57, 1f, -1, 0.25f, 0, fLocal_60);
					unk_0x390D16BCBFB23E1A(uLocal_38, 1);
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
	
	if (unk_0x76B3C79DE564AFC6(uLocal_38) && !unk_0x7A6C051038031EFA(uLocal_38, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(uLocal_38, 1) };
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
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
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
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(uParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(uParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(uParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(uParam2, 1);
			}
		}
	}
}

void func_26()
{
	unk_0xBE238DB7614E8074("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0xBE238DB7614E8074("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0xBE238DB7614E8074("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x9793B48C4C8275F8(joaat("prop_phone_ing"));
	if (unk_0x76B3C79DE564AFC6(uLocal_38))
	{
		if (unk_0xDBF188DE6334F01A(uLocal_38))
		{
			unk_0xA50DE967C5813F23(&uLocal_38);
		}
		else
		{
			unk_0x056049D9941BD43D(&uLocal_38);
		}
	}
	unk_0xBEE2834559A8897A();
}

