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
	if (unk_0xE8A79675302ED812(18))
	{
		func_27();
	}
	if (unk_0xB731B8C5BCE89836(joaat("ambient_tonyacall")) > 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F());
		if (func_26(0, 14))
		{
			func_27();
		}
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			Local_46 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
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
				unk_0x522053D86D6E1C7A("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x522053D86D6E1C7A("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x522053D86D6E1C7A("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0x522053D86D6E1C7A("amb@world_human_smoking@female@enter");
				unk_0x522053D86D6E1C7A("amb@world_human_smoking@female@idle_a");
				unk_0xF243B7A14FCFD0F4(joaat("prop_phone_ing"));
				if (((((unk_0xD6513D668481290A(joaat("prop_phone_ing")) && unk_0xF9E082857622D91E("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xF9E082857622D91E("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xF9E082857622D91E("amb@world_human_stand_mobile@female@standing@call@exit")) && unk_0xF9E082857622D91E("amb@world_human_smoking@female@enter")) && unk_0xF9E082857622D91E("amb@world_human_smoking@female@idle_a"))
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
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	if (!unk_0x1D403DFADBC2DE3C(uLocal_38, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(uLocal_38, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f || unk_0x1D403DFADBC2DE3C(uLocal_38, 0)) || func_4())
	{
		if (unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f)
		{
		}
		if (unk_0x1D403DFADBC2DE3C(uLocal_38, 0))
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
			if (unk_0x724D816EA203A79E(uLocal_38) && !unk_0x1D403DFADBC2DE3C(uLocal_38, 0))
			{
				if (unk_0x4DBCE270B354E123(uLocal_38, Local_57, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0x02DAF06EA4F08219(&uVar6);
					unk_0xC5A6DFE2B8987B17(&uVar6);
					unk_0xC0FDCDB0DF739C50(0, fLocal_60, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x535008C596714F9E(uVar6);
					unk_0xA8E6405305C0D7DF(uLocal_38, uVar6);
					unk_0x02DAF06EA4F08219(&uVar6);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(uLocal_38) && !unk_0x1D403DFADBC2DE3C(uLocal_38, 0))
			{
				if (unk_0xD62938026B30481A(uLocal_38) == 1)
				{
					if (!unk_0x724D816EA203A79E(uLocal_39))
					{
						if (unk_0x96044E39418AAF17(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar7 = unk_0x4A3B2CF8BADDD74E(uLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar7 >= 0.157f)
							{
								uLocal_39 = unk_0xB6896943DA475493(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0x5DBE04849460E608(uLocal_39, uLocal_38, unk_0xFA18E720A39243D0(uLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0xD62938026B30481A(uLocal_38) == 2)
				{
					iVar8 = (unk_0x491B2241281A03B7(0, 65535) % 2);
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
			if (!unk_0x1D403DFADBC2DE3C(uLocal_38, 0))
			{
				if (!func_3())
				{
					unk_0x02DAF06EA4F08219(&uVar6);
					unk_0xC5A6DFE2B8987B17(&uVar6);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0x535008C596714F9E(uVar6);
					unk_0xA8E6405305C0D7DF(uLocal_38, uVar6);
					unk_0x02DAF06EA4F08219(&uVar6);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				if (unk_0x3D875C2512206692(0) != 4)
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
	if (unk_0x724D816EA203A79E(uLocal_38) && !unk_0x1D403DFADBC2DE3C(uLocal_38, 0))
	{
		if (unk_0xD62938026B30481A(uLocal_38) == 1)
		{
			if (unk_0x724D816EA203A79E(uLocal_39))
			{
				unk_0xA35241BCE4C1A24B(&uLocal_39);
				unk_0x56F2E1B5599188FA(uLocal_38, unk_0xBC25C936A095B5BA(), -1, 0, 2);
			}
		}
	}
	if (unk_0x724D816EA203A79E(uLocal_38) && !unk_0x1D403DFADBC2DE3C(uLocal_38, 0))
	{
		if (unk_0x724D816EA203A79E(uLocal_39))
		{
			if (unk_0xF4FCC3C1048FF2AB(uLocal_38, 993674639) == 1)
			{
				unk_0xA35241BCE4C1A24B(&uLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(uLocal_38, 0))
	{
		if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), uLocal_38) || unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x724D816EA203A79E(uLocal_39))
			{
				unk_0x17175087F2DB6AC8(uLocal_39, 1, 1);
			}
			unk_0x1E08809A5041F85B(0);
			if (unk_0xF4FCC3C1048FF2AB(uLocal_38, 1805844857) != 1)
			{
				unk_0x22321800954A532E(uLocal_38, 1);
				unk_0x5558ED6D4A2DEC93(uLocal_38, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
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
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
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
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_18();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_11();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
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
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_7();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
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
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_8()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_9()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_12();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

var func_12()
{
	func_13();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_16(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_15(unk_0xBC25C936A095B5BA());
			if (func_14(iVar0) && (!func_17(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_14(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_14(int iParam0)
{
	return iParam0 < 3;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(uParam0);
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
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_18()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_20()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = uParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_22()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	unk_0x50AE3E919DC9BC67(Var0, fLocal_41, 1, 1, &uVar3, 0, 1, -1);
	if (unk_0x724D816EA203A79E(uVar3) && !unk_0x1D403DFADBC2DE3C(uVar3, 0))
	{
		iVar4 = unk_0x6F79ECA8C83E4357(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_38 = uVar3;
			unk_0x77815D3407C6700D(uLocal_38, 1, 0);
			unk_0x8EF3D958386640FE(uLocal_38, 0);
			unk_0xB105531EDD3DE51B(uLocal_38, 0);
			unk_0xF85FAED5BA864282(uLocal_38, "TONYA");
			unk_0x4106FAF8AA1D69D5(uLocal_38, joaat("player"));
			func_25(&uLocal_63, 3, uLocal_38, "TONYA", 1, 1);
			func_24();
			if (!func_23(Local_57))
			{
				if (unk_0xF4FCC3C1048FF2AB(uLocal_38, 713668775) != 1)
				{
					unk_0x346129B364057FF6(uLocal_38, Local_57, 1f, -1, 0.25f, 0, fLocal_60);
					unk_0x22321800954A532E(uLocal_38, 1);
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
	
	if (unk_0x724D816EA203A79E(uLocal_38) && !unk_0x1D403DFADBC2DE3C(uLocal_38, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(uLocal_38, 1) };
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
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
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
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(uParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(uParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(uParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(uParam2, 1);
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
	uVar0 = unk_0xFA30DFD0084E92FE(Global_105220.f_9056.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

void func_27()
{
	unk_0x4EA570997E107F35("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0x4EA570997E107F35("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0x4EA570997E107F35("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x4EA570997E107F35("amb@world_human_smoking@female@enter");
	unk_0x4EA570997E107F35("amb@world_human_smoking@female@idle_a");
	unk_0x2CA123B0622F495C(joaat("prop_phone_ing"));
	if (unk_0x724D816EA203A79E(uLocal_38))
	{
		if (unk_0x41A5D6415E2CC10E(uLocal_38))
		{
			unk_0xF845620A03C7425B(&uLocal_38);
		}
		else
		{
			unk_0x02537C8C1BEEB477(&uLocal_38);
		}
	}
	unk_0x95E4B6F3ED223F5A();
}

