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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	float fLocal_92 = 0f;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int* iLocal_106 = NULL;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	bool bLocal_117 = 0;
	var uLocal_118 = 1;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 16;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	struct<170> Local_286 = { 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int* iLocal_461 = NULL;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_44 = { 500f, 500f, 500f };
	iLocal_95 = -1;
	iLocal_96 = 2050;
	iLocal_97 = -1;
	iLocal_98 = -1;
	sLocal_100 = "CC_SUBSTR";
	fLocal_101 = 125f;
	iLocal_102 = 1;
	iLocal_104 = 262;
	fLocal_116 = 4f;
	bLocal_117 = true;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	iLocal_85 = iLocal_85;
	Local_68 = { Local_68 };
	bVar0 = false;
	if (unk_0xC968670BFACE42D9(114))
	{
		func_158(1);
	}
	iLocal_84 = unk_0x43A66C31C68491C0(unk_0x4F8644AF03D0E0D6());
	iLocal_94 = 0;
	func_156(&Global_95828, 0);
	func_150();
	unk_0x6F2135B6129620C1(true);
	if (func_149(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_30775)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_149(uLocal_93, 8))
	{
		if (!func_147(iLocal_99))
		{
			if (func_146(0, iLocal_98))
			{
				func_158(0);
			}
			else
			{
				func_158(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!func_146(0, iLocal_98))
		{
			bLocal_117 = false;
		}
	}
	if (func_149(uLocal_93, 8388608))
	{
		func_158(1);
	}
	if (func_149(uLocal_93, 524288) && (func_145() && !func_144()))
	{
		func_158(1);
	}
	if (unk_0x2C83A9DA6BFFC4F9(unk_0x8A1C8B1738FFE87E()) > 1 && !func_149(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			func_143(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_142(10);
	}
	if (!unk_0x7239B21A38F536BA(iLocal_85))
	{
		if (func_141() && !Global_96220)
		{
			func_140(1);
		}
		else if (Global_96220)
		{
		}
	}
	while (true)
	{
		if (Global_3)
		{
			func_158(1);
		}
		iLocal_84 = unk_0x43A66C31C68491C0(unk_0x4F8644AF03D0E0D6());
		if (func_149(uLocal_93, 1048576))
		{
			if (unk_0x5F9532F3B5CC2551(iLocal_84))
			{
				func_158(1);
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_84) && !unk_0x5F9532F3B5CC2551(iLocal_84))
		{
			Local_86 = { unk_0x3FEF770D40960D5A(iLocal_84, true) };
			fLocal_92 = unk_0xB7A628320EFF8E47(Local_86, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_92 = fLocal_92;
			Local_110 = { Local_86 };
			Local_113 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_110.f_2 = 0f;
			Local_113.f_2 = 0f;
			fLocal_109 = unk_0xB7A628320EFF8E47(Local_110, Local_113);
			switch (iLocal_94)
			{
				case 0:
					if (func_147(iLocal_99) || (func_149(uLocal_93, 16) && !func_149(uLocal_93, 524288)))
					{
						iLocal_97 = -1;
						func_135();
						func_142(1);
					}
					else
					{
						if (fLocal_109 > (fLocal_101 * fLocal_101))
						{
							if (iLocal_104 != 262)
							{
								func_143(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
							func_142(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_133())
					{
						iLocal_102 = iLocal_102;
						func_142(3);
					}
					else
					{
						func_135();
					}
					break;
				
				case 3:
					if (unk_0xCA97246103B63917())
					{
						func_158(1);
						return;
					}
					if (!func_147(iLocal_99))
					{
						if (!func_149(uLocal_93, 8))
						{
							bVar1 = true;
							if (unk_0x0C515FAB3FF9EA92(&(Global_89784.f_3), &Local_68))
							{
								Local_68 = { Local_52 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_158(0);
								break;
							}
						}
					}
					if (!func_149(uLocal_93, 4))
					{
						func_131();
						func_130(&uLocal_93, 4);
					}
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_89818)
					{
						if (iLocal_104 != 262)
						{
							if (func_129(6) && !func_128(iLocal_104))
							{
							}
							else
							{
								func_143(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
						}
						func_142(10);
					}
					else
					{
						Local_68 = { Local_52 };
						bVar2 = !func_149(uLocal_93, 64);
						func_156(&uLocal_93, 128);
						if (!func_127(3) && !Global_89818)
						{
							if (func_149(uLocal_93, 2097152))
							{
								if ((!func_149(uLocal_93, 1) || !unk_0x7239B21A38F536BA(func_126())) && !Global_89818)
								{
									func_142(10);
									break;
								}
							}
						}
						if (func_149(uLocal_93, 524288) && (func_145() && !func_144()))
						{
							func_158(1);
						}
						if (func_125())
						{
							func_158(1);
						}
						if ((!func_117(6) || Global_96220) || func_116())
						{
							bVar2 = false;
						}
						if (!bLocal_117)
						{
							func_114(&uLocal_93, 128);
							bVar2 = false;
						}
						if (func_149(uLocal_93, 1))
						{
							if (!func_113())
							{
								func_114(&uLocal_93, 128);
								bVar2 = false;
							}
						}
						if (func_112(1))
						{
							bVar2 = false;
						}
						if (Global_68067)
						{
							bVar2 = false;
						}
						if (func_111())
						{
							bVar2 = false;
						}
						if (unk_0xD9D2CFFF49FAB35F())
						{
							bVar2 = false;
						}
						if (func_110() || func_109(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
						{
							bVar2 = false;
						}
						if (func_108(0) || func_107())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0x5F9532F3B5CC2551(iLocal_85))
							{
								func_114(&uLocal_93, 128);
								bVar2 = false;
							}
							else if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								func_114(&uLocal_93, 128);
								bVar2 = false;
							}
							else
							{
								iVar3 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
								if (bVar2)
								{
									if (iLocal_85 == iVar3)
									{
									}
									else
									{
										func_114(&uLocal_93, 128);
										bVar2 = false;
									}
								}
							}
							if (bVar2)
							{
								unk_0xEDE476E5EE29EDB1(0, 51);
								if (func_106(iLocal_85))
								{
									if (iLocal_95 == -1)
									{
										func_105(&iLocal_95, 4, sLocal_100, 0, 0);
										func_114(&uLocal_93, 2048);
									}
									else if (!func_149(uLocal_93, 2048) || !unk_0x4D79439A6B55AC67())
									{
										func_104(&iLocal_95);
										func_156(&uLocal_93, 2048);
									}
									if (func_102(iLocal_95, 1))
									{
										sLocal_100 = sLocal_100;
										func_104(&iLocal_95);
										func_156(&uLocal_93, 2048);
										unk_0x6EB5F71AA68F2E8E(&Local_68);
										unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 56);
										func_142(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									func_104(&iLocal_95);
									func_156(&uLocal_93, 2048);
									unk_0x6EB5F71AA68F2E8E(&Local_68);
									func_142(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_95 != -1)
							{
								func_104(&iLocal_95);
								func_156(&uLocal_93, 2048);
								unk_0x8DFCED7A656F8802(false);
							}
						}
					}
					func_49();
					break;
				
				case 5:
					unk_0xEDE476E5EE29EDB1(0, 51);
					if (unk_0xE6CC9F3BA0FB9EF1(&Local_68))
					{
						if (iLocal_95 != -1)
						{
							func_104(&iLocal_95);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_149(uLocal_93, 1))
						{
							if (func_129(6) || func_129(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_46(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
							{
								unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
							}
							func_45();
							if (Global_35953)
							{
								func_36(unk_0xD80958FC74E988A6());
							}
							iLocal_51 = func_27();
							func_156(&uLocal_93, 4);
							func_26();
							func_114(&uLocal_93, 2);
							func_142(6);
							func_22(&iLocal_106);
							if (iLocal_98 != -1)
							{
								func_21(iLocal_98);
								func_18(func_20(iLocal_98), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_15();
						}
						else if (iVar4 == 0)
						{
							func_142(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_149(Global_95828, 262144))
					{
						func_156(&Global_95828, 262144);
						func_14();
					}
					if (func_149(uLocal_93, 2097152))
					{
						if (!func_127(3) && !unk_0x46E9AE36D8FA6417(iLocal_51))
						{
							func_142(10);
						}
					}
					if (!unk_0x46E9AE36D8FA6417(iLocal_51))
					{
						unk_0x69DEA3E9DB727B4C(unk_0xF2DB717A73826179((func_10(&iLocal_106) * 1000f)), iLocal_98, 0);
						func_9(&iLocal_106);
						func_156(&uLocal_93, 256);
						func_8();
						if (bVar0)
						{
							func_156(&uLocal_93, 2);
						}
						else if (func_149(uLocal_93, 2))
						{
							if (func_149(Global_95828, 0))
							{
								func_7(&iLocal_97);
								iLocal_97 = -1;
								func_156(&uLocal_93, 2);
							}
							else
							{
								func_7(&iLocal_97);
								iLocal_97 = -1;
								func_156(&uLocal_93, 2);
							}
						}
						func_142(0);
						if (iLocal_98 != -1)
						{
							if (func_149(Global_95828, 0))
							{
								unk_0xC900596A63978C1D(func_20(iLocal_98), 0, Global_89821, 0);
								func_6(func_20(iLocal_98), 0, Global_89821, 1, 0);
							}
							else
							{
								unk_0xC900596A63978C1D(func_20(iLocal_98), 0, Global_89821, 0);
								func_6(func_20(iLocal_98), 0, Global_89821, 0, 0);
							}
						}
						func_5();
						func_156(&Global_95828, 0);
						if (func_149(uLocal_93, 16777216))
						{
							func_158(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_97173.f_7311)
							{
								if (!func_146(0, iLocal_98))
								{
									func_158(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_142(0);
					break;
				
				case 10:
					func_158(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							func_143(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_142(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_104 != 262)
					{
						func_143(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						func_104(&iLocal_95);
					}
					if (!unk_0xCA042B6957743895(sLocal_100))
					{
						if (func_1(sLocal_100))
						{
							unk_0x8DFCED7A656F8802(true);
						}
					}
					func_142(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (func_147(iLocal_99) && func_146(0, iLocal_98))
									{
										func_150();
										if (iLocal_104 != 262)
										{
											func_143(iLocal_104, 1, 0);
										}
										func_142(0);
									}
								}
							}
							else if (iLocal_105 == 0)
							{
								if (fLocal_109 > (fLocal_101 * fLocal_101))
								{
									if (iLocal_104 != 262)
									{
										func_143(iLocal_104, 1, 0);
										iLocal_104 = 262;
									}
									func_142(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_150();
									if (iLocal_104 != 262)
									{
										func_143(iLocal_104, 1, 0);
									}
									func_142(0);
								}
							}
						}
						else
						{
							func_143(iLocal_104, 1, 0);
						}
					}
					else
					{
						iLocal_103++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_2()
{
	func_3(&uLocal_118);
	unk_0x629BFA74418D6239(&Local_286);
	unk_0x2595DD4236549CE3(&(Local_286.f_3));
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xE532F5D78798DAAB((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (iLocal_120 == 0)
	{
		unk_0x0A436B8643716D14();
	}
	unk_0xB9EFD5C25018725A("DisableFlightMusic", false);
}

void func_6(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (unk_0xCA042B6957743895(&Global_87259))
	{
		return;
	}
	if (unk_0x1E34710ECD4AB0EB(sParam0, &Global_87259, false, -1) != 0)
	{
		return;
	}
	unk_0x7C4BB33A8CED7324(sParam0, iParam1, iParam2, bParam3, bParam4, Global_84366);
	StringCopy(&Global_87259, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34871)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

void func_8()
{
	char cVar0[24];
	
	if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
	{
		unk_0x1DCCACDCFC569362(StackVal, 0, 0, 0);
	}
	else if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

void func_9(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_10(int* iParam0)
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11() - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 1);
}

int func_14()
{
	return 1;
}

void func_15()
{
	func_16(&iLocal_460, Local_286.f_0);
}

void func_16(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (unk_0xA7A932170592B50E(*iParam0) && unk_0xDFB2B516207D3534(*iParam0))
	{
		Var6 = { unk_0xBAC038F7459AE5AE(*iParam0) };
		Var0 = { unk_0x7D304C1C955E3E12(*iParam0, 2) };
		if (unk_0x4C241E39B23DF959(iParam1, false))
		{
			Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
		}
		fVar9 = unk_0x8927CBF9D22261A4((Var3.f_2 - Var6.f_2), unk_0xF1B760881820C952(Var3, Var6, false));
		if (fVar9 > Var0.f_0)
		{
			Var0.f_0 = func_17(Var0.f_0, fVar9, 0.07f);
		}
		unk_0x85973643155D0B07(*iParam0, Var0, 2);
	}
}

float func_17(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_18(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xCA042B6957743895(&Global_87259))
	{
		unk_0x7C4BB33A8CED7324(&Global_87259, 0, 0, false, true, false);
		StringCopy(&Global_87259, "", 64);
	}
	StringCopy(&Global_87259, sParam0, 64);
	unk_0xC19A2925C34D2231(sParam0, iParam1, iParam2, func_19(0));
}

bool func_19(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_21(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
	{
		uVar0 = iParam0;
		unk_0x1DCCACDCFC569362(8, &uVar0, 1, 1);
	}
	else if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_22(int* iParam0)
{
	if (!func_13(iParam0))
	{
		func_25(iParam0);
	}
	else
	{
		func_23(iParam0);
	}
}

void func_23(int* iParam0)
{
	func_24(iParam0, 0f);
}

void func_24(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_11() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_25(int* iParam0)
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
}

void func_26()
{
	if (unk_0x7239B21A38F536BA(Local_286.f_0) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
	}
	if (unk_0xDFB2B516207D3534(iLocal_460))
	{
		unk_0x026FB97D0A425F84(iLocal_460, false);
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		unk_0x865908C81A2C22E9(iLocal_460, false);
	}
	func_2();
}

int func_27()
{
	int iVar0;
	
	Global_97173.f_17188 = iLocal_120;
	switch (iLocal_120)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 9:
		case 10:
		case 11:
			func_35();
			break;
		
		case 7:
			func_35();
			func_28(65, 0, 1, 1, 0);
			func_28(66, 0, 1, 1, 0);
			break;
		
		default:
			break;
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_52, &Local_286, 170, iLocal_96);
	unk_0xC90D2DCACD56184C(&Local_52);
	return iVar0;
}

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_68067)
		{
			Global_2421967.f_73.f_226[iParam0] = iParam1;
		}
		else
		{
			Global_97173.f_5518.f_226[iParam0] = iParam1;
		}
		Global_31959[iParam0] = iParam2;
		Global_32158[iParam0] = 1;
		func_31(iParam0, bParam3, iParam4, 0);
		func_29(iParam0, iParam1);
	}
}

void func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x1D6650420CEC9D3B("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
			}
			else
			{
				unk_0x1D6650420CEC9D3B("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0xF3638DAE8C4045E1("HEIST_SWEATSHOP_ZONES", false, false);
			}
			else
			{
				unk_0xF3638DAE8C4045E1("HEIST_SWEATSHOP_ZONES", true, false);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_30(0, 0);
			}
			else
			{
				func_30(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x1D6650420CEC9D3B("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
			}
			else
			{
				unk_0x1D6650420CEC9D3B("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x399D2D3B33F1B8EB("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
				unk_0x399D2D3B33F1B8EB("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
				unk_0x399D2D3B33F1B8EB("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
				unk_0x399D2D3B33F1B8EB("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
			}
			break;
	}
}

void func_30(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_95815, iParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_95815, iParam0);
	}
	Global_95814 = 1;
}

bool func_31(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	int iVar98;
	bool bVar99;
	int iVar100;
	
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_34(&Var3, iParam0);
	if (func_32())
	{
		iVar1 = Global_97173.f_5518.f_226[iParam0];
	}
	else
	{
		iVar1 = Global_2421967.f_73.f_226[iParam0];
	}
	iVar2 = Global_32357[iParam0];
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A()) != unk_0xD24D37CC275948CC("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_31959[iParam0] && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var3, true) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || unk_0x90A09F3A45FED688(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0xB16FCE9DDC7BA182())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0xA41A05B6CB741B85() && (!unk_0xD9D2CFFF49FAB35F() || unk_0x470555300D10B2A5() != 5))
		{
			bVar99 = false;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0xD9E3006FB3CBD765(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x8A97BCA30A0CE478(Var3, 10f, Var3.f_4[iVar2], true);
						}
						Global_33553[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0xD24D37CC275948CC(&(Var3.f_8[1 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[1 /*8*/])) != unk_0xD24D37CC275948CC(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x88A741E44A2B3495(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xEE6C5AD3ECE0A82D(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("REMOVE_ALL_STATES")) && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x88A741E44A2B3495(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xEE6C5AD3ECE0A82D(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0xD24D37CC275948CC(&(Var3.f_8[0 /*8*/])) != unk_0xD24D37CC275948CC(""))
						{
							if (!unk_0x88A741E44A2B3495(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x41B4893843BBDB74(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0xD24D37CC275948CC(&(Var3.f_34)) != unk_0xD24D37CC275948CC(""))
						{
							if (!unk_0x88A741E44A2B3495(&(Var3.f_34)))
							{
								unk_0x41B4893843BBDB74(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0xD24D37CC275948CC(&(Var3.f_34)) != unk_0xD24D37CC275948CC(""))
						{
							if (unk_0x88A741E44A2B3495(&(Var3.f_34)))
							{
								unk_0xEE6C5AD3ECE0A82D(&(Var3.f_34));
							}
						}
						if (unk_0xD24D37CC275948CC(&(Var3.f_8[0 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[0 /*8*/])) != unk_0xD24D37CC275948CC(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x88A741E44A2B3495(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xEE6C5AD3ECE0A82D(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("REMOVE_ALL_STATES")) && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x88A741E44A2B3495(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xEE6C5AD3ECE0A82D(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0xD24D37CC275948CC(&(Var3.f_8[1 /*8*/])) != unk_0xD24D37CC275948CC(""))
						{
							if (!unk_0x88A741E44A2B3495(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x41B4893843BBDB74(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0xD24D37CC275948CC(&(Var3.f_34)) != unk_0xD24D37CC275948CC(""))
						{
							if (unk_0x88A741E44A2B3495(&(Var3.f_34)))
							{
								unk_0xEE6C5AD3ECE0A82D(&(Var3.f_34));
							}
						}
						if (unk_0xD24D37CC275948CC(&(Var3.f_8[0 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[0 /*8*/])) != unk_0xD24D37CC275948CC(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x88A741E44A2B3495(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xEE6C5AD3ECE0A82D(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0xD24D37CC275948CC(&(Var3.f_8[1 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[1 /*8*/])) != unk_0xD24D37CC275948CC(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x88A741E44A2B3495(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xEE6C5AD3ECE0A82D(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("REMOVE_ALL_STATES"))
						{
							if (!unk_0x88A741E44A2B3495(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x41B4893843BBDB74(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_33354[iParam0] = 1;
					Global_33553[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0x05B7A89BD78797FC(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0xD24D37CC275948CC(&(Var3.f_50)) != unk_0xD24D37CC275948CC(""))
						{
							if (unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_50)))
							{
								unk_0x420BD37289EEE162(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0xD24D37CC275948CC(&(Var3.f_8[1 /*8*/])) != unk_0xD24D37CC275948CC(""))
							{
								if (unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x420BD37289EEE162(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("REMOVE_ALL_STATES")) && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x420BD37289EEE162(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xD24D37CC275948CC(&(Var3.f_8[0 /*8*/])) != unk_0xD24D37CC275948CC(""))
							{
								if (!unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x55E86AF2712B36A1(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0xD24D37CC275948CC(&(Var3.f_8[0 /*8*/])) != unk_0xD24D37CC275948CC(""))
							{
								if (unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x420BD37289EEE162(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("REMOVE_ALL_STATES")) && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x420BD37289EEE162(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xD24D37CC275948CC(&(Var3.f_8[1 /*8*/])) != unk_0xD24D37CC275948CC(""))
							{
								if (!unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x55E86AF2712B36A1(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0xD24D37CC275948CC(&(Var3.f_8[0 /*8*/])) != unk_0xD24D37CC275948CC(""))
							{
								if (unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x420BD37289EEE162(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0xD24D37CC275948CC(&(Var3.f_8[1 /*8*/])) != unk_0xD24D37CC275948CC(""))
							{
								if (unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x420BD37289EEE162(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("") && unk_0xD24D37CC275948CC(&(Var3.f_8[2 /*8*/])) != unk_0xD24D37CC275948CC("REMOVE_ALL_STATES"))
							{
								if (!unk_0x35F7DD45E8C0A16D(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x55E86AF2712B36A1(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x41F37C3427C75AE0(iVar100);
						}
					}
					Global_33553[iParam0] = 1;
					Global_33354[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0xF1B760881820C952(Var3, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), true) < 250f)
					{
						iVar98 = unk_0xB48FCED898292E52(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x52AF537A0C5B8AAD(iVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x5C29F698D404C5E1(iVar98, 3);
								Global_33553[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x899BA936634A322E(iVar98) != 6 && unk_0x899BA936634A322E(iVar98) != 7) && unk_0x899BA936634A322E(iVar98) != 8)
								{
									unk_0x5C29F698D404C5E1(iVar98, 10);
									Global_33553[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x033C0F9A64E229AE(Var3, 50f, Var3.f_4[1], Var3.f_4[0], false);
						unk_0xE80492A9AC099A93(&(Global_31706[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x92C47782FDA8B2A3(Var3, 50f, Var3.f_4[0], Var3.f_4[1], true);
						unk_0x933D6A9EEC1BACD0(&(Global_31706[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32158[iParam0] = 0;
				Global_32357[iParam0] = iVar1;
				if (!func_32())
				{
					if (!Global_32954[iParam0])
					{
						Global_32954[iParam0] = 1;
						Global_33153++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_32()
{
	if (func_33() == -1 || func_33() == 999)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	return Global_24444;
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_35()
{
	unk_0x891B5B39AC6302AF(3000);
	func_16(&iLocal_460, Local_286.f_0);
	while (unk_0x797AC7CB535BA28F())
	{
		unk_0x4EDE34FBADD967A6(0);
		func_16(&iLocal_460, Local_286.f_0);
	}
	if (unk_0x4C241E39B23DF959(Local_286.f_0, false))
	{
		unk_0xB664292EAECF7FA6(Local_286.f_0, 1);
	}
}

void func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return;
	}
	iVar0 = func_44(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35756[iVar0 /*5*/];
		func_39(1, iVar1, 1);
		return;
	}
	iVar2 = func_38(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_37(iVar2);
}

void func_37(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35730[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35730[iParam0 /*5*/].f_1 == unk_0xD80958FC74E988A6())
		{
			Global_35951 = 0;
		}
	}
	Global_35730[iParam0 /*5*/] = 13;
	Global_35730[iParam0 /*5*/].f_1 = 0;
	Global_35730[iParam0 /*5*/].f_2 = 0;
	Global_35730[iParam0 /*5*/].f_3 = 0;
	Global_35730[iParam0 /*5*/].f_4 = 0;
	Global_35729 = (Global_35729 - 1);
	if (Global_35729 < 0)
	{
		Global_35729 = 0;
	}
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_39(int iParam0, int iParam1, int iParam2)
{
	func_40(iParam0, iParam1, iParam2, 0, 0);
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_42(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_41();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35837[iVar0 /*5*/] = iParam0;
	Global_35837[iVar0 /*5*/].f_1 = iParam1;
	Global_35837[iVar0 /*5*/].f_2 = iParam2;
	Global_35837[iVar0 /*5*/].f_3 = iParam3;
	Global_35837[iVar0 /*5*/].f_4 = iParam4;
}

int func_41()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35837[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	if (func_43(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35837[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35837[iVar0 /*5*/])
			{
				if (iParam1 == Global_35837[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_35756[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_45()
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xE80492A9AC099A93(&Global_2263, 25);
	unk_0x933D6A9EEC1BACD0(&Global_2264, 11);
}

int func_46(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_48(0))
		{
			return 0;
		}
		Global_34873++;
		*iParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *iParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_147(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*iParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_47(iParam0, iParam4);
		}
	}
	return 2;
}

void func_47(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_48(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_147(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_49()
{
	func_50();
}

void func_50()
{
	int iVar0;
	int* iVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	float fVar10;
	float fVar11;
	bool bVar12;
	
	if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	fVar11 = func_100(func_101(iLocal_120) == joaat("maverick"), 0.45f, 0.3f);
	iVar4 = unk_0xB6997A7EB3F5C8C0();
	if (unk_0x7239B21A38F536BA(iVar4) && iVar4 != iLocal_85)
	{
		Local_286.f_1 = iVar4;
	}
	if (!iLocal_457)
	{
		func_131();
		unk_0x4EDE34FBADD967A6(0);
		return;
	}
	if (func_97(Local_286.f_3, Local_286.f_0, 1, 1, 1, 1, 0) || unk_0xD9D2CFFF49FAB35F())
	{
		func_140(0);
		iLocal_457 = 0;
		if (unk_0x7239B21A38F536BA(Local_286.f_3) && !unk_0x84A2DD9AC37C35C1(Local_286.f_3))
		{
			if (unk_0x4C241E39B23DF959(Local_286.f_0, false) && unk_0xA3EE4A07279BB9DB(Local_286.f_3, Local_286.f_0, false))
			{
				unk_0xF0AF20AA7731F8C3(Local_286.f_3, Local_286.f_0, unk_0x3FEF770D40960D5A(Local_286.f_0, true) + Vector(100f, 100f, 100f) * unk_0x0A794A5A57F8DF91(Local_286.f_0) + Vector(500f, 0f, 0f), 4, unk_0x53AF99BAA671CA47(Local_286.f_0), 262144, 50f, 50f, true);
			}
			else
			{
				unk_0x22B0D0E37CCB840D(Local_286.f_3, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
			}
			unk_0x971D38760FBC02EF(Local_286.f_3, true);
			unk_0x1913FE4CBF41C463(Local_286.f_3, 251, false);
			unk_0x1913FE4CBF41C463(Local_286.f_3, 255, false);
			Local_286.f_3 = 0;
		}
		if (unk_0x7239B21A38F536BA(Local_286.f_0))
		{
			unk_0x629BFA74418D6239(&Local_286);
			Local_286.f_0 = 0;
		}
		if (func_1("PLAY_BASEJUMP_S"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return;
	}
	fVar10 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), func_96(iLocal_120));
	if (fVar10 < 11664f)
	{
		if (!iLocal_459)
		{
			unk_0x963D27A58DF860AC(func_95(iLocal_120));
			iLocal_459 = 1;
		}
	}
	else if (fVar10 > 13924f)
	{
		if (iLocal_459)
		{
			unk_0xE532F5D78798DAAB(func_95(iLocal_120));
			iLocal_459 = 0;
		}
	}
	if (fVar10 < 10000f)
	{
		if (!unk_0x7239B21A38F536BA(Local_286.f_3))
		{
			if ((unk_0x98A4EB5D89A0C952(func_95(iLocal_120)) && unk_0x7239B21A38F536BA(Local_286.f_0)) && unk_0x4C241E39B23DF959(Local_286.f_0, false))
			{
				Local_286.f_3 = unk_0x7DD959874C1FD534(Local_286.f_0, 4, func_95(iLocal_120), -1, true, true);
				if (!unk_0x84A2DD9AC37C35C1(Local_286.f_3))
				{
					unk_0x560A43136EB58105(Local_286.f_3, false);
					func_94(Local_286.f_3, iLocal_120);
					func_93();
					unk_0x6C8065A3B780185B(Local_286.f_3, func_92(iLocal_120));
					func_90(&uLocal_121, 0, Local_286.f_3, func_91(iLocal_120), 1, 1);
					unk_0x919BE13EED931959(Local_286.f_3, -1);
					unk_0x1913FE4CBF41C463(Local_286.f_3, 251, true);
					unk_0x1913FE4CBF41C463(Local_286.f_3, 255, true);
				}
				unk_0x2497C4717C8B881E(Local_286.f_0, 1, 1);
				unk_0xFD280B4D7F3ABC4D(Local_286.f_0, fVar11);
			}
		}
		else
		{
			unk_0xAD738C3085FE7E11(Local_286.f_3, true, false);
			if (!unk_0xA7A932170592B50E(iLocal_460) || !unk_0x02EC0AF5C5A49B7A(iLocal_460))
			{
				unk_0xFD280B4D7F3ABC4D(Local_286.f_0, fVar11);
			}
			if (!unk_0xA921AA820C25702F(Local_286.f_169, 0))
			{
				if (unk_0x5A859503B0C08678())
				{
					if (!unk_0x84A2DD9AC37C35C1(Local_286.f_3) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_286.f_3, true)) < 400f)
						{
							func_74(&uLocal_121, "OJBJAUD", func_88(iLocal_120), 8, 0, 0, 0);
							unk_0x69F4BE8C8CC4796C(Local_286.f_3, unk_0xD80958FC74E988A6(), 6000, 0, 2);
							unk_0x933D6A9EEC1BACD0(&(Local_286.f_169), 0);
						}
					}
				}
			}
		}
	}
	else if (fVar10 > 12100f)
	{
		if (unk_0x7239B21A38F536BA(Local_286.f_3))
		{
			iVar5 = Local_286.f_3;
			unk_0x971D38760FBC02EF(iVar5, true);
			if (!unk_0xE659E47AF827484B(iVar5))
			{
				unk_0xAD738C3085FE7E11(iVar5, true, false);
				unk_0x9614299DCB53E54B(&iVar5);
			}
			else
			{
				unk_0x2595DD4236549CE3(&iVar5);
			}
		}
	}
	func_16(&iLocal_460, Local_286.f_0);
	if ((unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_286.f_0, true) && !unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6())) && func_72(Local_286.f_3, Local_286.f_0))
	{
		Var7 = { unk_0x2274BC1C4885E333(Local_286.f_0, unk_0x17C07FC640E86B4E(unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f)) };
		if (Var7.f_0 < 0f || Var7.f_1 < 1f)
		{
			unk_0xB9EFD5C25018725A("DisableFlightMusic", true);
			unk_0x1B9C0099CB942AC6(Local_286.f_0, "OFF");
			func_156(&uLocal_93, 64);
			bVar12 = true;
			if (iLocal_458)
			{
				if (func_1("PLAY_BASEJUMP_B") || func_1("PLAY_BASEJUMP_S"))
				{
					unk_0x8DFCED7A656F8802(true);
				}
				iLocal_458 = 0;
			}
			if (!unk_0xA7A932170592B50E(iLocal_460))
			{
				func_62(0, 0, 1);
				func_57(1);
				iLocal_460 = unk_0x6ABFA3E16460F22D(26379945, func_56(iLocal_120), func_55(iLocal_120), func_54(iLocal_120), false, 2);
				unk_0x026FB97D0A425F84(iLocal_460, true);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				unk_0x6A25241C340D3822(iLocal_460, "HAND_SHAKE", 0.07f);
			}
			if (unk_0x4C241E39B23DF959(Local_286.f_0, false))
			{
				iVar0 = unk_0x77F1BEB8863288D5(Local_286.f_3, -1273030092);
				if (iVar0 != 0 && iVar0 != 1)
				{
					unk_0x1913FE4CBF41C463(Local_286.f_3, 134, true);
					func_23(&iVar1);
					while (func_10(&iVar1) < 1f)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) || unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()))
						{
							func_53(iLocal_104);
							if (unk_0x7239B21A38F536BA(Local_286.f_3) && !unk_0x84A2DD9AC37C35C1(Local_286.f_3))
							{
								if (unk_0x4C241E39B23DF959(Local_286.f_0, false) && unk_0xA3EE4A07279BB9DB(Local_286.f_3, Local_286.f_0, false))
								{
									unk_0xF0AF20AA7731F8C3(Local_286.f_3, Local_286.f_0, unk_0x3FEF770D40960D5A(Local_286.f_0, true) + Vector(100f, 100f, 100f) * unk_0x0A794A5A57F8DF91(Local_286.f_0) + Vector(500f, 0f, 0f), 4, unk_0x53AF99BAA671CA47(Local_286.f_0), 262144, 50f, 50f, true);
								}
								else
								{
									unk_0x22B0D0E37CCB840D(Local_286.f_3, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
								}
								unk_0x971D38760FBC02EF(Local_286.f_3, true);
								unk_0x1913FE4CBF41C463(Local_286.f_3, 251, false);
								unk_0x1913FE4CBF41C463(Local_286.f_3, 255, false);
							}
							if (unk_0x7239B21A38F536BA(Local_286.f_0))
							{
								unk_0x629BFA74418D6239(&Local_286);
							}
							if (func_1("PLAY_BASEJUMP_S"))
							{
								unk_0x8DFCED7A656F8802(true);
							}
							unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
							unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
							return;
						}
						else
						{
							func_16(&iLocal_460, Local_286.f_0);
						}
					}
					func_22(&iLocal_461);
					while (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_286.f_0, false) && func_52(&iLocal_461) < 2f)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					func_9(&iLocal_461);
					if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_286.f_0, false))
					{
						bVar12 = false;
						unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
						if (unk_0xA7A932170592B50E(iLocal_460))
						{
							unk_0x865908C81A2C22E9(iLocal_460, false);
						}
						unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
						return;
					}
					if (!unk_0x5F9532F3B5CC2551(Local_286.f_3) && !unk_0x5F9532F3B5CC2551(Local_286.f_0))
					{
						unk_0xE8854A4326B9E12B(&iVar6);
						unk_0x919BE13EED931959(0, 500);
						unk_0xF0AF20AA7731F8C3(0, Local_286.f_0, unk_0x3FEF770D40960D5A(Local_286.f_0, true) + Vector(100f, 100f, 100f) * unk_0x0A794A5A57F8DF91(Local_286.f_0) + Vector(500f, 0f, 0f), 4, unk_0x53AF99BAA671CA47(Local_286.f_0), 262144, 50f, 50f, true);
						unk_0x39E72BC99E6360CB(iVar6);
						unk_0x5ABA3986D90D8A3B(Local_286.f_3, iVar6);
						unk_0x3841422E9C488D8C(&iVar6);
						if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
						{
							unk_0x560A43136EB58105(unk_0xD80958FC74E988A6(), false);
							unk_0xA7B2458D0AD6DED8(unk_0xD80958FC74E988A6(), true);
						}
					}
					func_23(&iVar1);
					while (func_10(&iVar1) < 2f)
					{
						unk_0x4EDE34FBADD967A6(0);
						func_16(&iLocal_460, Local_286.f_0);
					}
				}
			}
		}
	}
	if (!bVar12)
	{
		if ((unk_0x4C241E39B23DF959(Local_286.f_0, false) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(Local_286.f_0, true)) < 225f) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if ((!iLocal_458 || (iLocal_120 == 3 && !func_1("PLAY_BASEJUMP_B"))) || (iLocal_120 != 3 && !func_1("PLAY_BASEJUMP_S")))
			{
				if (iLocal_120 == 3)
				{
					if (!Global_66880)
					{
						func_51("PLAY_BASEJUMP_B");
					}
				}
				else if (!Global_66880)
				{
					func_51("PLAY_BASEJUMP_S");
				}
				iLocal_458 = 1;
			}
		}
		else if (iLocal_458)
		{
			if (func_1("PLAY_BASEJUMP_B") || func_1("PLAY_BASEJUMP_S"))
			{
				unk_0x8DFCED7A656F8802(true);
			}
			iLocal_458 = 0;
		}
		if ((!unk_0x84A2DD9AC37C35C1(Local_286.f_3) && unk_0x77F1BEB8863288D5(Local_286.f_3, -982327190) != 0) && unk_0x77F1BEB8863288D5(Local_286.f_3, -982327190) != 1)
		{
			unk_0x919BE13EED931959(Local_286.f_3, -1);
		}
	}
}

void func_51(char* sParam0)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

float func_52(int* iParam0)
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11() - iParam0->f_1);
		}
	}
	return 0f;
}

void func_53(int iParam0)
{
	if (iLocal_94 < 5)
	{
		func_143(iParam0, 0, 0);
		iLocal_104 = 262;
		func_104(&iLocal_95);
		iLocal_94 = 9;
	}
}

float func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 46.7708f;
		
		case 1:
			return 30.5578f;
		
		case 2:
			return 31.1151f;
		
		case 3:
			return 43.4229f;
		
		case 7:
			return 48.6851f;
		
		case 9:
			return 46.947f;
		
		case 10:
			return 40.6109f;
		
		case 11:
			return 32.1049f;
			break;
	}
	return 45f;
}

Vector3 func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6.5672f, 0f, -15.3269f;
		
		case 1:
			return 1.6743f, 0f, 13.7295f;
		
		case 2:
			return 2.2348f, 0f, 141.3733f;
		
		case 3:
			return 0.7682f, 0f, -154.1293f;
		
		case 7:
			return -1.8117f, 0f, 100.4016f;
		
		case 9:
			return 0.7611f, 0f, -71.8023f;
		
		case 10:
			return 2.3742f, 0f, 86.6743f;
		
		case 11:
			return 0.73f, 0f, 109.0678f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -840.2545f, -1317.986f, 6.1066f;
		
		case 1:
			return 1210.955f, 153.4641f, 81.7073f;
		
		case 2:
			return 2489.731f, 1537.972f, 36.1861f;
		
		case 3:
			return -286.5149f, 6665.522f, 6.9225f;
		
		case 7:
			return -714.035f, 4491.083f, 79.9083f;
		
		case 9:
			return -1396.963f, 4363.597f, 43.1246f;
		
		case 10:
			return 2547.738f, 4967.683f, 46.0189f;
		
		case 11:
			return 1091.145f, -169.1484f, 70.757f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		func_61();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_108(0))
		{
			func_58(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_58(int iParam0)
{
	if (Global_14551)
	{
		func_60(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_59())
	{
		Global_14393.f_1 = 3;
	}
}

int func_59()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_60(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_108(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

void func_61()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_62(int iParam0, bool bParam1, int iParam2)
{
	unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, iParam0);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x056A8A219B8E829F(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 15f);
	}
	unk_0xC61B86C9F61EB404(bParam1);
	func_58(0);
	func_64(1, 1, iParam2, 0);
	unk_0xA0EBB943C300E693(false);
	unk_0xA6294919E56FF02A(false);
	func_63(23, 1);
}

void func_63(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_24688, iParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_24688, iParam0);
	}
}

void func_64(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_71(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_59())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_70(1, bParam3, uParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_71(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_70(0, bParam3, uParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_65(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
	}
}

int func_65(int iParam0)
{
	if (func_67(iParam0, 0))
	{
		return 1;
	}
	if (func_66())
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_66()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_67(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_68(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_69();
	}
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_69()
{
	return Global_1312736;
}

int func_70(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_71(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

int func_72(int iParam0, int iParam1)
{
	if (((!unk_0x7239B21A38F536BA(iParam0) || !unk_0x7239B21A38F536BA(iParam1)) || unk_0x5F9532F3B5CC2551(iParam0)) || unk_0x5F9532F3B5CC2551(iParam1))
	{
		return 0;
	}
	if (unk_0xA3EE4A07279BB9DB(iParam0, iParam1, false) && func_73(iParam0, iParam1) == -1)
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0) && !unk_0x5F9532F3B5CC2551(iParam1))
	{
		if (unk_0xA808AA1D79230FC2(iParam0, iParam1))
		{
			if (unk_0xBB40DD2270B65366(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xBB40DD2270B65366(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xBB40DD2270B65366(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xBB40DD2270B65366(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_86();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_109(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_85();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_79();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_78())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_59())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_77();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_76();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_86();
	}
	return 0;
}

void func_76()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_77()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_79()
{
	if (func_129(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_80();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_80()
{
	func_81();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_81()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_84(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_83(unk_0xD80958FC74E988A6());
			if (func_82(iVar0) && (!func_129(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_82(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_82(int iParam0)
{
	return iParam0 < 3;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_84(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_84(int iParam0)
{
	if (func_82(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

void func_86()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_87(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

char* func_88(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_83(unk_0xD80958FC74E988A6()) == true;
	switch (iParam0)
	{
		case 0:
			return func_89(bVar0, "BJ_01F", "BJ_01L");
		
		case 1:
			return func_89(bVar0, "BJ_02F", "BJ_02L");
		
		case 2:
			return func_89(bVar0, "BJ_03F", "BJ_03L");
		
		case 3:
			return func_89(bVar0, "BJ_04FG", "BJ_04L");
		
		case 7:
			return "BJ_08L";
		
		case 9:
			return func_89(bVar0, "BJ_10LF", "BJ_10L");
		
		case 10:
			return func_89(bVar0, "BJ_11LF", "BJ_11L");
		
		case 11:
			return "BJ_12L";
		
		default:
	}
	return "";
}

char* func_89(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

char* func_91(int iParam0)
{
	return "EXT1HELIPILOT";
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EXT1HELIPILOT";
		
		case 1:
			return "EXT1HELIPILOT";
		
		case 2:
			return "EXT1HELIPILOT";
		
		case 3:
			return "EXT1HELIPILOT";
		
		case 7:
			return "BJPilot_Train";
		
		case 9:
			return "EXT1HELIPILOT";
		
		case 10:
			return "EXT1HELIPILOT";
		
		case 11:
			return "BJPilot_Canal";
		
		default:
	}
	return "EXT1HELIPILOT";
}

void func_93()
{
	iLocal_47++;
}

void func_94(int iParam0, int iParam1)
{
	if (unk_0x5F9532F3B5CC2551(iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			unk_0x262B14F48D29DE80(iParam0, 0, 0, 1, 0);
			unk_0x262B14F48D29DE80(iParam0, 2, 1, 0, 0);
			unk_0x262B14F48D29DE80(iParam0, 3, 0, 0, 0);
			unk_0x262B14F48D29DE80(iParam0, 4, 0, 0, 0);
			unk_0x262B14F48D29DE80(iParam0, 8, 1, 0, 0);
			unk_0x93376B65A266EB5F(iParam0, 1, 0, 0, false);
			break;
		
		case 11:
			unk_0x262B14F48D29DE80(iParam0, 0, 1, 0, 0);
			unk_0x262B14F48D29DE80(iParam0, 2, 2, 0, 0);
			unk_0x262B14F48D29DE80(iParam0, 3, 1, 0, 0);
			unk_0x262B14F48D29DE80(iParam0, 4, 0, 2, 0);
			unk_0x93376B65A266EB5F(iParam0, 0, 1, 2, false);
			unk_0x93376B65A266EB5F(iParam0, 1, 1, 0, false);
			break;
	}
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}

Vector3 func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_97(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0xD80958FC74E988A6();
	if (((!unk_0x7239B21A38F536BA(iParam1) || unk_0x5F9532F3B5CC2551(iParam1)) || !unk_0x4C241E39B23DF959(iParam1, false)) || unk_0x28D3FED7190D3A0B(iParam1))
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(iParam0, true) };
			if (bParam3)
			{
				if (unk_0x4859F1FC66A6278E(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam5)
			{
				if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
				{
					return 1;
				}
			}
			if (bParam6)
			{
				if (unk_0x17FFC1B2BA35A494(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iParam0))
				{
					if (unk_0xD71649DB0A545AA3(iParam0, iVar0, 90f))
					{
						if (func_98(iParam0, 1) < 10f)
						{
							return 1;
						}
					}
				}
			}
			if (unk_0x997ABD671D25CA0B(iParam0, false))
			{
				if (unk_0xC86D67D52A707CF8(unk_0x9A9112A0FE9A4713(iParam0, false), iVar0, true))
				{
					return 1;
				}
			}
			if (unk_0x475768A975D5AD17(iVar0, 4))
			{
				if (unk_0x34616828CD07F1A1(iVar0))
				{
					if (unk_0x20B60995556D004F(iParam0, unk_0x3FEF770D40960D5A(iVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x3F2023999AD51C1F(Var1, 4f, true))
			{
				return 1;
			}
			if (unk_0x5270A8FBC098C3F8((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), false))
			{
				return 1;
			}
			if (unk_0x9A497FE2DF198913(iParam0) || !func_72(iParam0, iParam1))
			{
				return 1;
			}
			if ((unk_0xAB0F816885B0E483(-1, Var1, 25f) && !unk_0xAB0F816885B0E483(11, Var1, 25f)) && !unk_0xAB0F816885B0E483(13, Var1, 25f))
			{
				return 1;
			}
		}
		else if (bParam2)
		{
			return 1;
		}
	}
	return 0;
}

float func_98(int iParam0, bool bParam1)
{
	return func_99(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), iParam0, bParam1);
}

float func_99(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

float func_100(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}

int func_102(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_108(0))
	{
		return 0;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/] == 1 && Global_35609[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35609[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35609[iVar0 /*18*/].f_4 = 1;
			Global_35609[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35609[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35609[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_104(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_103(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_105(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (!*iParam0 == -1)
		{
			func_104(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/] = 1;
			Global_35609[iVar0 /*18*/].f_1 = Global_35726;
			Global_35726++;
			Global_35609[iVar0 /*18*/].f_3 = 0;
			Global_35609[iVar0 /*18*/].f_16 = 0;
			Global_35609[iVar0 /*18*/].f_4 = 0;
			Global_35609[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35609[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35609[iVar0 /*18*/].f_5 = iParam3;
			Global_35609[iVar0 /*18*/].f_17 = unk_0xC30338E8088E2E21();
			Global_35609[iVar0 /*18*/].f_6 = 0;
			if (!unk_0xCA042B6957743895(sParam4))
			{
				Global_35609[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35609[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35609[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35609[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_106(int iParam0)
{
	return 0;
	return 1;
}

var func_107()
{
	return Global_66880;
}

int func_108(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

bool func_110()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
}

int func_111()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_112(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

int func_113()
{
	return 1;
}

void func_114(var uParam0, int iParam1)
{
	func_115(uParam0, iParam1);
}

void func_115(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_116()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return ((((bVar1 && unk_0xF3A21BCD95725A4A(0, 69)) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 70))) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 68))) || unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()));
	}
	return (((((bVar1 && unk_0xF3A21BCD95725A4A(0, 24)) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 25))) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 47))) || unk_0xDCCA191DF9980FD7(unk_0xD80958FC74E988A6())) || unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()));
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_80();
				if (!func_82(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_124()) || Global_96220) || Global_24446) || func_123()) || func_109(8, -1)) || func_122()) || func_121()) || func_120()) || func_111()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_124()) || Global_24446) || func_123()) || func_109(8, -1)) || func_120()) || func_122()) || func_121()) || func_111()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_124()) || Global_96220) || Global_24446) || func_123()) || func_109(8, -1)) || func_120()) || func_122()) || func_121()) || func_111()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_124()) || Global_96220) || Global_24446) || func_123()) || func_109(8, -1)) || func_122()) || func_121()) || func_111()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_124() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_109(8, -1)) || func_111()) || func_119()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_109(8, -1) || func_122()) || func_121()) || func_119()) || func_118())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_124()) || Global_24446) || func_123()) || func_109(8, -1)) || func_121()) || func_120()) || func_111()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_124()) || func_121()) || Global_96220) || Global_24446) || func_123()) || Global_35953) || func_109(8, -1)) || func_120()) || func_119()) || func_111()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_124()) || Global_96220) || Global_24446) || func_123()) || func_109(8, -1)) || func_120()) || func_119()) || func_122()) || func_121()) || func_111())
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

var func_118()
{
	return Global_89823.f_1;
}

int func_119()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_120()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_121()
{
	return Global_89836.f_291 > 0;
}

bool func_122()
{
	return Global_89836.f_290 > 0;
}

var func_123()
{
	return Global_1315898;
}

int func_124()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_125()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_126()
{
	return Global_86021;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_129(6) || func_129(7))
			{
				return 1;
			}
			else
			{
				return func_127(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_147(5))
			{
				if (func_117(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_128(int iParam0)
{
	if (iParam0 != 262)
	{
		return unk_0xA6DB27D19ECBB7DA(Global_24745[iParam0 /*23*/].f_19);
	}
	return 0;
}

bool func_129(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_130(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_131()
{
	if (bLocal_456)
	{
		switch (iLocal_120)
		{
			case 0:
				func_132(-829.3729f, -1289.817f, 4.0005f, 196.9543f);
				break;
			
			case 1:
				func_132(1208.197f, 174.5777f, 81.0003f, 138.8786f);
				break;
			
			case 2:
				func_132(2463.904f, 1509.964f, 35.0372f, 88.9199f);
				break;
			
			case 3:
				func_132(-274.6559f, 6633.891f, 7.5426f, 130.4063f);
				break;
			
			case 7:
				func_132(-742.5047f, 4493.466f, 75.2206f, 180.991f);
				break;
			
			case 9:
				func_132(-1367.687f, 4381.998f, 41.4017f, 277.8339f);
				break;
			
			case 10:
				func_132(2517.962f, 4971.619f, 44.7057f, 15.3895f);
				break;
			
			case 11:
				func_132(1054.534f, -179.6562f, 70.3162f, 30.046f);
				break;
			
			default:
				break;
			}
	}
}

void func_132(struct<3> Param0, float fParam3)
{
	var uVar0;
	bool bVar1;
	
	fLocal_92 = unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && (fLocal_92 > 25f || unk_0xB16FCE9DDC7BA182()))
	{
		if (fLocal_92 < 25600f)
		{
			if (!unk_0xE33D59DA70B58FDF(Param0, 6f) || unk_0xB16FCE9DDC7BA182())
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (unk_0x7239B21A38F536BA(Local_286.f_0))
		{
			unk_0xEA386986E786A54F(&Local_286);
		}
		unk_0xA56F01F3765B93A0(Param0, 4f, true, false, false, false);
		if (iLocal_120 == 0)
		{
			unk_0xC12321827687FE4D(-835.7629f, -1298.777f, 0f, -815.1855f, -1283.906f, 10f, false, true);
		}
		if (iLocal_120 == 3)
		{
			Local_286.f_0 = unk_0xAF35D0D2583051B0(joaat("frogger"), Param0, fParam3, 1, 1);
			unk_0x33E8CD3322E2FE31(Local_286.f_0, 5);
		}
		else
		{
			Local_286.f_0 = unk_0xAF35D0D2583051B0(joaat("maverick"), Param0, fParam3, 1, 1);
			unk_0x33E8CD3322E2FE31(Local_286.f_0, 6);
		}
		iLocal_85 = Local_286.f_0;
		unk_0x3910051CCECDB00C(iLocal_85, true);
		if (unk_0xC906A7DAB05C8D2B(Param0, &uVar0))
		{
			unk_0x49733E92263139D1(Local_286.f_0);
		}
		unk_0x92F0CF722BC4202F(Local_286.f_0, true);
		iLocal_457 = 1;
	}
	else
	{
		iLocal_457 = 0;
	}
}

bool func_133()
{
	return func_134(&uLocal_118);
}

int func_134(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x98A4EB5D89A0C952((*uParam0)[iVar0]))
			{
				if (!unk_0x98A4EB5D89A0C952((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_135()
{
	switch (iLocal_120)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
			func_137();
			break;
		
		default:
			break;
	}
	func_136(&uLocal_118);
}

void func_136(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x963D27A58DF860AC((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_137()
{
	if (iLocal_120 == 3)
	{
		func_138(&uLocal_118, joaat("frogger"));
	}
	else
	{
		func_138(&uLocal_118, joaat("maverick"));
	}
}

int func_138(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_139(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_139(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_140(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_105 = iParam0;
	iLocal_103 = 0;
	iLocal_94 = 7;
}

int func_141()
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	fVar3 = unk_0xB7A628320EFF8E47(Var0, Local_89);
	if (fVar3 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar3 < (80f * 80f))
	{
		if (unk_0xE33D59DA70B58FDF(Local_89, 5f))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_142(int iParam0)
{
	iLocal_94 = iParam0;
}

void func_143(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 262)
	{
		return;
	}
	iVar0 = iParam0;
	if (!bParam2)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
		if (Global_24742 == 1)
		{
			Global_24743 = 1;
		}
		Global_24742 = 1;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 15);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA6DB27D19ECBB7DA(Global_24745[iVar0 /*23*/].f_19))
		{
			unk_0xB98236CAAECEF897(true);
			unk_0x86A652570E5F25DD(&(Global_24745[iVar0 /*23*/].f_19));
			unk_0xB98236CAAECEF897(false);
		}
	}
}

int func_144()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_145()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_146(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iParam0], iParam1);
	return bVar0;
}

bool func_147(int iParam0)
{
	return func_148(iParam0, Global_34909);
}

int func_148(int iParam0, int iParam1)
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

bool func_149(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_150()
{
	iLocal_98 = 0;
	if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		func_114(&uLocal_93, 8388608);
		return;
	}
	StringCopy(&Local_52, "bj", 64);
	iLocal_120 = func_154(Local_89, 1);
	func_114(&uLocal_93, 64);
	switch (iLocal_120)
	{
		case 0:
			iLocal_104 = 124;
			break;
		
		case 1:
			iLocal_104 = 125;
			break;
		
		case 2:
			iLocal_104 = 126;
			break;
		
		case 3:
			iLocal_104 = 127;
			break;
		
		case 7:
			iLocal_104 = 131;
			break;
		
		case 9:
			iLocal_104 = 133;
			break;
		
		case 10:
			iLocal_104 = 134;
			break;
		
		case 11:
			iLocal_104 = 135;
			break;
		
		default:
			break;
	}
	if (iLocal_120 == 4)
	{
		if (func_153(19))
		{
			func_114(&uLocal_93, 8388608);
			return;
		}
	}
	if (iLocal_120 == 7)
	{
		if (func_152(16) && !func_152(65))
		{
			func_114(&uLocal_93, 8388608);
			return;
		}
	}
	if (iLocal_120 == 0)
	{
		func_114(&uLocal_93, 524288);
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		func_114(&uLocal_93, 8388608);
		return;
	}
	func_114(&uLocal_93, 4194304);
	func_114(&uLocal_93, 16);
	fLocal_101 = (unk_0xBBDA792448DB5A89(func_151(iLocal_104)) + 5f);
	if (iLocal_104 != 262)
	{
		if (!func_146(0, iLocal_98))
		{
			bLocal_456 = false;
			func_53(iLocal_104);
		}
		else
		{
			bLocal_456 = true;
		}
	}
	else
	{
		bLocal_456 = false;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("bj")) > 0)
	{
	}
	else
	{
		func_156(&uLocal_93, 8);
	}
	if (func_129(12))
	{
		func_114(&uLocal_93, 8);
	}
	iLocal_96 = 17000;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 90:
		case 91:
		case 109:
		case 110:
			return 20;
			break;
		
		case 65:
		case 66:
		case 75:
		case 106:
		case 107:
		case 108:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 128:
		case 129:
		case 130:
		case 132:
		case 136:
			return 100;
			break;
		
		case 124:
		case 125:
		case 126:
		case 127:
		case 131:
		case 133:
		case 134:
		case 135:
		case 67:
		case 68:
		case 94:
		case 69:
		case 70:
		case 72:
		case 73:
		case 74:
		case 71:
			return 209;
			break;
	}
	return -1;
}

int func_152(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

bool func_153(int iParam0)
{
	return Global_96260[iParam0 /*10*/].f_1;
}

int func_154(struct<3> Param0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_155(iVar3))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param0, func_96(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_156(var uParam0, int iParam1)
{
	func_157(uParam0, iParam1);
}

void func_157(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_104 != 262)
		{
			func_143(iLocal_104, 0, 0);
		}
	}
	func_104(&iLocal_95);
	if (func_149(uLocal_93, 2))
	{
		func_5();
		func_156(&uLocal_93, 2);
		func_7(&iLocal_97);
	}
	iLocal_97 = -1;
	func_159();
	unk_0x1090044AD1DA76FA();
}

void func_159()
{
	func_156(&uLocal_93, 4);
	func_160();
	if (unk_0x46E9AE36D8FA6417(iLocal_51))
	{
		unk_0xF745B37630DF176B(iLocal_51, 3);
	}
	if (!unk_0xF22B6C47C6EAB066(&Local_68))
	{
		if (unk_0xF030907CCBB8A9FD(&Local_68) != 0)
		{
			unk_0xC90D2DCACD56184C(&Local_68);
		}
	}
}

void func_160()
{
}

