#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 16;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	var uLocal_220[3] = { 0, 0, 0 };
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	struct<3> Local_226 = { 0, 0, 0 } ;
	struct<3> Local_229[3];
	float fLocal_239[3] = { 0f, 0f, 0f };
	struct<3> Local_243 = { 0, 0, 0 } ;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	struct<3> Local_257 = { 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	struct<6> Var1;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	struct<3> Var14;
	float fVar17;
	int iVar18[3];
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iVar0 = 0;
	Var1 = 3;
	iVar7 = 0;
	iLocal_51 = 3;
	Local_226 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_229[0 /*3*/] = { 1283.85f, -1622.501f, 53.2255f };
	fLocal_239[0] = 198.9926f;
	Local_229[1 /*3*/] = { 1286.655f, -1627f, 53.225f };
	fLocal_239[1] = 22.3073f;
	Local_229[2 /*3*/] = { 1286.452f, -1624.782f, 53.225f };
	fLocal_239[2] = 49.6773f;
	Var14 = { 1298.391f, -1580.895f, 50.7937f };
	fVar17 = 332.006f;
	Local_243 = { 1277.725f, -1617.897f, 53.2254f };
	if (func_158())
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	else
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	Var1.f_5 = "amb_sit_wall_m";
	if (unk_0x76BF814AB8D4CAB8(11))
	{
		func_146(Var1, iVar13, &iVar18, iVar22);
	}
	if (func_113(Local_226, -1, 0, 0, 0))
	{
		func_110(-1);
	}
	else
	{
		unk_0x810C5D6462DD69E6();
	}
	func_109(1, Var1);
	while (iVar0 != 7)
	{
		unk_0x4EDE34FBADD967A6(0);
		iVar23 = 600;
		if (!unk_0x6E65FD9B611945AD())
		{
			iVar23 = 0;
			iVar0 = 7;
			func_146(Var1, iVar13, &iVar18, iVar22);
		}
		if (!func_108())
		{
			if (func_107())
			{
				iVar23 = 0;
				iVar0 = 7;
				func_146(Var1, iVar13, &iVar18, iVar22);
			}
		}
		unk_0x89FD0BC32FAB9F88("RE_GI", 0);
		switch (iVar0)
		{
			case 0:
				if (func_95())
				{
					iVar23 = 0;
					iVar0 = 7;
					func_146(Var1, iVar13, &iVar18, iVar22);
				}
				if (func_109(1, Var1))
				{
					iVar23 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_84(3))
				{
					func_83(1);
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar23 = 0;
				break;
			
			case 4:
				iVar23 = 0;
				unk_0x1701E0E6A11D6B65(Local_243 - Vector(10f, 30f, 30f), Local_243 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
				unk_0x3E965E42EA49AF68(Local_243 - Vector(50f, 50f, 50f), Local_243 + Vector(100f, 100f, 100f));
				unk_0x3B4B46A2A779D56E(Local_243 - Vector(15f, 15f, 15f), Local_243 + Vector(15f, 15f, 15f), 0, 1);
				unk_0xD2A9C3F486236CC5(&iVar8, 4);
				unk_0xD2A9C3F486236CC5(&iVar8, 1);
				unk_0xD2A9C3F486236CC5(&iVar8, 5);
				unk_0x48E76A4B7B58B77A("GangOne", &uLocal_49);
				unk_0xFB5F4D76105A21B5(5, uLocal_49, joaat("player"));
				iVar22 = unk_0x364B87C5C64BD100(12, Var1.f_4, Var14, fVar17, 1, 1);
				unk_0x40E2910BAF39B1C7(iVar22, 1);
				unk_0x419C9117019F2E5A(Var1.f_4);
				unk_0x641E77554763EF06(iVar22, uLocal_49);
				unk_0x44EB7E24C5D75087(iVar22, 0);
				unk_0xDEA702F2138E0B35(iVar22, 2, 0, 0, 0);
				unk_0xDEA702F2138E0B35(iVar22, 0, 0, 0, 0);
				unk_0xDEA702F2138E0B35(iVar22, 3, 2, 0, 0);
				unk_0xDEA702F2138E0B35(iVar22, 4, 0, 0, 0);
				unk_0xDEA702F2138E0B35(iVar22, 8, 1, 1, 0);
				unk_0x2F51E4FCC3B20959(iVar22, "G_F_Y_Vagos_01_LATINO_MINI_02");
				if (func_82() == 0)
				{
					func_81(&uLocal_55, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
				}
				else if (func_82() == 1)
				{
					func_81(&uLocal_55, 0, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
				}
				else if (func_82() == 2)
				{
					func_81(&uLocal_55, 0, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
				}
				func_81(&uLocal_55, 3, iVar22, "REGIFemale", 0, 1);
				func_81(&uLocal_55, 4, iVar18[2], "REGIMale", 0, 1);
				unk_0xB5746603774C4C9D(iVar22, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				if (!unk_0xE769D9B5158D0F11(uLocal_224))
				{
				}
				iVar24 = 0;
				while (iVar24 <= (iLocal_51 - 1))
				{
					if (!unk_0x31F12808DC47A9E5(iVar18[iVar24]))
					{
						iVar18[iVar24] = unk_0x364B87C5C64BD100(12, Var1[iVar24], Local_229[iVar24 /*3*/], fLocal_239[iVar24], 1, 1);
						unk_0x40E2910BAF39B1C7(iVar18[iVar24], 1);
						unk_0x419C9117019F2E5A(Var1[iVar24]);
						unk_0x641E77554763EF06(iVar18[iVar24], uLocal_49);
						unk_0x764AFC5A3A16C2B0(iVar18[iVar24], 42, 1);
						unk_0x7D154B840BD03D00(iVar18[iVar24], func_80(), -1, 1, 1);
						unk_0x9B78D121254B9A0D(iVar18[iVar24], 2);
						unk_0x95A918B463BA7F35(iVar18[iVar24], 0);
						unk_0x9D02030EF7A1C310(iVar18[iVar24], 13);
						unk_0xD592E5486B0119A2(iVar18[iVar24], unk_0x61E9B3BFA06B017B(200, 500));
					}
					iVar24++;
				}
				unk_0x7D154B840BD03D00(iVar18[0], joaat("weapon_sawnoffshotgun"), 40, 1, 1);
				uLocal_52 = unk_0x3C3438327FFEB224(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!unk_0x0FAE113CE72ED842(iVar18[0]))
				{
					unk_0x4DD2EB945B4192FD(iVar18[0], uLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_b", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!unk_0x0FAE113CE72ED842(iVar18[1]))
				{
					unk_0x4DD2EB945B4192FD(iVar18[1], uLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_c", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!unk_0x0FAE113CE72ED842(iVar18[2]))
				{
					unk_0x4DD2EB945B4192FD(iVar18[2], uLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_d", 4f, -4f, 17, 0, 1148846080, 0);
				}
				unk_0xAB888668498FCC04(uLocal_52, 1);
				iLocal_249 = 1;
				iVar0 = 5;
				break;
			
			case 5:
				unk_0x41C542213B94067C(unk_0x8CFC7D6E1DA5D304());
				unk_0x92745859614C6379(unk_0x8CFC7D6E1DA5D304());
				if (iVar7 < 3)
				{
					if ((((((((func_73(&iVar18, &uVar11, &uVar10, &uVar9, iVar8, bVar12, 1075838976, 0) || func_72(iVar18[0], 0)) || func_72(iVar18[1], 0)) || func_72(iVar18[2], 0)) || unk_0x70832328F090DD95(Local_229[0 /*3*/], 40f, 1)) || unk_0x7A311E12A6C86341(Local_229[0 /*3*/] - Vector(25f, 25f, 25f), Local_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_smokegrenade"), 1)) || unk_0x7A311E12A6C86341(Local_229[0 /*3*/] - Vector(25f, 25f, 25f), Local_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenade"), 1)) || unk_0x7A311E12A6C86341(Local_229[0 /*3*/] - Vector(25f, 25f, 25f), Local_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenadelauncher"), 1)) || unk_0x7A311E12A6C86341(Local_229[0 /*3*/] - Vector(25f, 25f, 25f), Local_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_stickybomb"), 1))
					{
						iVar25 = 0;
						while (iVar25 < iVar18)
						{
							if (!unk_0x0FAE113CE72ED842(iVar18[iVar25]))
							{
								func_70();
								if (!unk_0x0FAE113CE72ED842(iVar18[iVar25]))
								{
									unk_0x267F7A2DFDFFB077(iVar18[iVar25]);
									unk_0xC8BEB049F3BFC0AB(&iLocal_50);
									unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 1000, 2048, 2);
									unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
									unk_0xAFDA7B8F83B2CA58(iLocal_50);
									unk_0x73F69DD57B7E92A9(iVar18[iVar25], iLocal_50);
									unk_0x56C7B20E11B37066(&iLocal_50);
									unk_0x10F31830C95ED2E5(iVar18[iVar25], 1);
								}
							}
							iVar25++;
						}
						if (!unk_0x0FAE113CE72ED842(iVar22))
						{
							if (!unk_0x0FAE113CE72ED842(iVar22))
							{
								unk_0x267F7A2DFDFFB077(iVar22);
								unk_0xC8BEB049F3BFC0AB(&iLocal_50);
								unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 1000, 2048, 2);
								unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
								unk_0xAFDA7B8F83B2CA58(iLocal_50);
								unk_0x73F69DD57B7E92A9(iVar22, iLocal_50);
								unk_0x56C7B20E11B37066(&iLocal_50);
								unk_0x10F31830C95ED2E5(iVar22, 1);
							}
						}
						iLocal_248 = 1;
					}
				}
				else
				{
					iVar26 = 0;
					while (iVar26 < iVar18)
					{
						if (!unk_0x0FAE113CE72ED842(iVar18[iVar26]))
						{
							if (unk_0x1B843A60307EECA4(iVar18[iVar26], unk_0x18F7BE9ACB7D08F4(), 1))
							{
								func_70();
								iVar7 = 6;
							}
						}
						else
						{
							func_70();
							iVar7 = 6;
						}
						iVar26++;
					}
				}
				if (iLocal_247)
				{
					iVar0 = 6;
				}
				if (iLocal_54)
				{
					if (!func_69())
					{
						iVar7 = 6;
					}
				}
				if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					iVar23 = 0;
					iVar0 = 6;
					break;
				}
				if (func_68(Local_226, 150))
				{
					iVar0 = 6;
					break;
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar7, Var1, iVar22, &iVar18, &iVar23, &iVar13) || iLocal_248)
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar23 = 0;
				func_146(Var1, iVar13, &iVar18, iVar22);
				iVar0 = 7;
				break;
				break;
			
			case 7:
				iVar23 = 0;
				break;
		}
		if (iVar0 != 7)
		{
		}
	}
	func_146(Var1, iVar13, &iVar18, iVar22);
}

int func_1(int iParam0, struct<6> Param1, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	if (*iParam0 >= 3)
	{
		if (!unk_0xCF0FA6AB02EA68F7(uLocal_53))
		{
			if ((!unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_257, 9f, 9f, 9f, 0, 1, 0) && !unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 1276.21f, -1613.05f, 53f, 9f, 9f, 9f, 0, 1, 0)) || unk_0x5EC244BCCF9E2AF3(unk_0x18F7BE9ACB7D08F4()))
			{
				*iParam0 = 6;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (func_54(iParam7, iParam8))
			{
				if (bLocal_256)
				{
					*iParam0 = 2;
				}
				if (!unk_0x0FAE113CE72ED842(iParam7))
				{
					unk_0xB05E48165A6F6058(iParam7, 247, 1);
					if (!func_72(iParam7, 0))
					{
						if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam7, 15f, 15f, 15f, 0, 1, 0))
						{
							if ((unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6) && unk_0x6A180E89A0F78BEE(iParam7, unk_0x18F7BE9ACB7D08F4())) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
							{
								if ((unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6) || unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam7)) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam7))
								{
									unk_0x1436BC29BF45FBAE(iParam7);
									unk_0x6016A20BFEAEFE11(iParam7, unk_0x18F7BE9ACB7D08F4(), 5000, 1024, 2);
									func_70();
									unk_0x4EDE34FBADD967A6(1000);
									func_44(&uLocal_55, "REGIAU", "REGIN_ARM", 4, 0, 0, 0);
									iVar0 = 0;
									while (iVar0 < *iParam8)
									{
										if (!unk_0x0FAE113CE72ED842((*iParam8)[iVar0]))
										{
											unk_0x1436BC29BF45FBAE((*iParam8)[iVar0]);
											unk_0x9603FB72C3126396((*iParam8)[iVar0], unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
											unk_0x10F31830C95ED2E5((*iParam8)[iVar0], 1);
										}
										iVar0++;
									}
									if (!unk_0x0FAE113CE72ED842(iParam7))
									{
										unk_0x9603FB72C3126396(iParam7, unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
										unk_0x10F31830C95ED2E5(iParam7, 1);
									}
									iLocal_248 = 1;
								}
							}
						}
					}
					else
					{
						func_42();
						if (!unk_0x0FAE113CE72ED842(iParam7))
						{
							unk_0x267F7A2DFDFFB077(iParam7);
							unk_0x9603FB72C3126396(iParam7, unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
							unk_0x10F31830C95ED2E5(iParam7, 1);
						}
						iLocal_248 = 1;
					}
				}
				if ((unk_0x0FAE113CE72ED842((*iParam8)[0]) || unk_0x0FAE113CE72ED842((*iParam8)[1])) || unk_0x0FAE113CE72ED842((*iParam8)[2]))
				{
					func_41(iParam8, iParam7);
				}
				if (unk_0x0FAE113CE72ED842(iParam7))
				{
					if (iLocal_255 > 2)
					{
						func_41(iParam8, iParam7);
					}
					else
					{
						*iParam0 = 9;
					}
				}
				else if (unk_0x0B90D19A63676F41(iParam7))
				{
					if (unk_0xDFEB6D8BCE2B43F6(iParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 3))
					{
						unk_0xD68991AB42CA7042(iParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", -1056964608);
					}
				}
			}
			else
			{
				*iParam0 = 9;
			}
			break;
		
		case 2:
			unk_0x33DBF622738C10E9(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_243, 0, 0, 255, 255);
			unk_0x7605F5E6C5C7EF01(unk_0x18F7BE9ACB7D08F4(), 1000);
			Local_257 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			if (!unk_0x0FAE113CE72ED842((*iParam8)[1]))
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_220[1]))
				{
				}
				unk_0x9BEA833CAF67289C("RE28_OS");
				uLocal_53 = unk_0x3C3438327FFEB224(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!unk_0x0FAE113CE72ED842((*iParam8)[0]))
				{
					unk_0x4DD2EB945B4192FD((*iParam8)[0], uLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_b", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!unk_0x0FAE113CE72ED842((*iParam8)[1]))
				{
					unk_0x4DD2EB945B4192FD((*iParam8)[1], uLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_c", 4f, -4f, 16, 0, 1148846080, 0);
				}
				if (!unk_0x0FAE113CE72ED842((*iParam8)[2]))
				{
					unk_0x4DD2EB945B4192FD((*iParam8)[2], uLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_d", 4f, -4f, 17, 0, 1148846080, 0);
				}
				*iParam0 = 3;
			}
			break;
		
		case 3:
			*iParam9 = 0;
			if (unk_0xCF0FA6AB02EA68F7(uLocal_53))
			{
				if (unk_0x74CE979B042A1253(uLocal_53) > 0.3f)
				{
					if (!unk_0x0FAE113CE72ED842((*iParam8)[0]))
					{
						unk_0xB05E48165A6F6058((*iParam8)[0], 156, 1);
						unk_0xC8BEB049F3BFC0AB(&iLocal_50);
						unk_0x394F5D18B411ECAD(0, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) - Vector(0f, 0f, 1f), unk_0x18F7BE9ACB7D08F4(), 2f, 0, 3.5f, 5f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 25000, 0);
						unk_0xAFDA7B8F83B2CA58(iLocal_50);
						unk_0x73F69DD57B7E92A9((*iParam8)[0], iLocal_50);
						unk_0x56C7B20E11B37066(&iLocal_50);
						iLocal_50 = 0;
					}
				}
				if (unk_0x74CE979B042A1253(uLocal_53) > 0.35f)
				{
					if (!unk_0x0FAE113CE72ED842((*iParam8)[1]))
					{
						unk_0xB05E48165A6F6058((*iParam8)[1], 156, 1);
						unk_0xC8BEB049F3BFC0AB(&iLocal_50);
						unk_0xF42EAC354CBE764D(0, unk_0x18F7BE9ACB7D08F4(), unk_0x18F7BE9ACB7D08F4(), 2f, 0, 5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 25000, 0);
						unk_0xAFDA7B8F83B2CA58(iLocal_50);
						unk_0x73F69DD57B7E92A9((*iParam8)[1], iLocal_50);
						unk_0x56C7B20E11B37066(&iLocal_50);
						iLocal_50 = 0;
					}
				}
				if (unk_0x74CE979B042A1253(uLocal_53) > 0.275f)
				{
					if (!unk_0x0FAE113CE72ED842((*iParam8)[2]))
					{
						unk_0xB05E48165A6F6058((*iParam8)[2], 156, 1);
						unk_0xC8BEB049F3BFC0AB(&iLocal_50);
						unk_0xF42EAC354CBE764D(0, unk_0x18F7BE9ACB7D08F4(), unk_0x18F7BE9ACB7D08F4(), 2f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 25000, 0);
						unk_0xAFDA7B8F83B2CA58(iLocal_50);
						unk_0x73F69DD57B7E92A9((*iParam8)[2], iLocal_50);
						unk_0x56C7B20E11B37066(&iLocal_50);
						iLocal_50 = 0;
					}
				}
			}
			if (!unk_0x0FAE113CE72ED842((*iParam8)[2]))
			{
				if (unk_0xEA07F07380ABC460((*iParam8)[2], unk_0x18F7BE9ACB7D08F4(), 4f, 4f, 2f, 0, 1, 0))
				{
					func_40(uLocal_224);
					func_40(uLocal_225);
					func_36(iParam8);
					if (!unk_0x0FAE113CE72ED842((*iParam8)[0]))
					{
						unk_0xC8BEB049F3BFC0AB(&iLocal_50);
						unk_0x394F5D18B411ECAD(0, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) - Vector(0f, 0f, 1f), unk_0x18F7BE9ACB7D08F4(), 2f, 0, 3.5f, 5f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 25000, 0);
						unk_0xAFDA7B8F83B2CA58(iLocal_50);
						unk_0x73F69DD57B7E92A9((*iParam8)[0], iLocal_50);
						unk_0x56C7B20E11B37066(&iLocal_50);
						iLocal_50 = 0;
					}
					if (!unk_0x0FAE113CE72ED842((*iParam8)[1]))
					{
						unk_0xC8BEB049F3BFC0AB(&iLocal_50);
						unk_0xF42EAC354CBE764D(0, unk_0x18F7BE9ACB7D08F4(), unk_0x18F7BE9ACB7D08F4(), 2f, 0, 5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 25000, 0);
						unk_0xAFDA7B8F83B2CA58(iLocal_50);
						unk_0x73F69DD57B7E92A9((*iParam8)[1], iLocal_50);
						unk_0x56C7B20E11B37066(&iLocal_50);
						iLocal_50 = 0;
					}
					if (!unk_0x0FAE113CE72ED842((*iParam8)[2]))
					{
						unk_0xC8BEB049F3BFC0AB(&iLocal_50);
						unk_0xF42EAC354CBE764D(0, unk_0x18F7BE9ACB7D08F4(), unk_0x18F7BE9ACB7D08F4(), 2f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x89955D5A0644F92C(0, unk_0x18F7BE9ACB7D08F4(), 25000, 0);
						unk_0xAFDA7B8F83B2CA58(iLocal_50);
						unk_0x73F69DD57B7E92A9((*iParam8)[2], iLocal_50);
						unk_0x56C7B20E11B37066(&iLocal_50);
						iLocal_50 = 0;
					}
					iLocal_251 = unk_0x5AFB8ED811F05E4D();
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (func_34(Param1, (*iParam8)[2], iParam8))
			{
				func_40(uLocal_220[2]);
			}
			else if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
			{
				*iParam0 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_250)
			{
				func_70();
				unk_0x4EDE34FBADD967A6(0);
				func_44(&uLocal_55, "REGIAU", "REGIN_WARN2", 4, 0, 0, 0);
				unk_0x8BB3FA32294185BB(0.5f);
				func_36(iParam8);
				func_41(iParam8, iParam7);
				func_40(uLocal_225);
				func_40(uLocal_224);
				iLocal_250 = 1;
			}
			func_33(iParam8);
			func_32(iParam8);
			if (func_31(iParam8))
			{
				*iParam10 = 1;
				if (!unk_0x0FAE113CE72ED842(iParam7))
				{
					if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam7, 8f, 8f, 8f, 0, 1, 0))
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_SORRY", 4, 0, 0, 0);
					}
				}
				if (!unk_0xE769D9B5158D0F11(uLocal_225))
				{
				}
				while (func_69())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				while (!func_30())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				func_5(-1, 0);
				func_2();
				return 1;
				*iParam0 = 9;
			}
			break;
		
		case 8:
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_2()
{
	func_3();
}

int func_3()
{
	if (func_4(0))
	{
		return 0;
	}
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_4(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_5(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_28();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_27(iParam0))
	{
		func_26(iParam0, iParam1);
		if (!func_25(51))
		{
			func_16("RE_REWARD", 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
		if (func_14(iParam0))
		{
			Global_104551.f_24965.f_2 = 3;
		}
		if (func_13(iParam0, iParam1) != 322)
		{
			func_7(func_13(iParam0, iParam1), Local_46.f_0, Local_46.f_1);
		}
		Global_104539 = iParam1;
		if (Global_104537 == 0)
		{
			if (((Global_104540 == 1 || Global_104540 == 5) || Global_104540 == 11) || Global_104540 == 25)
			{
				func_6(2);
			}
			else if ((Global_104540 == 26 || Global_104540 == 8) || Global_104540 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_6(int iParam0)
{
	Global_104537 = iParam0;
}

void func_7(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_11((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_8();
	}
}

void func_8()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_10(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_9() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
				{
					func_3();
				}
			}
		}
	}
}

int func_9()
{
	return Global_25233;
}

int func_10(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
	}
	return 0;
}

int func_11(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_12();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_12()
{
	return Global_1312736;
}

int func_13(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_17(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9D39145AD645E383(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0x9D39145AD645E383(&(Global_104551.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104551.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_8 = (unk_0x5AFB8ED811F05E4D() + iParam3);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = ((unk_0x5AFB8ED811F05E4D() + iParam3) + iParam4);
		}
		else
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104551.f_20380.f_145++;
		func_18();
	}
}

void func_18()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104551.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[0])
			{
				Global_104551.f_20380.f_146[0] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[1])
			{
				Global_104551.f_20380.f_146[1] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[2])
			{
				Global_104551.f_20380.f_146[2] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_19()
{
	func_20();
	switch (Global_104551.f_2353.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_24(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_23(unk_0x18F7BE9ACB7D08F4());
			if (func_22(iVar0) && (!func_21(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_22(Global_104551.f_2353.f_539.f_4301))
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

bool func_21(int iParam0)
{
	return Global_35859 == iParam0;
}

bool func_22(int iParam0)
{
	return iParam0 < 3;
}

int func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_26(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_24965.f_8[iParam0]), iParam1);
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_28()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xFCA64981FEF7C913(), 64);
	uVar16 = func_29(Var0);
	return uVar16;
}

int func_29(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6E987D62C8535B6E(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_30()
{
	return 1;
}

int func_31(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x31F12808DC47A9E5((*uParam0)[iVar0]))
		{
			if (!unk_0x0FAE113CE72ED842((*uParam0)[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x0FAE113CE72ED842((*uParam0)[iVar0]))
		{
			func_40(uLocal_220[iVar0]);
		}
		iVar0++;
	}
}

void func_33(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iLocal_254 == 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_51 - 1))
		{
			if (!unk_0x0FAE113CE72ED842((*uParam0)[iVar2]))
			{
				iVar0++;
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (iVar0 == 1)
		{
			if (!unk_0x0FAE113CE72ED842((*uParam0)[iVar1]))
			{
				unk_0x273FE09AE985A00A((*uParam0)[iVar1], 0, 1);
				unk_0x95A918B463BA7F35((*uParam0)[iVar1], 0);
				iLocal_254 = 1;
			}
		}
	}
}

int func_34(struct<6> Param0, int iParam6, var uParam7)
{
	switch (iLocal_252)
	{
		case 0:
			if (func_35(iLocal_251, 0))
			{
				if (!func_69())
				{
					if (func_82() == 0)
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_MONEYM", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
					else if (func_82() == 1)
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_MONEYF", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
					else if (func_82() == 2)
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_MONEYT", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
				}
				iLocal_50 = 0;
			}
			break;
		
		case 1:
			if (!unk_0x0FAE113CE72ED842(iParam6))
			{
				if (unk_0x2BBAA45ECDE3DAE2(iParam6, 242628503) == 7 || unk_0xEA07F07380ABC460(iParam6, unk_0x18F7BE9ACB7D08F4(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (!func_69())
					{
						func_44(&uLocal_55, "REGIAU", "REGIN_KILL", 4, 0, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_54 = 1;
						iLocal_252 = 4;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x0FAE113CE72ED842((*uParam7)[2]))
			{
				if (!unk_0x0FAE113CE72ED842((*uParam7)[0]))
				{
					unk_0xC8BEB049F3BFC0AB(&iLocal_50);
					unk_0x73E31FC09D8359DB(0, 700);
					unk_0xA303A4837FBB8DDE(0, Local_229[0 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					unk_0x8A32C8BCE5987E9B(0, fLocal_239[0], 0);
					unk_0x981A584B2E775D45(0, Param0.f_5, "sit_down_idle_01", Local_229[0 /*3*/], 0f, 0f, fLocal_239[0], 1000f, -4f, -1, 1, 0, 2, 0);
					unk_0xAFDA7B8F83B2CA58(iLocal_50);
					unk_0x73F69DD57B7E92A9((*uParam7)[0], iLocal_50);
					unk_0x56C7B20E11B37066(&iLocal_50);
					iLocal_50 = 0;
				}
				if (!unk_0x0FAE113CE72ED842((*uParam7)[1]))
				{
					unk_0xC8BEB049F3BFC0AB(&iLocal_50);
					unk_0x73E31FC09D8359DB(0, 200);
					unk_0xA303A4837FBB8DDE(0, Local_229[1 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
					unk_0xAFDA7B8F83B2CA58(iLocal_50);
					unk_0x73F69DD57B7E92A9((*uParam7)[1], iLocal_50);
					unk_0x56C7B20E11B37066(&iLocal_50);
					iLocal_50 = 0;
				}
				if (!unk_0x0FAE113CE72ED842((*uParam7)[2]))
				{
					unk_0xC8BEB049F3BFC0AB(&iLocal_50);
					unk_0x73E31FC09D8359DB(0, 1000);
					unk_0x660A0833403DB7B4(0, (*uParam7)[0], 0f, -0.5f, 0f, 1f, 10000, 1036831949, 1);
					unk_0x1A564F5D3F5B4476(0, 1193033728, 0);
					unk_0xAFDA7B8F83B2CA58(iLocal_50);
					unk_0x73F69DD57B7E92A9((*uParam7)[2], iLocal_50);
					unk_0x56C7B20E11B37066(&iLocal_50);
					iLocal_50 = 0;
				}
			}
			iLocal_252 = 3;
			break;
		
		case 3:
			if (!func_69())
			{
				if (func_82() == 0)
				{
					func_44(&uLocal_55, "REGIAU", "REGIN_REALM", 4, 0, 0, 0);
				}
				else if (func_82() == 1)
				{
					func_44(&uLocal_55, "REGIAU", "REGIN_REALF", 4, 0, 0, 0);
				}
				else if (func_82() == 2)
				{
					func_44(&uLocal_55, "REGIAU", "REGIN_REALT", 4, 0, 0, 0);
				}
				iLocal_252 = 4;
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x5AFB8ED811F05E4D();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0xE769D9B5158D0F11(uLocal_220[iVar0]))
		{
			if (!unk_0x0FAE113CE72ED842((*uParam0)[iVar0]))
			{
				uLocal_220[iVar0] = func_37((*uParam0)[iVar0], 1, 145);
				unk_0xFC9BA95283E53AFD((*uParam0)[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

var func_37(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_38(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE769D9B5158D0F11(uVar0)) && unk_0xD76CFACBF6A6F21E(&(Global_104551.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x61C2EC67C90074E5(uVar0, &(Global_104551.f_28020[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_38(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(uParam0);
	if (unk_0x978B4E1292EBBE41(uParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_39(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(uParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_39(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(uParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_39(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_39(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_40(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(uParam0))
	{
		unk_0x40D517D991458154(&uParam0);
	}
}

void func_41(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0x0FAE113CE72ED842((*uParam0)[iVar0]))
		{
			unk_0x48B25C02FAB9DC81((*uParam0)[iVar0], unk_0x18F7BE9ACB7D08F4(), 0, 16);
			unk_0x273FE09AE985A00A((*uParam0)[iVar0], 0, 1);
			unk_0x10F31830C95ED2E5((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		unk_0x1436BC29BF45FBAE(iParam1);
		unk_0x9908B4382DC81484(iParam1, -1);
		unk_0x10F31830C95ED2E5(iParam1, 1);
	}
}

void func_42()
{
	Global_14622 = 0;
	func_43();
}

void func_43()
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

bool func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_45(sParam2, iParam3, 0);
}

int func_45(char* sParam0, int iParam1, bool bParam2)
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
					func_43();
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
		if (func_52(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_51();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_46();
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
		func_43();
	}
	return 0;
}

void func_46()
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

void func_47()
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

int func_48()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
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

void func_50()
{
	if (func_21(14))
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
		Global_14453 = func_82();
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

void func_51()
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

bool func_52(int iParam0, int iParam1)
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
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

int func_54(int iParam0, var uParam1)
{
	switch (iLocal_255)
	{
		case 0:
			if (!unk_0x0FAE113CE72ED842(iParam0))
			{
				if ((unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 1272.878f, -1532.84f, 36.4104f, 1339.482f, -1623.636f, 71.4792f, 105.1875f, 0, 1, 0) && !unk_0xD76674575E7BA743(iParam0)) || unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, 15f, 15f, 15f, 0, 1, 0))
				{
					if (!func_108())
					{
						func_58(1);
					}
					if (unk_0xE769D9B5158D0F11(uLocal_224))
					{
						func_40(uLocal_224);
					}
					if (!unk_0xE769D9B5158D0F11(uLocal_225))
					{
						uLocal_225 = func_37(iParam0, 0, 145);
						unk_0x2E9500102925D891(uLocal_225, 0);
					}
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (!unk_0x1995EFF5CCF36477(unk_0x18F7BE9ACB7D08F4()))
						{
							if (unk_0x2A72627520A107B5(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) < 5f)
							{
								if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, 10f, 10f, 10f, 0, 1, 0))
								{
									unk_0x1436BC29BF45FBAE(iParam0);
									unk_0xC8BEB049F3BFC0AB(&iLocal_50);
									unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), -1);
									unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 20000, 1024, 2);
									unk_0xAFDA7B8F83B2CA58(iLocal_50);
									unk_0x73F69DD57B7E92A9(iParam0, iLocal_50);
									unk_0x56C7B20E11B37066(&iLocal_50);
									if (unk_0xE769D9B5158D0F11(uLocal_225))
									{
										unk_0x2E9500102925D891(uLocal_225, 1);
									}
									unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
									if (unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 45f))
									{
										func_42();
										unk_0x4EDE34FBADD967A6(0);
										func_44(&uLocal_55, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
										iLocal_255 = 1;
									}
								}
							}
							else if (iLocal_246 == 0)
							{
								func_44(&uLocal_55, "REGIAU", "REGIN_CAR", 4, 0, 0, 0);
								if (!unk_0x0FAE113CE72ED842(iParam0))
								{
									unk_0xC8BEB049F3BFC0AB(&iLocal_50);
									unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 20000, 1024, 2);
									unk_0xB5746603774C4C9D(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
									unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), -1);
									unk_0xAFDA7B8F83B2CA58(iLocal_50);
									unk_0x73F69DD57B7E92A9(iParam0, iLocal_50);
									unk_0x56C7B20E11B37066(&iLocal_50);
								}
								iLocal_246 = 1;
							}
						}
						else
						{
							func_42();
							unk_0x4EDE34FBADD967A6(0);
							func_44(&uLocal_55, "REGIAU", "REGIN_POLICE", 4, 0, 0, 0);
							if (!unk_0x0FAE113CE72ED842(iParam0))
							{
								unk_0x267F7A2DFDFFB077(iParam0);
								unk_0x9603FB72C3126396(iParam0, unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
								unk_0x10F31830C95ED2E5(iParam0, 1);
								iLocal_247 = 1;
							}
						}
					}
					else if (!unk_0x0FAE113CE72ED842(iParam0))
					{
						if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0xC8BEB049F3BFC0AB(&iLocal_50);
							unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), -1);
							unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 20000, 1024, 2);
							unk_0xAFDA7B8F83B2CA58(iLocal_50);
							unk_0x73F69DD57B7E92A9(iParam0, iLocal_50);
							unk_0x56C7B20E11B37066(&iLocal_50);
							if (unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 45f))
							{
								func_42();
								unk_0x4EDE34FBADD967A6(0);
								func_44(&uLocal_55, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
								iLocal_255 = 1;
							}
						}
					}
				}
			}
			if (!unk_0x0FAE113CE72ED842((*uParam1)[2]))
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_57())
				{
					iLocal_255 = 3;
				}
				else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
				{
					func_56(iParam0, uParam1);
				}
			}
			break;
		
		case 1:
			if (!unk_0x0FAE113CE72ED842((*uParam1)[2]))
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_57())
				{
					iLocal_255 = 3;
				}
				else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
				{
					func_56(iParam0, uParam1);
				}
			}
			if (!unk_0x0FAE113CE72ED842(iParam0) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				unk_0xE54597236B7D8C63(Local_243, 13f, 0, 0, 0, 0, 0, 0);
				unk_0x1436BC29BF45FBAE(iParam0);
				if (!unk_0x0FAE113CE72ED842(iParam0))
				{
					unk_0xC8BEB049F3BFC0AB(&iLocal_50);
					unk_0xA303A4837FBB8DDE(0, Local_243, 2f, 20000, 0.25f, 0, 32.2195f);
					unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), -1, 1024, 2);
					unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), -1);
					unk_0xAFDA7B8F83B2CA58(iLocal_50);
					unk_0x73F69DD57B7E92A9(iParam0, iLocal_50);
					unk_0x56C7B20E11B37066(&iLocal_50);
					iLocal_50 = 0;
					if ((unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6) && unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, 6f, 6f, 6f, 0, 1, 0)) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
					}
				}
				iLocal_255 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0FAE113CE72ED842(iParam0) && !func_69())
			{
				if (func_44(&uLocal_55, "REGIAU", "REGIN_LR1G", 4, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_255 = 3;
				}
			}
			break;
		
		case 3:
			if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_57())
			{
				func_55(iParam0);
				iLocal_255 = 4;
			}
			else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
			{
				func_56(iParam0, uParam1);
			}
			else if (!unk_0x0FAE113CE72ED842(iParam0))
			{
				if (unk_0x83666F9FB8FEBD4B() > 8000 && unk_0x8673F2F1802ADEF7(iParam0, Local_243, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 60f))
					{
						if (func_158())
						{
							unk_0xB5746603774C4C9D(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_a", 2f, -2f, -1, 48, 0, 0, 0, 0);
						}
						else
						{
							unk_0xB5746603774C4C9D(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
						func_44(&uLocal_55, "REGIAU", "REGIN_HERE", 4, 0, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
					}
				}
				if ((unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6) && unk_0x6A180E89A0F78BEE(iParam0, unk_0x18F7BE9ACB7D08F4())) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0))
					{
						func_56(iParam0, uParam1);
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x0FAE113CE72ED842(iParam0))
			{
				unk_0xC8BEB049F3BFC0AB(&iLocal_50);
				unk_0x73E31FC09D8359DB(0, 500);
				unk_0xA303A4837FBB8DDE(0, Local_243, 2f, 20000, 0.25f, 0, 40000f);
				unk_0xAFDA7B8F83B2CA58(iLocal_50);
				unk_0x56C7B20E11B37066(&iLocal_50);
				iLocal_50 = 0;
			}
			func_70();
			unk_0x4EDE34FBADD967A6(0);
			if (!func_69())
			{
				func_44(&uLocal_55, "REGIAU", "REGIN_THRT", 4, 0, 0, 0);
				iLocal_255 = 5;
			}
			break;
		
		case 5:
			func_36(uParam1);
			func_40(uLocal_225);
			bLocal_256 = true;
			return 1;
			break;
	}
	return 1;
}

void func_55(int iParam0)
{
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		unk_0x267F7A2DFDFFB077(iParam0);
		unk_0xC8BEB049F3BFC0AB(&iLocal_50);
		unk_0xA303A4837FBB8DDE(0, 1286.037f, -1623.207f, 53.2297f, 2f, -1, 0.25f, 0, 40000f);
		unk_0x9908B4382DC81484(0, -1);
		unk_0xAFDA7B8F83B2CA58(iLocal_50);
		unk_0x73F69DD57B7E92A9(iParam0, iLocal_50);
		unk_0x56C7B20E11B37066(&iLocal_50);
		iLocal_50 = 0;
		unk_0x44EB7E24C5D75087(iParam0, 1);
		func_40(uLocal_225);
	}
}

void func_56(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!unk_0x0FAE113CE72ED842((*uParam1)[iVar0]) && !unk_0x0FAE113CE72ED842(iParam0))
		{
			if ((unk_0x6A180E89A0F78BEE((*uParam1)[iVar0], unk_0x18F7BE9ACB7D08F4()) || unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), (*uParam1)[iVar0])) || unk_0x6A180E89A0F78BEE(iParam0, unk_0x18F7BE9ACB7D08F4()))
			{
				func_70();
				if (!unk_0x0FAE113CE72ED842((*uParam1)[iVar0]))
				{
					unk_0x267F7A2DFDFFB077((*uParam1)[iVar0]);
					unk_0xC8BEB049F3BFC0AB(&iLocal_50);
					unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 1000, 2048, 2);
					unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
					unk_0xAFDA7B8F83B2CA58(iLocal_50);
					unk_0x73F69DD57B7E92A9((*uParam1)[iVar0], iLocal_50);
					unk_0x56C7B20E11B37066(&iLocal_50);
					unk_0x10F31830C95ED2E5((*uParam1)[iVar0], 1);
				}
				if (!unk_0x0FAE113CE72ED842(iParam0))
				{
					unk_0x267F7A2DFDFFB077(iParam0);
					unk_0xC8BEB049F3BFC0AB(&iLocal_50);
					unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 1000, 2048, 2);
					unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
					unk_0xAFDA7B8F83B2CA58(iLocal_50);
					unk_0x73F69DD57B7E92A9(iParam0, iLocal_50);
					unk_0x56C7B20E11B37066(&iLocal_50);
					unk_0x10F31830C95ED2E5(iParam0, 1);
				}
				iLocal_248 = 1;
			}
		}
		else
		{
			func_70();
			if (!unk_0x0FAE113CE72ED842((*uParam1)[iVar0]))
			{
				unk_0x267F7A2DFDFFB077((*uParam1)[iVar0]);
				unk_0xC8BEB049F3BFC0AB(&iLocal_50);
				unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 1000, 2048, 2);
				unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
				unk_0xAFDA7B8F83B2CA58(iLocal_50);
				unk_0x73F69DD57B7E92A9((*uParam1)[iVar0], iLocal_50);
				unk_0x56C7B20E11B37066(&iLocal_50);
				unk_0x10F31830C95ED2E5((*uParam1)[iVar0], 1);
			}
			if (!unk_0x0FAE113CE72ED842(iParam0))
			{
				unk_0x267F7A2DFDFFB077(iParam0);
				unk_0xC8BEB049F3BFC0AB(&iLocal_50);
				unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), 1000, 2048, 2);
				unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 200f, -1, 0, 0);
				unk_0xAFDA7B8F83B2CA58(iLocal_50);
				unk_0x73F69DD57B7E92A9(iParam0, iLocal_50);
				unk_0x56C7B20E11B37066(&iLocal_50);
				unk_0x10F31830C95ED2E5(iParam0, 1);
			}
			iLocal_248 = 1;
		}
		iVar0++;
	}
}

int func_57()
{
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0xC4B84EB67F78C1F0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
		{
			if (unk_0x1BA9B31667735F34(unk_0x18F7BE9ACB7D08F4(), joaat("rhino")))
			{
				return 1;
			}
		}
	}
	if (unk_0xFD166B55AB97EE31(unk_0x18F7BE9ACB7D08F4()) || unk_0x1995EFF5CCF36477(unk_0x18F7BE9ACB7D08F4()))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (func_62())
	{
		Global_104541 = 1;
		Global_104538 = unk_0x5AFB8ED811F05E4D();
		if (func_14(Global_104540))
		{
			func_59(0);
		}
		unk_0xC5FD44365E5AB875(1, "RE_TITLE");
		if (iParam0 && func_14(Global_104540))
		{
			unk_0x27F308A2D49D3A49();
		}
		return 1;
	}
	return 0;
}

void func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104551.f_24965.f_2 < 3)
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_60(func_61(iParam0), -1);
					Global_104551.f_24965.f_2++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB03A1684359C50A1(Global_104547, 1))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_60(func_61(iParam0), -1);
					Global_104551.f_24965.f_3++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB03A1684359C50A1(Global_104547, 2))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_60(func_61(iParam0), -1);
					Global_104551.f_24965.f_4++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 2);
				}
			}
			break;
	}
}

void func_60(var uParam0, int iParam1)
{
	unk_0x2202872EA73499C3(uParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

char* func_61(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_62()
{
	switch (func_63(&Global_25292, 0, 5, 0, unk_0xBCF9D020FA9C313D()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_63(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_67(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_65(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_64(uParam0, iParam4);
		}
	}
	return 2;
}

void func_64(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_65(int iParam0)
{
	return func_66(iParam0, Global_35859);
}

int func_66(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_65(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_68(struct<3> Param0, int iParam3)
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Param0) > IntToFloat(iParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_69()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	Global_14622 = 0;
	func_71();
}

void func_71()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

int func_72(int iParam0, int iParam1)
{
	if (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x1B843A60307EECA4(iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
	{
		if ((unk_0x7E6B188C8AD32E2D(iParam0) - unk_0x0A088F357EF627CA(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_73(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	
	fParam6 = fParam6;
	if (!bParam5)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (func_74((*uParam0)[iVar0], uParam2, uParam3, iParam4, bParam5, fParam6, iParam7))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_74(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0) && !bParam4)
	{
		if (unk_0xB4FD6D3F49C8B3B4(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0) && !bParam4)
		{
			Var3 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			Var6 = { unk_0x761660F5CE986DC4(iParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0xB03A1684359C50A1(iParam3, 3))
			{
				if (func_72(iParam0, iParam6))
				{
					func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_79("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_78(iParam0);
					return 1;
				}
			}
			if (!unk_0xB03A1684359C50A1(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x70832328F090DD95(Var6, fParam5, 1))
				{
					func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_79("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_78(iParam0);
					return 1;
				}
				if (unk_0xAB3BDB14DC75494C(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_79("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_78(iParam0);
					return 1;
				}
			}
			if (!unk_0xB03A1684359C50A1(iParam3, 2))
			{
				fVar0 = unk_0xEE0ECB73BFB5F8C1(unk_0x18F7BE9ACB7D08F4());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
				{
					if (unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xAAB9BF2904B9E7CE(iParam0, unk_0x18F7BE9ACB7D08F4(), 17))
							{
								func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_79("	aggro Ped knows player is pointing gun\n");
								func_75("		lockOnTimer = ", *uParam2);
								func_79("\n");
								func_75("		time since not LockedOn = ", (unk_0x5AFB8ED811F05E4D() - iLocal_45));
								func_79("\n");
								bVar2 = true;
								if (unk_0x5AFB8ED811F05E4D() > (iLocal_45 + *uParam2))
								{
									func_79("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_78(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xB03A1684359C50A1(iParam3, 0))
			{
				if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					func_79("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_79("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_78(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_45 = unk_0x5AFB8ED811F05E4D();
	}
	return 0;
}

void func_75(char* sParam0, int iParam1)
{
	func_77(sParam0);
	func_76(iParam1);
}

void func_76(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_77(char* sParam0)
{
	if (unk_0x9D39145AD645E383(uParam0, uParam0))
	{
	}
}

void func_78(var uParam0)
{
	unk_0xCC25274D48609FE0(uParam0);
}

void func_79(char* sParam0)
{
	func_77(sParam0);
}

int func_80()
{
	int iVar0;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 5);
	if (iVar0 == 0)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 2)
	{
		return joaat("weapon_pistol");
	}
	else if (iVar0 == 3)
	{
		return joaat("weapon_pistol");
	}
	else
	{
		return joaat("weapon_pistol");
	}
	return joaat("weapon_pistol");
}

void func_81(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

int func_82()
{
	func_20();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_83(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_84(int iParam0)
{
	if (unk_0x6E65FD9B611945AD())
	{
		if (func_85(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_21(6) || func_21(7))
			{
				return 1;
			}
			else
			{
				return func_85(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_65(5))
			{
				if (func_86(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = func_82();
				if (!func_22(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_94()) || Global_103598) || Global_25235) || func_93()) || func_52(8, -1)) || func_92()) || func_91()) || func_90()) || func_89()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_94()) || Global_25235) || func_93()) || func_52(8, -1)) || func_90()) || func_92()) || func_91()) || func_89()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_94()) || Global_103598) || Global_25235) || func_93()) || func_52(8, -1)) || func_90()) || func_92()) || func_91()) || func_89()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_94()) || Global_103598) || Global_25235) || func_93()) || func_52(8, -1)) || func_92()) || func_91()) || func_89()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_94() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_52(8, -1)) || func_89()) || func_88()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_52(8, -1) || func_92()) || func_91()) || func_88()) || func_87())
						{
							return 0;
						}
						if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_94()) || Global_25235) || func_93()) || func_52(8, -1)) || func_91()) || func_90()) || func_89()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_94()) || func_91()) || Global_103598) || Global_25235) || func_93()) || Global_36991) || func_52(8, -1)) || func_90()) || func_88()) || func_89()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_94()) || Global_103598) || Global_25235) || func_93()) || func_52(8, -1)) || func_90()) || func_88()) || func_92()) || func_91()) || func_89())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_87()
{
	return Global_92868.f_1;
}

int func_88()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_89()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

bool func_91()
{
	return Global_92881.f_316 > 0;
}

bool func_92()
{
	return Global_92881.f_315 > 0;
}

var func_93()
{
	return Global_1312854;
}

int func_94()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

int func_95()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_46) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_106())
		{
			return 0;
		}
	}
	if (func_102())
	{
		return 1;
	}
	if (func_96(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_96(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_22(func_82()))
		{
			iVar36 = func_19();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 2) && !unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 3))
				{
					func_97(iVar32, &Var0);
					fVar35 = unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_97(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_98(uParam1, "Abigail1", func_100(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 1:
			func_98(uParam1, "Abigail2", func_100(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 2:
			func_98(uParam1, "Barry1", func_100(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 3:
			func_98(uParam1, "Barry2", func_100(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 4:
			func_98(uParam1, "Barry3", func_100(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 5:
			func_98(uParam1, "Barry3A", func_100(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 6:
			func_98(uParam1, "Barry3C", func_100(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 7:
			func_98(uParam1, "Barry4", func_100(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_99(iParam0), 0, 0);
			break;
		
		case 8:
			func_98(uParam1, "Dreyfuss1", func_100(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 9:
			func_98(uParam1, "Epsilon1", func_100(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 10:
			func_98(uParam1, "Epsilon2", func_100(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 11:
			func_98(uParam1, "Epsilon3", func_100(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 12:
			func_98(uParam1, "Epsilon4", func_100(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 13:
			func_98(uParam1, "Epsilon5", func_100(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 14:
			func_98(uParam1, "Epsilon6", func_100(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 15:
			func_98(uParam1, "Epsilon7", func_100(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 16:
			func_98(uParam1, "Epsilon8", func_100(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 17:
			func_98(uParam1, "Extreme1", func_100(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 18:
			func_98(uParam1, "Extreme2", func_100(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 19:
			func_98(uParam1, "Extreme3", func_100(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 20:
			func_98(uParam1, "Extreme4", func_100(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 21:
			func_98(uParam1, "Fanatic1", func_100(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_99(iParam0), 1, 0);
			break;
		
		case 22:
			func_98(uParam1, "Fanatic2", func_100(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_99(iParam0), 1, 0);
			break;
		
		case 23:
			func_98(uParam1, "Fanatic3", func_100(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_99(iParam0), 0, 1);
			break;
		
		case 24:
			func_98(uParam1, "Hao1", func_100(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_99(iParam0), 0, 1);
			break;
		
		case 25:
			func_98(uParam1, "Hunting1", func_100(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 26:
			func_98(uParam1, "Hunting2", func_100(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 27:
			func_98(uParam1, "Josh1", func_100(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 28:
			func_98(uParam1, "Josh2", func_100(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 29:
			func_98(uParam1, "Josh3", func_100(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 30:
			func_98(uParam1, "Josh4", func_100(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 31:
			func_98(uParam1, "Maude1", func_100(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 32:
			func_98(uParam1, "Minute1", func_100(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 33:
			func_98(uParam1, "Minute2", func_100(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 34:
			func_98(uParam1, "Minute3", func_100(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 35:
			func_98(uParam1, "MrsPhilips1", func_100(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 36:
			func_98(uParam1, "MrsPhilips2", func_100(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 37:
			func_98(uParam1, "Nigel1", func_100(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 38:
			func_98(uParam1, "Nigel1A", func_100(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 39:
			func_98(uParam1, "Nigel1B", func_100(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_99(iParam0), 1, 1);
			break;
		
		case 40:
			func_98(uParam1, "Nigel1C", func_100(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_99(iParam0), 1, 1);
			break;
		
		case 41:
			func_98(uParam1, "Nigel1D", func_100(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_99(iParam0), 1, 1);
			break;
		
		case 42:
			func_98(uParam1, "Nigel2", func_100(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 43:
			func_98(uParam1, "Nigel3", func_100(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 1, 1);
			break;
		
		case 44:
			func_98(uParam1, "Omega1", func_100(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 45:
			func_98(uParam1, "Omega2", func_100(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 46:
			func_98(uParam1, "Paparazzo1", func_100(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 47:
			func_98(uParam1, "Paparazzo2", func_100(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 48:
			func_98(uParam1, "Paparazzo3", func_100(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 49:
			func_98(uParam1, "Paparazzo3A", func_100(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 50:
			func_98(uParam1, "Paparazzo3B", func_100(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 51:
			func_98(uParam1, "Paparazzo4", func_100(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 52:
			func_98(uParam1, "Rampage1", func_100(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 54:
			func_98(uParam1, "Rampage3", func_100(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 55:
			func_98(uParam1, "Rampage4", func_100(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 56:
			func_98(uParam1, "Rampage5", func_100(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_99(iParam0), 0, 0);
			break;
		
		case 53:
			func_98(uParam1, "Rampage2", func_100(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_99(iParam0), 1, 0);
			break;
		
		case 57:
			func_98(uParam1, "TheLastOne", func_100(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 58:
			func_98(uParam1, "Tonya1", func_100(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 59:
			func_98(uParam1, "Tonya2", func_100(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 60:
			func_98(uParam1, "Tonya3", func_100(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 61:
			func_98(uParam1, "Tonya4", func_100(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		case 62:
			func_98(uParam1, "Tonya5", func_100(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_99(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_98(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_100(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_101(iParam0) };
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_101(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_102()
{
	if (func_105() && !func_106())
	{
		return 1;
	}
	if (func_104() && func_103())
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return Global_104269 > 0;
}

int func_104()
{
	if (Global_89896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_106()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x05C1AD623B6C5E86() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_107()
{
	if (!func_65(5))
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_106())
		{
			return 0;
		}
	}
	if (func_96(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	if ((Global_104540 == func_28() && unk_0xD436A6CEB14BAC66()) && Global_104541)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, struct<5> Param1, var uParam6)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			unk_0x9016574B77A748EE(Param1[iVar0]);
			iVar0++;
		}
		unk_0x9016574B77A748EE(Param1.f_4);
		unk_0x831CD0FBFB26EC7E("random@gang_intimidation@");
		unk_0x6662DABCFF1B4AD5("RE28_OS");
		if (!unk_0xEDFE27D1AEA0EA7F(Param1.f_4))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			if (!unk_0xEDFE27D1AEA0EA7F(Param1[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		if (unk_0x028356968FDD2DF2("random@gang_intimidation@"))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			unk_0x419C9117019F2E5A(Param1[iVar0]);
			iVar0++;
		}
		unk_0x419C9117019F2E5A(Param1.f_4);
	}
	return 0;
}

void func_110(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_28();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_112(iParam0);
	unk_0x0A022B047163ACAE(0);
	unk_0xD42F50467E7AD46D(1);
	Global_104537 = 0;
	func_111();
}

void func_111()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x116D235ABEF5CE46(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)), 1);
		}
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
	}
}

void func_112(int iParam0)
{
	Global_104540 = iParam0;
}

int func_113(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142815)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_28();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_145())
		{
			return 0;
		}
	}
	Local_46 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Var1 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_106())
			{
				return 0;
			}
		}
		if (!Global_104551.f_9055)
		{
			return 0;
		}
		if (func_4(0))
		{
			return 0;
		}
		if (func_102())
		{
			return 0;
		}
		if (func_144())
		{
			return 0;
		}
		if (Global_104540 != -1)
		{
			return 0;
		}
		if (func_22(func_82()))
		{
			if (func_96(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !bParam6)
		{
			if ((Var1.f_2 - Local_46.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_143(iParam3))
		{
			return 0;
		}
		if (func_22(func_82()))
		{
			if (func_142(func_82()) == 4 || func_142(func_82()) == 5)
			{
				return 0;
			}
		}
		if (func_22(func_82()))
		{
			if (!func_141(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_140(Global_104551.f_24965.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x5AFB8ED811F05E4D() - Global_104542) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_139())
		{
			return 0;
		}
		if (unk_0xEFD3E4A202A0D9DA())
		{
			return 0;
		}
		if (unk_0xD436A6CEB14BAC66())
		{
			return 0;
		}
		if (!func_86(4))
		{
			return 0;
		}
		if (!func_65(5))
		{
			return 0;
		}
		if (func_138(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xB79050CDE709F080(unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4())))
		{
			if ((unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(377.153f, -717.567f, 10.0536f) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(320.9934f, 265.2515f, 82.1221f)) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_138(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_143(30) && !func_138(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_22(func_82()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_104551.f_2353.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104551.f_2353.f_539.f_2276[iVar4];
				if (func_137(iVar8))
				{
					if (func_115(iVar4))
					{
						if (!func_114(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var5) < (210f * 210f))
							{
								if (func_82() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_114(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104551.f_2353.f_539.f_2276[iParam0];
	return func_116(iVar0);
}

int func_116(int iParam0)
{
	return func_117(iParam0, 1);
}

int func_117(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_137(iParam0))
	{
		return 0;
	}
	func_118(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_118(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_119(func_130(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_119(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_129(iParam0, iParam1))
	{
		iVar0 = func_128(iParam1);
		iVar1 = func_126(iParam0);
		iVar2 = (func_126(iParam0) - func_126(iParam1));
		iVar3 = (func_128(iParam0) - func_128(iParam1));
		iVar4 = (func_125(iParam0) - func_125(iParam1));
		iVar5 = (func_124(iParam0) - func_124(iParam1));
		iVar6 = (func_123(iParam0) - func_123(iParam1));
		iVar7 = (func_122(iParam0) - func_122(iParam1));
	}
	else
	{
		iVar0 = func_128(iParam0);
		iVar1 = func_126(iParam1);
		iVar2 = (func_126(iParam1) - func_126(iParam0));
		iVar3 = (func_128(iParam1) - func_128(iParam0));
		iVar4 = (func_125(iParam1) - func_125(iParam0));
		iVar5 = (func_124(iParam1) - func_124(iParam0));
		iVar6 = (func_123(iParam1) - func_123(iParam0));
		iVar7 = (func_122(iParam1) - func_122(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_121(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_120(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_120(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_121(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_122(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_123(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_124(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_125(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_126(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_127(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_127(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_128(int iParam0)
{
	return iParam0 & 15;
}

int func_129(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_137(iParam1) || !func_137(iParam0))
	{
		return 1;
	}
	iVar0 = func_126(iParam0);
	iVar1 = func_126(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_128(iParam0);
	iVar1 = func_128(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_125(iParam0);
	iVar1 = func_125(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	iVar1 = func_124(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_123(iParam0);
	iVar1 = func_123(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_122(iParam0);
	iVar1 = func_122(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_130()
{
	var uVar0;
	
	func_136(&uVar0, unk_0xB093145A4ED05C87());
	func_135(&uVar0, unk_0x4BF279EB036481A0());
	func_134(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_133(&uVar0, unk_0x518720E0DE404FFC());
	func_132(&uVar0, unk_0x5E3E9A684A609866());
	func_131(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_131(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_132(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_133(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_128(*uParam0);
	iVar1 = func_126(*uParam0);
	if (iParam1 < 1 || iParam1 > func_121(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_135(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_122(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_123(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_124(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_126(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_128(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_125(iParam0);
	if (iVar5 < 1 || iVar5 > func_121(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_138(int iParam0, int iParam1)
{
	if (unk_0xB03A1684359C50A1(Global_104551.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	func_50();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_140(int iParam0)
{
	return func_129(func_130(), iParam0);
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_82();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_142(int iParam0)
{
	if (!func_22(iParam0))
	{
		return 7;
	}
	return Global_104551.f_7658.f_919[iParam0];
}

bool func_143(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_145())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_144()
{
	var uVar0;
	
	if (Global_25383)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x4983F8C51A0C0AF3(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_145()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_146(struct<6> Param0, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	
	if (iParam6 == 0)
	{
	}
	if (iLocal_249)
	{
		unk_0x6D88D1D62502CEFC();
		unk_0x3B4B46A2A779D56E(Local_243 - Vector(10f, 10f, 10f), Local_243 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x8BB3FA32294185BB(1f);
		func_40(uLocal_220[0]);
		func_40(uLocal_220[1]);
		func_40(uLocal_220[2]);
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			if (!unk_0x0FAE113CE72ED842((*iParam7)[iVar0]))
			{
			}
			iVar0++;
		}
		if (!unk_0x0FAE113CE72ED842(iParam8))
		{
			unk_0x40E2910BAF39B1C7(iParam8, 0);
		}
		func_83(0);
		func_109(0, Param0);
	}
	func_147(-1);
	unk_0x810C5D6462DD69E6();
}

void func_147(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_28();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_108())
	{
		func_151(iParam0);
		unk_0xC5FD44365E5AB875(0, 0);
		Global_104542 = unk_0x5AFB8ED811F05E4D();
		func_150(30000);
		StringCopy(&cVar0, func_149(Global_104540, 1), 64);
		if (func_27(Global_104540) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104539, 64);
		}
		unk_0x50686B0B250B8042(&cVar0, Global_104537, (unk_0x5AFB8ED811F05E4D() - Global_104538), 0);
	}
	else if (unk_0xB03A1684359C50A1(Global_104547, 0) && Global_104551.f_24965.f_2 < 3)
	{
		unk_0x62148293B793073B(&Global_104547, 0);
	}
	func_148(&Global_25292);
	Global_104541 = 0;
	func_112(-1);
}

void func_148(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35821)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35820 = 0;
	Global_35822 = 0;
	Global_35859 = 15;
	Global_55898 = 0;
	Global_55899 = 0;
}

char* func_149(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_150(int iParam0)
{
	Global_36410 = (unk_0x5AFB8ED811F05E4D() + iParam0);
}

void func_151(int iParam0)
{
	func_152(iParam0, 0, func_157(iParam0));
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_130();
	func_155(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_154(iParam0, &uVar0);
	Var1 = { func_153(&uVar0) };
}

struct<16> func_153(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_124(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_123(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_122(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_125(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_128(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_126(*uParam0), 64);
	return Var0;
}

void func_154(int iParam0, var uParam1)
{
	Global_104551.f_24965.f_43[iParam0] = *uParam1;
}

void func_155(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_126(*uParam0);
	iVar1 = func_128(*uParam0);
	iVar2 = func_125(*uParam0);
	iVar3 = func_124(*uParam0);
	iVar4 = func_123(*uParam0);
	iVar5 = func_122(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_121(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_121(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_156(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_156(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_136(uParam0, iParam1);
	func_135(uParam0, iParam2);
	func_134(uParam0, iParam3);
	func_132(uParam0, iParam5);
	func_133(uParam0, iParam4);
	func_131(uParam0, iParam6);
}

int func_157(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_158()
{
	if (unk_0xB03A1684359C50A1(unk_0x61E9B3BFA06B017B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

