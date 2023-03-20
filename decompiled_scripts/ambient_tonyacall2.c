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
	if (unk_0x2170E7BC25114A22(18))
	{
		func_27();
	}
	if (unk_0xAB964FCFAC3C767A(joaat("ambient_tonyacall2")) > 1)
	{
		unk_0x01DFCA3621B68C4A();
	}
	while (true)
	{
		unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C());
		if (func_26(0, 14))
		{
			func_27();
		}
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			Local_46 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
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
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				unk_0x49E996A1E39EAAD7("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x49E996A1E39EAAD7("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x49E996A1E39EAAD7("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0x4ACD1E4CBA159ED1(joaat("prop_phone_ing"));
				if (((unk_0x7AD0E9452821C95D(joaat("prop_phone_ing")) && unk_0xD7669BF035CDA5F6("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xD7669BF035CDA5F6("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xD7669BF035CDA5F6("amb@world_human_stand_mobile@female@standing@call@exit"))
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
	int iVar6;
	var uVar7;
	float fVar8;
	
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
	}
	if (!unk_0xB529B2A4B7C64D6D(uLocal_38, 0))
	{
		Var3 = { unk_0xC086F8D75730FA3A(uLocal_38, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f || unk_0xB529B2A4B7C64D6D(uLocal_38, 0)) || func_21())
	{
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (unk_0x7887B64A08364778(uLocal_38) && !unk_0xB529B2A4B7C64D6D(uLocal_38, 0))
			{
				if (unk_0x1AAFFE4111587B35(uLocal_38, Local_57, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0x873418BFBF9A6780(&uVar7);
					unk_0x456121A0AAC868D4(&uVar7);
					unk_0xA7D2EDC881768869(0, fLocal_60, 0);
					unk_0x290A57C93304EF16(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0xCFE67FBB69F1C410(uVar7);
					unk_0x8B06B801B92CEC2D(uLocal_38, uVar7);
					unk_0x873418BFBF9A6780(&uVar7);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x7887B64A08364778(uLocal_38) && !unk_0xB529B2A4B7C64D6D(uLocal_38, 0))
			{
				if (unk_0x7F56260A7B7D8FF1(uLocal_38) == 1)
				{
					if (!unk_0x7887B64A08364778(uLocal_39))
					{
						if (unk_0xEBA40DFF7CCE3511(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar8 = unk_0x1F2CF2B9307EAB08(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar8 >= 0.157f)
							{
								uLocal_39 = unk_0xF21B698F4FCCA3D3(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0xD157F7C56C5A2FCC(uLocal_39, uLocal_38, unk_0xF9F732E1B7BD0FE4(uLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0x7F56260A7B7D8FF1(uLocal_38) == 2)
				{
					iVar6 = (unk_0x7BC26452241AC7C9(0, 65535) % 2);
					if (iVar6 == 0)
					{
						if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL3", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_4(&uLocal_63, "TOWAUD", "TONYA_CALL4", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xB529B2A4B7C64D6D(uLocal_38, 0))
			{
				if (!func_3())
				{
					unk_0x873418BFBF9A6780(&uVar7);
					unk_0x456121A0AAC868D4(&uVar7);
					unk_0x290A57C93304EF16(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0xCFE67FBB69F1C410(uVar7);
					unk_0x8B06B801B92CEC2D(uLocal_38, uVar7);
					unk_0x873418BFBF9A6780(&uVar7);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				if (unk_0x730196602471217D(0) != 4)
				{
					if (func_4(&uLocal_63, "TOWAUD", "TOW_MESS2", 8, 0, 0, 0))
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
	if (unk_0x7887B64A08364778(uLocal_38) && !unk_0xB529B2A4B7C64D6D(uLocal_38, 0))
	{
		if (unk_0x7F56260A7B7D8FF1(uLocal_38) == 1)
		{
			if (unk_0x7887B64A08364778(uLocal_39))
			{
				unk_0x77CEDAB7C44BFD4E(&uLocal_39);
				unk_0x0988FFC0C75637DF(uLocal_38, unk_0xD5A676B97920D126(), -1, 0, 2);
			}
		}
	}
	if (unk_0x7887B64A08364778(uLocal_38) && !unk_0xB529B2A4B7C64D6D(uLocal_38, 0))
	{
		if (unk_0x7887B64A08364778(uLocal_39))
		{
			if (unk_0x1774A68441553185(uLocal_38, 993674639) == 1)
			{
				unk_0x77CEDAB7C44BFD4E(&uLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
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
					unk_0x73998CD31AEFA620(0);
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
		if (unk_0x33688D334D224255())
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
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
	unk_0x73998CD31AEFA620(0);
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
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
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		if (Global_69697)
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
	return Global_101652.f_2079.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_15(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_14(unk_0xD5A676B97920D126());
			if (func_13(iVar0) && (!func_16(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_13(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(uParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35777 == iParam0;
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
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_19()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
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
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && !unk_0xB529B2A4B7C64D6D(uLocal_38, 0))
	{
		if (unk_0xC85EEB48C05E2A8A(unk_0xD5A676B97920D126(), uLocal_38) || unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
		{
			if (unk_0x7887B64A08364778(uLocal_39))
			{
				unk_0x4FE8E15113ECBFEF(uLocal_39, 1, 1);
			}
			unk_0x73998CD31AEFA620(0);
			if (unk_0x1774A68441553185(uLocal_38, 1805844857) != 1)
			{
				unk_0x7D99F00F48D15ADB(uLocal_38, 1);
				unk_0xBB8F1D58B7578137(uLocal_38, unk_0xD5A676B97920D126(), 1000f, -1, 0, 0);
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
	
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
	}
	unk_0x0F035B440B947719(Var0, fLocal_41, 1, 1, &uVar3, 0, 1, -1);
	if (unk_0x7887B64A08364778(uVar3) && !unk_0xB529B2A4B7C64D6D(uVar3, 0))
	{
		iVar4 = unk_0xA0A4DA31DEDFAC4F(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_38 = uVar3;
			unk_0xC53606C390BE2727(uLocal_38, 1, 0);
			unk_0xA8C0CC1A37E5B35D(uLocal_38, 0);
			unk_0x74084690B489CA8D(uLocal_38, 0);
			unk_0x9AAD264322B9D45B(uLocal_38, "TONYA");
			unk_0x417BCC1ECC12E9A2(uLocal_38, joaat("player"));
			func_25(&uLocal_63, 3, uLocal_38, "TONYA", 1, 1);
			func_24();
			if (!func_23(Local_57))
			{
				if (unk_0x1774A68441553185(uLocal_38, 713668775) != 1)
				{
					unk_0x1D2CBA8F2F00D745(uLocal_38, Local_57, 1f, -1, 0.25f, 0, fLocal_60);
					unk_0x7D99F00F48D15ADB(uLocal_38, 1);
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
	
	if (unk_0x7887B64A08364778(uLocal_38) && !unk_0xB529B2A4B7C64D6D(uLocal_38, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(uLocal_38, 1) };
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
			if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
			{
				if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
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
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(uParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(uParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(uParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(uParam2, 1);
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
	uVar0 = unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

void func_27()
{
	unk_0x6989DACCC7A558AE("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0x6989DACCC7A558AE("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0x6989DACCC7A558AE("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x8188DB74546FF484(joaat("prop_phone_ing"));
	if (unk_0x7887B64A08364778(uLocal_38))
	{
		if (unk_0x27A556D1AF39812E(uLocal_38))
		{
			unk_0xA2AC407F9132DD0B(&uLocal_38);
		}
		else
		{
			unk_0xD4B3FF1E63C36391(&uLocal_38);
		}
	}
	unk_0x01DFCA3621B68C4A();
}

