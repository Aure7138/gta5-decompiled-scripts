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
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[2] = { 0, 0 };
	struct<3> Local_55[2];
	float fLocal_62[2] = { 0f, 0f };
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<3> Local_73 = { 0, 0, 0 } ;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<6> Local_78 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_84 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	bool bLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121[2] = { 0, 0 };
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	bool bLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = 0;
	var uLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	var uLocal_154 = 16;
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
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
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
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	StringCopy(&Local_78, "", 24);
	if (unk_0xB9B05E900D325C36(11))
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_72))
		{
			if (unk_0xCA71EE26095D78BE(iLocal_72))
			{
				unk_0x38396C255EC4D248(iLocal_72);
			}
		}
		func_204();
	}
	if (func_162(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_159(-1);
	}
	else
	{
		unk_0xBEE2834559A8897A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0x7FAAAEBD3B7CE5DA() || iLocal_108) || iLocal_137)
		{
			if (!func_158())
			{
				if (func_157())
				{
					func_204();
				}
			}
			unk_0x2E2DB6385FA6CB7B("RE_RA", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_145())
					{
						func_204();
					}
					if (!iLocal_103)
					{
						func_144();
					}
					else
					{
						func_143();
					}
					if (bLocal_104)
					{
						iLocal_102 = 1;
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
					{
						switch (iLocal_49)
						{
							case 0:
								func_133();
								iLocal_49 = 1;
								break;
							
							case 1:
								if (!func_132())
								{
									if ((unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Local_73, 75f, 75f, 75f, 0, 1, 0) && !unk_0xDBF188DE6334F01A(iLocal_72)) || unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_72, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_158())
										{
											unk_0x43EC517AF665D2B9(unk_0x0031992CA618A445(), iLocal_72, -1, 0, 2);
											unk_0x15007EAE63C7ECCF(0.1f);
											func_131();
											func_122(1);
										}
										bLocal_111 = true;
									}
									if (!unk_0x8682D8A6269E52C9(iLocal_52[0]) && !unk_0x8682D8A6269E52C9(iLocal_52[1]))
									{
										if (unk_0x7CA73A79B30385F3(iLocal_52[0], unk_0x0031992CA618A445(), 1) || unk_0x7CA73A79B30385F3(iLocal_52[1], unk_0x0031992CA618A445(), 1))
										{
											func_131();
											bLocal_111 = true;
										}
									}
									if (bLocal_111)
									{
										func_116();
									}
									if (!unk_0x8682D8A6269E52C9(iLocal_72) && unk_0x432757A9E7AAFA96(uLocal_65, 0))
									{
										if (unk_0xA32DC7E16AD1DFB7(iLocal_72, uLocal_65, 0))
										{
											iLocal_137 = 1;
										}
									}
									if (bLocal_138)
									{
										if (unk_0x432757A9E7AAFA96(uLocal_65, 0))
										{
											if (!unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), uLocal_65, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_49 = 9;
											}
										}
									}
								}
								if (func_115())
								{
									func_131();
									iLocal_49 = 3;
								}
								else if (func_132())
								{
									func_131();
									func_113();
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_132)
								{
									case 0:
										iLocal_49 = 3;
										break;
									
									case 1:
										iLocal_49 = 3;
										break;
									
									case 3:
										iLocal_49 = 3;
										break;
									
									case 4:
										iLocal_49 = 3;
										break;
									
									case 5:
										if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 4))
										{
											iLocal_140 = 1;
											iLocal_51 = 9;
										}
										else
										{
											iLocal_51 = 13;
										}
										iLocal_49 = 1;
										break;
								}
								if (func_132())
								{
									switch (iLocal_50)
									{
										case 2:
											func_112();
											break;
										
										case 4:
											func_111();
											break;
										
										case 5:
											func_110();
											break;
										}
								}
								break;
							
							case 3:
								func_107();
								unk_0xCFA3B07B6CEEF62C(unk_0x0031992CA618A445());
								if (!unk_0x8682D8A6269E52C9(iLocal_72))
								{
									unk_0xEFB3449CB7CA6AD0(iLocal_72, 3, 0, 0);
									if (!unk_0x90219307C9D2728D(iLocal_72, 0))
									{
										if (!iLocal_117)
										{
											if (unk_0x4CB2F72EA418C083(iLocal_72, "random@homelandsecurity", "idle_girl", 3) && !unk_0xABB40063444DEDAA(iLocal_72))
											{
												unk_0xA8BB581B2FB87711(iLocal_72, 16);
												unk_0x173325AAF2CD766A(&uLocal_136);
												unk_0xBE0E7D38FE7C495C(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												unk_0xBE0E7D38FE7C495C(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												unk_0xF81AD3C937316CCA(uLocal_136);
												unk_0xEDD5437C49B7B1F8(iLocal_72, uLocal_136);
												unk_0x1F5B34056C3CB80B(&uLocal_136);
												iLocal_117 = 1;
											}
											else
											{
												unk_0x26CD819CC5B5E17A(iLocal_72, -1);
												iLocal_117 = 1;
											}
										}
										else if ((((!unk_0x4CB2F72EA418C083(iLocal_72, "random@homelandsecurity", "idle_girl", 3) && !unk_0x4CB2F72EA418C083(iLocal_72, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !unk_0x4CB2F72EA418C083(iLocal_72, "random@homelandsecurity", "knees_loop_girl", 1)) && unk_0xF57D21B49780A7A8(iLocal_72, 474215631) != 0) && unk_0xF57D21B49780A7A8(iLocal_72, 474215631) != 1)
										{
											iLocal_117 = 0;
										}
									}
									else if (unk_0x432757A9E7AAFA96(iLocal_65, 0))
									{
										if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_65, 0))
										{
											if (unk_0xA761A0B6072010C8(uLocal_120))
											{
												unk_0x0C4BDC77192798AE(&uLocal_120);
											}
										}
									}
								}
								else
								{
									func_106();
								}
								if (!func_105())
								{
									if (iLocal_129 < unk_0x31CD6E9F83C10233())
									{
										if (func_104())
										{
											if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
											{
												func_103(&uLocal_154, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!unk_0x8682D8A6269E52C9(iLocal_52[1]))
										{
											func_103(&uLocal_154, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_129 = (unk_0x31CD6E9F83C10233() + unk_0x3AF262D7332EEDF5(4500, 5000));
									}
								}
								if (unk_0x8682D8A6269E52C9(iLocal_52[0]))
								{
									if (unk_0xA761A0B6072010C8(uLocal_121[0]))
									{
										unk_0x0C4BDC77192798AE(&(uLocal_121[0]));
									}
									func_102(&uLocal_154, 5);
								}
								else if (unk_0xE790C95BCC9F3F62(iLocal_52[0], unk_0x0031992CA618A445()) || unk_0x830CAE5496B8AD6B(iLocal_52[0], unk_0x0031992CA618A445(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xA761A0B6072010C8(uLocal_121[0]))
								{
									unk_0x0C4BDC77192798AE(&(uLocal_121[0]));
								}
								if (unk_0x8682D8A6269E52C9(iLocal_52[1]))
								{
									if (unk_0xA761A0B6072010C8(uLocal_121[1]))
									{
										unk_0x0C4BDC77192798AE(&(uLocal_121[1]));
									}
									func_102(&uLocal_154, 4);
								}
								else if (unk_0xE790C95BCC9F3F62(iLocal_52[1], unk_0x0031992CA618A445()) || unk_0x830CAE5496B8AD6B(iLocal_52[1], unk_0x0031992CA618A445(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xA761A0B6072010C8(uLocal_121[1]))
								{
									unk_0x0C4BDC77192798AE(&(uLocal_121[1]));
								}
								if (unk_0x76B3C79DE564AFC6(iLocal_52[0]) && unk_0x76B3C79DE564AFC6(iLocal_52[1]))
								{
									if (((unk_0xD49C1297C878C526(iLocal_52[0], joaat("weapon_stungun"), 0) && unk_0xD49C1297C878C526(iLocal_52[1], joaat("weapon_stungun"), 0)) || (unk_0xF649304F12DD5940(iLocal_52[0], 1) && unk_0xF649304F12DD5940(iLocal_52[1], 1))) || func_101())
									{
										if (unk_0xA761A0B6072010C8(uLocal_121[0]))
										{
											unk_0x0C4BDC77192798AE(&(uLocal_121[0]));
										}
										if (unk_0xA761A0B6072010C8(uLocal_121[1]))
										{
											unk_0x0C4BDC77192798AE(&(uLocal_121[1]));
										}
										if (!unk_0x8682D8A6269E52C9(iLocal_72))
										{
											if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_72, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_105())
												{
													func_103(&uLocal_154, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_90 = false;
													iLocal_108 = 1;
													unk_0x515599B8C60CABE1(iLocal_72, 16);
													unk_0xEA607D64503E7F21(iLocal_72);
													iLocal_49 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_90)
								{
									if (!unk_0x8682D8A6269E52C9(iLocal_72))
									{
										if ((unk_0x4CB2F72EA418C083(iLocal_72, "random@homelandsecurity", "idle_to_knees_girl", 1) || unk_0x4CB2F72EA418C083(iLocal_72, "random@homelandsecurity", "knees_loop_girl", 1)) && !unk_0xABB40063444DEDAA(iLocal_72))
										{
											unk_0xBE0E7D38FE7C495C(iLocal_72, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, 0, 0, 0);
										}
										else
										{
											unk_0xD706D9D85701BFBD(iLocal_72);
										}
										unk_0xC187A887517978D0(iLocal_72, 0);
										unk_0xBF00F993DA29A169(iLocal_72, func_100());
										unk_0x57532307FA210CDE(iLocal_72, 1);
										func_99();
										bLocal_90 = true;
									}
								}
								if (!unk_0x8682D8A6269E52C9(iLocal_72))
								{
									if (unk_0x4CB2F72EA418C083(iLocal_72, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (unk_0x2D1A3279FE1D23D4(iLocal_72, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											unk_0xD706D9D85701BFBD(iLocal_72);
										}
									}
								}
								if (!iLocal_92)
								{
									if (!func_105())
									{
										if (func_103(&uLocal_154, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_92 = 1;
										}
									}
								}
								else if (!iLocal_91)
								{
									if (!func_105())
									{
										if (func_98() == 0)
										{
											func_103(&uLocal_154, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_98() == 1)
										{
											func_103(&uLocal_154, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_91 = 1;
									}
								}
								if (bLocal_90)
								{
									if (!unk_0x8682D8A6269E52C9(iLocal_72))
									{
										if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_72, 8f, 8f, 8f, 0, 1, 0) || unk_0x735DF363967D2CEC(unk_0x0031992CA618A445()))
										{
											if (unk_0xA761A0B6072010C8(uLocal_120))
											{
												unk_0x0C4BDC77192798AE(&uLocal_120);
											}
										}
										else if (!unk_0xA761A0B6072010C8(uLocal_120))
										{
											uLocal_120 = func_96(iLocal_72, 0, 145);
										}
									}
								}
								if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
								{
									if (unk_0xE790C95BCC9F3F62(iLocal_52[0], unk_0x0031992CA618A445()))
									{
										if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < 2)
										{
										}
									}
								}
								if (!unk_0x8682D8A6269E52C9(iLocal_52[1]))
								{
									if (unk_0xE790C95BCC9F3F62(iLocal_52[1], unk_0x0031992CA618A445()))
									{
										if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < 2)
										{
										}
									}
								}
								if (iLocal_91 && func_95())
								{
									if (!func_105())
									{
										func_93();
										unk_0x4EDE34FBADD967A6(0);
										func_103(&uLocal_154, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										unk_0x056049D9941BD43D(&(iLocal_52[0]));
										unk_0x056049D9941BD43D(&(iLocal_52[1]));
										if (!unk_0x8682D8A6269E52C9(iLocal_72))
										{
											if (unk_0xCA71EE26095D78BE(iLocal_72))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_52)
												{
													if (unk_0x76B3C79DE564AFC6(iLocal_52[iVar0]))
													{
														unk_0x056049D9941BD43D(&(iLocal_52[iVar0]));
													}
													iVar0++;
												}
												unk_0x15007EAE63C7ECCF(1f);
												iLocal_49 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_87();
								func_82();
								func_81();
								func_78();
								func_77();
								if (func_76(Local_93))
								{
									func_62(0);
									func_93();
									unk_0x4EDE34FBADD967A6(0);
									func_103(&uLocal_154, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_60())
								{
									func_62(0);
									func_93();
									unk_0x4EDE34FBADD967A6(0);
									func_103(&uLocal_154, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!unk_0x8682D8A6269E52C9(iLocal_72))
								{
									if (unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Local_93, Global_22, 1, 1, 0) && unk_0x830CAE5496B8AD6B(iLocal_72, unk_0x0031992CA618A445(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (unk_0xCA71EE26095D78BE(iLocal_72))
										{
											if (unk_0xA761A0B6072010C8(uLocal_120))
											{
												unk_0x0C4BDC77192798AE(&uLocal_120);
											}
											if (unk_0xA761A0B6072010C8(uLocal_124))
											{
												unk_0x0C4BDC77192798AE(&uLocal_124);
											}
											if (unk_0xA761A0B6072010C8(uLocal_125))
											{
												unk_0x0C4BDC77192798AE(&uLocal_125);
											}
											if (unk_0xCA71EE26095D78BE(iLocal_72))
											{
												unk_0x38396C255EC4D248(iLocal_72);
											}
											if (func_95())
											{
												if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
												{
													unk_0x0821297CFC3D8B81(unk_0x7899A2987EB03783(), 5f, 2, 0);
												}
												iLocal_49 = 6;
											}
											else
											{
												func_93();
												unk_0x4EDE34FBADD967A6(0);
												func_103(&uLocal_154, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!unk_0x8682D8A6269E52C9(iLocal_72))
												{
													unk_0x173325AAF2CD766A(&uLocal_136);
													unk_0x43EC517AF665D2B9(0, unk_0x0031992CA618A445(), 5000, 2052, 2);
													unk_0x276406356F4120BB(0, Local_96, 1f, -1, 0.25f, 0, 38.9844f);
													unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_SMOKING", 0, 1);
													unk_0xF81AD3C937316CCA(uLocal_136);
													unk_0xEDD5437C49B7B1F8(iLocal_72, uLocal_136);
													unk_0x1F5B34056C3CB80B(&uLocal_136);
													unk_0x390D16BCBFB23E1A(iLocal_72, 1);
												}
												func_34(func_98(), 1, 80, 0, 1);
												iLocal_49 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_33();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_106();
								break;
						}
						if (iLocal_150 && !iLocal_151)
						{
							if (iLocal_49 != 6)
							{
								if (unk_0x00BF23259C14645D(uLocal_149))
								{
									if (unk_0xB69F54D50B0A81C6(uLocal_149) > 0.85f)
									{
										if (unk_0x432757A9E7AAFA96(iLocal_65, 0))
										{
											if (!unk_0x8682D8A6269E52C9(iLocal_72))
											{
												if (!unk_0xA32DC7E16AD1DFB7(iLocal_72, iLocal_65, 0))
												{
													if (!unk_0xABB40063444DEDAA(iLocal_72))
													{
														unk_0xD706D9D85701BFBD(iLocal_72);
														unk_0x7E3C622EB2D4D2E2(iLocal_72, iLocal_65, 2);
														unk_0x390D16BCBFB23E1A(iLocal_72, 1);
														iLocal_151 = 1;
													}
													else
													{
														iLocal_151 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (unk_0x76B3C79DE564AFC6(iLocal_72))
							{
								unk_0xA50DE967C5813F23(&iLocal_72);
							}
							func_4();
						}
						if ((iLocal_49 != 0 && iLocal_49 != 6) && iLocal_49 != 7)
						{
							if (func_1())
							{
								iLocal_49 = 9;
							}
						}
						if (iLocal_49 == 4 || iLocal_49 == 5)
						{
							if (!unk_0x8682D8A6269E52C9(iLocal_72))
							{
								if (!unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_72, 150f, 150f, 150f, 0, 1, 0) || unk_0x7CA73A79B30385F3(iLocal_72, unk_0x0031992CA618A445(), 1))
								{
									unk_0x53E150F8F0AD7101(iLocal_72, unk_0x0031992CA618A445(), 150f, -1, 0, 0);
									func_93();
									func_106();
								}
							}
						}
						if (iLocal_49 < 5)
						{
							unk_0x7EBF60D0132BF685(unk_0x3D35F9864E4640B1());
						}
						if (unk_0x8682D8A6269E52C9(iLocal_52[0]))
						{
							if (unk_0xA761A0B6072010C8(uLocal_121[0]))
							{
								unk_0x0C4BDC77192798AE(&(uLocal_121[0]));
							}
						}
						if (unk_0x8682D8A6269E52C9(iLocal_52[1]))
						{
							if (unk_0xA761A0B6072010C8(uLocal_121[1]))
							{
								unk_0x0C4BDC77192798AE(&(uLocal_121[1]));
							}
						}
						if (unk_0x8682D8A6269E52C9(iLocal_72))
						{
							if (unk_0xA761A0B6072010C8(uLocal_120))
							{
								unk_0x0C4BDC77192798AE(&uLocal_120);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_204();
		}
	}
}

int func_1()
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (unk_0x76B3C79DE564AFC6(iLocal_52[0]))
	{
		if (unk_0x8682D8A6269E52C9(iLocal_52[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_52[1]))
	{
		if (unk_0x8682D8A6269E52C9(iLocal_52[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_72))
	{
		if (unk_0x8682D8A6269E52C9(iLocal_72))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_25457)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	Global_104425 = iParam0;
}

void func_4()
{
	while (func_105())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_32())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_8(-1, 0);
	func_5();
	func_204();
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_104439.f_24856.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_104427 = iParam1;
		if (Global_104425 == 0)
		{
			if (((Global_104428 == 1 || Global_104428 == 5) || Global_104428 == 11) || Global_104428 == 25)
			{
				func_3(2);
			}
			else if ((Global_104428 == 26 || Global_104428 == 8) || Global_104428 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104439.f_10055[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104439.f_10055[iParam0 /*12*/].f_6 == 11 || Global_104439.f_10055[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104439.f_10055[iParam0 /*12*/].f_5 = 1;
		Global_104439.f_10055[iParam0 /*12*/].f_10 = uParam1;
		Global_104439.f_10055[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_10();
	}
}

void func_10()
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
	Global_104175 = 0;
	Global_104176 = 0;
	Global_104177 = 0;
	Global_104178 = 0;
	Global_104179 = 0;
	Global_104180 = 0;
	Global_104181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104439.f_10055.f_3853;
	Global_104439.f_10055.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104439.f_10055[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104439.f_10055[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104175++;
					fVar1 = (fVar1 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104176++;
					fVar2 = (fVar2 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104177++;
					fVar3 = (fVar3 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104178++;
					fVar4 = (fVar4 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104179++;
					fVar5 = (fVar5 + (Global_104439.f_10055[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104180++;
					fVar6 = (fVar6 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104181++;
					fVar7 = (fVar7 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104158 > 0)
	{
		if (Global_104175 == Global_104158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104159 > 0)
	{
		if (Global_104176 == Global_104159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104160 > 0)
	{
		if (Global_104177 == Global_104160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104161 > 0)
	{
		if (Global_104178 == Global_104161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104162 > 0)
	{
		if (((Global_104179 == Global_104162 || (Global_104162 * 10 / Global_104179) < 41) || Global_104179 > Global_104165) || Global_104179 == Global_104165)
		{
			if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 14))
			{
				if (Global_104179 == Global_104162)
				{
					unk_0x25676C1B212BF4A8(joaat("num_rndevents_completed"), Global_104162, 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104163 > 0)
	{
		if (Global_104180 == Global_104163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104164 > 0)
	{
		if (Global_104181 == Global_104164)
		{
			fVar7 = 5f;
		}
	}
	Global_104439.f_10055.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104179 > Global_104165 || Global_104179 == Global_104165)
	{
		iVar9 = Global_104165;
	}
	else
	{
		iVar9 = Global_104179;
	}
	unk_0xE931A869061F7BD2(joaat("num_missions_completed"), Global_104175, 1);
	unk_0xE931A869061F7BD2(joaat("num_missions_available"), Global_104158, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_completed"), Global_104176, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_available"), Global_104159, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_completed"), Global_104177, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_available"), Global_104160, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_completed"), Global_104178, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_available"), Global_104161, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_available"), Global_104165, 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_completed"), (Global_104181 + Global_104180), 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_available"), (Global_104164 + Global_104163), 1);
	Global_104182 = (Global_104175 * 100 / Global_104158);
	Global_104184 = ((Global_104177 + Global_104176) * 100 / (Global_104160 + Global_104159));
	Global_104183 = ((Global_104178 + iVar9) * 100 / (Global_104161 + Global_104165));
	Global_104185 = ((Global_104180 + Global_104181) * 100 / (Global_104163 + Global_104164));
	unk_0x16E461F1C38154B6(joaat("total_progress_made"), Global_104439.f_10055.f_3853, 1);
	unk_0xE931A869061F7BD2(joaat("percent_story_missions"), Global_104182, 1);
	unk_0xE931A869061F7BD2(joaat("percent_ambient_missions"), Global_104183, 1);
	unk_0xE931A869061F7BD2(joaat("percent_oddjobs"), Global_104184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853))
	{
		func_12(13, unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853));
	}
	if (!unk_0xCED7B36AA85A9CCD())
	{
		if (!Global_70785)
		{
			if (func_11() == 2 == 0 && !unk_0x27CA09C6DFAB1E79())
			{
				if (unk_0x04F2E3CF902D6F5D())
				{
					Global_104173 = 0;
				}
				if (!Global_55854)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()
{
	return Global_25222;
}

int func_12(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()
{
	return Global_1312735;
}

int func_15(int iParam0, int iParam1)
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

int func_16(int iParam0)
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

void func_17(int iParam0)
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
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_20271.f_150[iVar1]), iVar0);
	}
}

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xB3404E397FF56B3B(sParam0, ""))
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
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0xB3404E397FF56B3B(&(Global_104439.f_20271[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104439.f_20271.f_145 < 9)
	{
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_4), sParam1, 16);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_8 = (unk_0x31CD6E9F83C10233() + iParam3);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_9 = iParam5;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_11 = iParam6;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_12 = uParam2;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_13 = iParam7;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_14 = iParam8;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = ((unk_0x31CD6E9F83C10233() + iParam3) + iParam4);
		}
		else
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = -1;
		}
		Global_104439.f_20271.f_145++;
		func_20();
	}
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104439.f_20271.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[0])
			{
				Global_104439.f_20271.f_146[0] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[1])
			{
				Global_104439.f_20271.f_146[1] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[2])
			{
				Global_104439.f_20271.f_146[2] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_21()
{
	func_22();
	switch (Global_104439.f_2244.f_539.f_4301)
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

void func_22()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_26(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_25(unk_0x0031992CA618A445());
			if (func_24(iVar0) && (!func_23(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_24(Global_104439.f_2244.f_539.f_4301))
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

bool func_23(int iParam0)
{
	return Global_35813 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_27(int iParam0)
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
		return unk_0x2A3398C6222EB190(Global_104439.f_20271.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_28(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24856.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)
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

int func_30()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x49CAADAD1ABAB70A(), 64);
	uVar16 = func_31(Var0);
	return uVar16;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x50B7853132D8438E(&cParam0))
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

int func_32()
{
	return 1;
}

void func_33()
{
	switch (iLocal_152)
	{
		case 0:
			func_93();
			unk_0x4EDE34FBADD967A6(0);
			func_103(&uLocal_154, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_152++;
			break;
		
		case 1:
			iLocal_152++;
			break;
		
		case 2:
			iLocal_152++;
			break;
		
		case 3:
			if (!unk_0x8682D8A6269E52C9(iLocal_72))
			{
				unk_0x173325AAF2CD766A(&uLocal_136);
				unk_0x43EC517AF665D2B9(0, unk_0x0031992CA618A445(), 5000, 2052, 2);
				unk_0x276406356F4120BB(0, Local_96, 1f, -1, 0.25f, 0, 38.9844f);
				unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xF81AD3C937316CCA(uLocal_136);
				unk_0xEDD5437C49B7B1F8(iLocal_72, uLocal_136);
				unk_0x1F5B34056C3CB80B(&uLocal_136);
				unk_0x390D16BCBFB23E1A(iLocal_72, 1);
			}
			iLocal_152++;
			break;
		
		case 4:
			func_34(func_98(), 1, 80, 0, 1);
			unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
			func_4();
			break;
	}
}

void func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_35(Global_104439.f_27911[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x2553A7EB99AABF55(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xE931A869061F7BD2(iVar1, iVar0, 1);
	}
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_59();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_58(99, 1);
					func_57(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_57(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_57(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_43(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_42(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_42(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_57(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_57(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_57(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA1719FD655B44EB2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_42(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_57(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_57(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_57(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_41(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_58(95, iParam3);
					break;
				
				case 1:
					func_58(97, iParam3);
					break;
				
				case 2:
					func_58(96, iParam3);
					break;
			}
			func_58(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_38(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_38(iVar1);
	}
	iVar5 = (Global_53028[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53028[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53028[iVar2] = 2147483647;
				}
				else
				{
					Global_53028[iVar2] = (Global_53028[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_57(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_57(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_57(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53028[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53028[iVar2];
			Global_53028[iVar2] = (Global_53028[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104439.f_20425.f_233[iVar2 /*69*/]++;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_1++;
		if (Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_37(iParam0);
	if (Global_35813 == 15)
	{
		func_36(0);
	}
	return 1;
}

void func_36(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53036[iVar0 /*3*/][0] = Global_104439.f_20425[iVar0];
		Global_53036.f_31[iVar0 /*3*/][0] = Global_104439.f_20425.f_11[iVar0];
		Global_53036.f_62[iVar0 /*3*/][0] = Global_104439.f_20425.f_22[iVar0];
		Global_53036.f_93[iVar0 /*3*/][0] = Global_104439.f_20425.f_33[iVar0];
		Global_53036.f_124[iVar0 /*3*/][0] = Global_104439.f_20425.f_44[iVar0];
		Global_53036.f_155[iVar0 /*3*/][0] = Global_104439.f_20425.f_55[iVar0];
		Global_53036.f_186[iVar0 /*3*/][0] = Global_104439.f_20425.f_66[iVar0];
		Global_53036.f_217[iVar0 /*3*/][0] = Global_104439.f_20425.f_77[iVar0];
		Global_53036.f_248[iVar0 /*3*/][0] = Global_104439.f_20425.f_88[iVar0];
		if (!bParam0)
		{
			Global_53036[iVar0 /*3*/][1] = Global_104439.f_20425[iVar0];
			Global_53036.f_31[iVar0 /*3*/][1] = Global_104439.f_20425.f_11[iVar0];
			Global_53036.f_62[iVar0 /*3*/][1] = Global_104439.f_20425.f_22[iVar0];
			Global_53036.f_93[iVar0 /*3*/][1] = Global_104439.f_20425.f_33[iVar0];
			Global_53036.f_124[iVar0 /*3*/][1] = Global_104439.f_20425.f_44[iVar0];
			Global_53036.f_155[iVar0 /*3*/][1] = Global_104439.f_20425.f_55[iVar0];
			Global_53036.f_186[iVar0 /*3*/][1] = Global_104439.f_20425.f_66[iVar0];
			Global_53036.f_217[iVar0 /*3*/][1] = Global_104439.f_20425.f_77[iVar0];
			Global_53036.f_248[iVar0 /*3*/][1] = Global_104439.f_20425.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53028[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE931A869061F7BD2(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE931A869061F7BD2(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE931A869061F7BD2(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_38(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0) || unk_0x2A3398C6222EB190(Global_2097152[func_40() /*11035*/].f_7550.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		unk_0xD804ACF2A7171150(&(Global_2097152[func_40() /*11035*/].f_7550.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xC8EBA5D7FC75C1C0("COUP_RED");
		unk_0x7C8A7ECFBAD2C8C4(func_39(iParam0));
		unk_0x10DFDE006F19F20F(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_41(int iParam0)
{
	func_58(93, iParam0);
	func_58(29, iParam0);
	func_58(30, iParam0);
}

bool func_42(int iParam0)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2097152[func_40() /*11035*/].f_7550.f_10, iParam0);
}

int func_43(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x38260021B4E87C3F(27))
	{
		return 0;
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2553A7EB99AABF55(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE931A869061F7BD2(joaat("num_cash_spent"), iVar1, 1);
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_44(27, 1);
	return 1;
}

int func_44(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_45(iParam0, iParam1);
}

int func_45(int iParam0, int iParam1)
{
	if (func_23(14) && !func_56(iParam0))
	{
		return 0;
	}
	if (unk_0x38260021B4E87C3F(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_70785)
	{
		return 0;
	}
	if (func_55(&Global_2608378))
	{
		if (func_53(&Global_2608378, iParam0))
		{
			return 0;
		}
		if (func_46(&Global_2608378, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x16E13F8FE3B91C92(iParam0))
		{
			return 0;
		}
		if (unk_0x38260021B4E87C3F(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_46(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_56(iParam1))
	{
		return 0;
	}
	if (func_53(uParam0, iParam1))
	{
		return 0;
	}
	if (func_52(uParam0) < 0f)
	{
		func_51(uParam0, 0);
	}
	func_49(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_47(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_47(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_56(iParam1))
	{
		return 0;
	}
	if (func_53(uParam0, iParam1))
	{
		return 0;
	}
	if (func_52(uParam0) < 0f)
	{
		func_51(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_48(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_48(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_50(uParam0, iVar0);
		iVar0++;
	}
	func_51(uParam0, (Global_2608377 - 0.5f));
}

void func_50(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_51(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_52(var uParam0)
{
	return uParam0->f_72;
}

bool func_53(var uParam0, int iParam1)
{
	return func_54(uParam0, iParam1) != -1;
}

int func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_55(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2553A7EB99AABF55(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE931A869061F7BD2(iParam0, iVar0, 1);
}

void func_58(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0x2553A7EB99AABF55(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE931A869061F7BD2(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_59()
{
	int iVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53028[0] == iVar0)
		{
			Global_53028[0] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53028[1] == iVar0)
		{
			Global_53028[1] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53028[2] == iVar0)
		{
			Global_53028[2] = iVar0;
		}
	}
}

int func_60()
{
	if (func_98() == 2)
	{
		if (func_61())
		{
			if (unk_0x1410333E912D4EC6(-1014.154f, 4881.411f, 245.0001f, unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 0), 1) < 400f)
			{
				if (!Global_25461)
				{
					unk_0x1E420F926A7BC4D2("AC_EN_ROUTE_CULT");
					Global_25461 = 1;
					if (!Global_25460)
					{
						Global_25460 = 1;
						return 1;
					}
				}
			}
			else if (Global_25461)
			{
				unk_0x1E420F926A7BC4D2("AC_LEFT_AREA");
				Global_25461 = 0;
			}
		}
	}
	return 0;
}

bool func_61()
{
	return Global_25456;
}

void func_62(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_77)
		{
			if (func_65(&uLocal_154, "REHOMAU", &Local_84, &Local_78, 8, 0, 0))
			{
				iLocal_77 = 0;
			}
		}
	}
	else if (!iLocal_77 && unk_0x0065EA0CBFB686EA())
	{
		Local_84 = { func_64() };
		Local_78 = { func_63() };
		func_113();
		iLocal_77 = 1;
	}
}

struct<6> func_63()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0x1B2C99C290B1EF3B();
		iVar6 = (iVar6 + Global_16755);
		if (iVar6 > -1)
		{
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_64()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

bool func_65(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_66(sParam2, iParam4, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)
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
					func_74();
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
		if (func_73(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_72();
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
				func_71();
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
				if (func_70())
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
			if (func_69())
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
			func_68();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_67();
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
		func_74();
	}
	return 0;
}

void func_67()
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

void func_68()
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

int func_69()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_70()
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

void func_71()
{
	if (func_23(14))
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
		Global_14443 = func_98();
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

void func_72()
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

bool func_73(int iParam0, int iParam1)
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

void func_74()
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

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_76(struct<3> Param0)
{
	if (func_98() == 2)
	{
		if (func_61() && !Global_25459)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Param0) > (fLocal_47 + 200f) || unk_0x1410333E912D4EC6(-1014.154f, 4881.411f, 245.0001f, unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 0), 1) < 400f)
			{
				Global_25459 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_77()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_72))
	{
		if (!iLocal_105)
		{
			if (!unk_0x7A6C051038031EFA(unk_0x7899A2987EB03783(), 0))
			{
				if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), unk_0x7899A2987EB03783(), 1) && unk_0xA32DC7E16AD1DFB7(iLocal_72, unk_0x7899A2987EB03783(), 0))
				{
					func_62(0);
					func_93();
					unk_0x4EDE34FBADD967A6(0);
					func_103(&uLocal_154, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_105 = 1;
				}
			}
		}
		else if (!unk_0x7A6C051038031EFA(unk_0x7899A2987EB03783(), 0))
		{
			if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), unk_0x7899A2987EB03783(), 0) && unk_0xA32DC7E16AD1DFB7(iLocal_72, unk_0x7899A2987EB03783(), 0))
			{
				iLocal_105 = 0;
			}
		}
		if (!iLocal_106)
		{
			if (unk_0xBCAD8C5FE03FBCDD(unk_0x0031992CA618A445()))
			{
				func_62(0);
				func_93();
				unk_0x4EDE34FBADD967A6(0);
				func_103(&uLocal_154, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_106 = 1;
			}
		}
		else if (!unk_0xBCAD8C5FE03FBCDD(unk_0x0031992CA618A445()))
		{
			iLocal_106 = 0;
		}
		if (!iLocal_107)
		{
			if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
			{
				func_62(0);
				func_93();
				unk_0x4EDE34FBADD967A6(0);
				func_103(&uLocal_154, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_107 = 1;
			}
		}
		else if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
		{
			iLocal_107 = 0;
		}
	}
}

void func_78()
{
	if (!func_79())
	{
		func_62(1);
	}
	if (!func_105())
	{
		switch (iLocal_130)
		{
			case 0:
				if (func_98() == 0)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			
			case 1:
				func_103(&uLocal_154, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 2:
				func_103(&uLocal_154, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 3:
				if (func_98() == 0)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			
			case 4:
				func_103(&uLocal_154, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 5:
				if (func_98() == 0)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			
			case 6:
				func_103(&uLocal_154, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 7:
				func_103(&uLocal_154, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_130++;
				break;
			
			case 8:
				if (func_98() == 0)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_98() == 1)
				{
					func_103(&uLocal_154, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_130++;
				break;
			
			case 9:
				func_103(&uLocal_154, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_130++;
				break;
			}
	}
}

int func_79()
{
	if (((((((((func_80("REHOM_QM") || func_80("REHOM_GETOUT")) || func_80("REHOM_SHOOT")) || func_80("REHOM_JACK")) || func_80("REHOM_WRONG")) || func_80("REHOM_CULT")) || func_80("REHOM_STOP")) || func_80("REHOM_NOVEH")) || func_80("REHOM_UNS1")) || func_80("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_80(char* sParam0)
{
	var uVar0;
	
	if (func_105())
	{
		MemCopy(&uVar0, {func_64()}, 4);
		if (unk_0xB3404E397FF56B3B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_81()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_72))
	{
		if (unk_0x52559DAD5F31039D(iLocal_72))
		{
			if (!iLocal_142)
			{
				iLocal_143 = unk_0x31CD6E9F83C10233();
				iLocal_142 = 1;
			}
			else
			{
				iLocal_144 = unk_0x31CD6E9F83C10233();
			}
		}
		else
		{
			iLocal_142 = 0;
		}
		if ((iLocal_144 - iLocal_143) > 180000)
		{
			if (unk_0xCA71EE26095D78BE(iLocal_72))
			{
				unk_0x38396C255EC4D248(iLocal_72);
				func_103(&uLocal_154, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_106();
			}
		}
	}
}

void func_82()
{
	if (unk_0x1C66A71D5114A598(unk_0x0031992CA618A445()))
	{
		if (!iLocal_145)
		{
			iLocal_147 = unk_0x31CD6E9F83C10233();
			iLocal_145 = 1;
		}
		else
		{
			iLocal_148 = unk_0x31CD6E9F83C10233();
		}
	}
	else
	{
		iLocal_148 = 0;
		iLocal_145 = 0;
		iLocal_146 = 0;
	}
	if ((iLocal_148 - iLocal_147) > 50000 && !iLocal_146)
	{
		func_62(0);
		func_93();
		unk_0x4EDE34FBADD967A6(0);
		func_103(&uLocal_154, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_146 = 1;
	}
	if ((iLocal_148 - iLocal_147) > 60000 && iLocal_146)
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_72))
		{
			unk_0x53E150F8F0AD7101(iLocal_72, unk_0x0031992CA618A445(), 150f, -1, 0, 0);
			func_83(iLocal_72, 120000, 0);
			unk_0x390D16BCBFB23E1A(iLocal_72, 1);
			if (unk_0xCA71EE26095D78BE(iLocal_72))
			{
				unk_0x38396C255EC4D248(iLocal_72);
			}
		}
		func_106();
	}
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	iVar0 = func_86(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_85(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_84();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_36721[iVar2 /*5*/] = 0;
	Global_36721[iVar2 /*5*/].f_1 = iParam0;
	Global_36721[iVar2 /*5*/].f_2 = iParam1;
	Global_36721[iVar2 /*5*/].f_3 = iParam1;
	Global_36721[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x0031992CA618A445())
	{
		Global_36942 = 1;
	}
	Global_36720++;
	return 1;
}

int func_84()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36721[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36721[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_86(int iParam0)
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
		if (iParam0 == Global_36747[iVar0 /*5*/].f_1)
		{
			return Global_36747[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_87()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_72))
	{
		if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_72, 8f, 8f, 8f, 0, 1, 0) || unk_0x735DF363967D2CEC(unk_0x0031992CA618A445()))
		{
			if (unk_0xA761A0B6072010C8(uLocal_120))
			{
				unk_0x0C4BDC77192798AE(&uLocal_120);
			}
			if (!unk_0xCA71EE26095D78BE(iLocal_72))
			{
				unk_0xBF00F993DA29A169(iLocal_72, unk_0xC95BCBF0579C6F1A(unk_0x3D35F9864E4640B1()));
				unk_0xC187A887517978D0(iLocal_72, 0);
			}
			if (!unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				if (!unk_0xA761A0B6072010C8(uLocal_124))
				{
					uLocal_124 = func_91(Local_93, 1);
				}
				if (unk_0x735DF363967D2CEC(unk_0x0031992CA618A445()))
				{
					if (!unk_0xA761A0B6072010C8(uLocal_124))
					{
						uLocal_124 = func_91(Local_93, 1);
					}
				}
				if (func_98() == 2 && !func_90())
				{
					if (!unk_0xA761A0B6072010C8(uLocal_125))
					{
						uLocal_125 = func_91(Local_99, 0);
						unk_0x3B815A6E8530D3A5(uLocal_125, 269);
						func_88();
					}
				}
			}
		}
		else
		{
			if (!unk_0xA761A0B6072010C8(uLocal_120))
			{
				uLocal_120 = func_96(iLocal_72, 0, 145);
			}
			if (unk_0xA761A0B6072010C8(uLocal_124))
			{
				unk_0x0C4BDC77192798AE(&uLocal_124);
			}
		}
	}
}

void func_88()
{
	if (func_98() == 2)
	{
		if (!Global_25458)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_25458 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_90()
{
	if (Global_104439.f_24856.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

var func_91(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x97AC4FC1EEAC7A8B(Param0);
	unk_0x067D86058370B7EB(uVar0, func_92(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
	unk_0xE4E08EF8CF4469E9(uVar0, iParam3);
	return uVar0;
}

float func_92(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_93()
{
	Global_14611 = 0;
	func_94();
}

void func_94()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
	}
}

int func_95()
{
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		uLocal_118 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		if (unk_0x432757A9E7AAFA96(uLocal_118, 0))
		{
			if (!unk_0x8682D8A6269E52C9(iLocal_72))
			{
				if (unk_0x26D7BF365BA84F9C(iLocal_72, iLocal_118))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_96(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_97(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA761A0B6072010C8(uVar0)) && unk_0xA56C5821F50C3275(&(Global_104439.f_27911[iParam2 /*29*/].f_3)))
	{
		unk_0x50B5259DFC71B8EC(uVar0, &(Global_104439.f_27911[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_97(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x76B3C79DE564AFC6(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE80C2D6BF636C6C4(iParam0);
	if (unk_0x036E1D5EA494CEB2(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_92(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x8D60956768933D7C(uVar0, bParam1);
		}
		else
		{
			unk_0xEB934A06DDA5027D(uVar0, 2);
		}
	}
	else if (unk_0x269F274F1955DE87(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_92(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
		unk_0x8D60956768933D7C(uVar0, bParam1);
	}
	else if (unk_0xC207EA827E8CD735(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_92(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_98()
{
	func_22();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_99()
{
	if (!func_90())
	{
		if (func_98() == 2)
		{
			Global_25456 = 1;
		}
	}
}

var func_100()
{
	return unk_0xC95BCBF0579C6F1A(unk_0xED1168B8D2D313FA());
}

int func_101()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_65))
	{
		if (((unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_65, 0) && unk_0xA32DC7E16AD1DFB7(iLocal_72, iLocal_65, 0)) && !unk_0xA32DC7E16AD1DFB7(iLocal_52[0], iLocal_65, 0)) && !unk_0xA32DC7E16AD1DFB7(iLocal_52[1], iLocal_65, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_102(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_66(sParam2, iParam3, 0);
}

int func_104()
{
	if (unk_0x2A3398C6222EB190(unk_0x3AF262D7332EEDF5(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	func_204();
}

void func_107()
{
	if (!iLocal_109)
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
		{
			unk_0x541B678DB67C7CF0(iLocal_52[0], 0);
			unk_0xD706D9D85701BFBD(iLocal_52[0]);
			unk_0x173325AAF2CD766A(&uLocal_136);
			unk_0xCFA3B07B6CEEF62C(0);
			unk_0x8B4EE19968C93083(0, unk_0x0031992CA618A445(), 0, 16);
			unk_0xF81AD3C937316CCA(uLocal_136);
			unk_0xEDD5437C49B7B1F8(iLocal_52[0], uLocal_136);
			unk_0x1F5B34056C3CB80B(&uLocal_136);
			unk_0x390D16BCBFB23E1A(iLocal_52[0], 1);
			if (unk_0xA761A0B6072010C8(uLocal_121[0]))
			{
				unk_0x8D60956768933D7C(uLocal_121[0], false);
			}
			unk_0x5AE11BC36633DE4E(0);
			iLocal_109 = 1;
		}
		else
		{
			unk_0x5AE11BC36633DE4E(500);
			iLocal_109 = 1;
		}
	}
	if (!iLocal_110)
	{
		if (unk_0xA761A0B6072010C8(uLocal_121[1]))
		{
			unk_0x8D60956768933D7C(uLocal_121[1], false);
		}
		func_93();
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x8682D8A6269E52C9(iLocal_52[1]))
		{
			func_108(iLocal_52[1], "GENERIC_INSULT_HIGH", 24);
			unk_0x541B678DB67C7CF0(iLocal_52[1], 2);
			if ((unk_0x4CB2F72EA418C083(iLocal_52[1], "random@homelandsecurity", "idle_cop_ground", 3) || unk_0x00BF23259C14645D(uLocal_149)) && !unk_0xABB40063444DEDAA(iLocal_52[1]))
			{
				unk_0xA8BB581B2FB87711(iLocal_52[1], 16);
				unk_0x173325AAF2CD766A(&uLocal_136);
				unk_0xBE0E7D38FE7C495C(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				unk_0x8B4EE19968C93083(0, unk_0x0031992CA618A445(), 0, 16);
				unk_0xF81AD3C937316CCA(uLocal_136);
				unk_0xEDD5437C49B7B1F8(iLocal_52[1], uLocal_136);
				unk_0x1F5B34056C3CB80B(&uLocal_136);
				unk_0x390D16BCBFB23E1A(iLocal_52[1], 1);
				iLocal_110 = 1;
			}
			else
			{
				unk_0x8B4EE19968C93083(iLocal_52[1], unk_0x0031992CA618A445(), 0, 16);
				unk_0x390D16BCBFB23E1A(iLocal_52[1], 1);
				iLocal_110 = 1;
			}
		}
	}
	else if (!unk_0x8682D8A6269E52C9(iLocal_52[1]))
	{
		if (((!unk_0x4CB2F72EA418C083(iLocal_52[1], "random@homelandsecurity", "idle_cop_ground", 3) && !unk_0x4CB2F72EA418C083(iLocal_52[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && unk_0xF57D21B49780A7A8(iLocal_52[1], 780511057) != 0) && unk_0xF57D21B49780A7A8(iLocal_52[1], 780511057) != 1)
		{
			iLocal_110 = 1;
		}
	}
}

void func_108(var uParam0, char* sParam1, int iParam2)
{
	unk_0x4A5113B7E65C8C80(uParam0, sParam1, func_109(iParam2), 1);
}

int func_109(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_110()
{
	iLocal_49 = 3;
}

void func_111()
{
	func_93();
	unk_0x4EDE34FBADD967A6(0);
	func_103(&uLocal_154, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_49 = 3;
}

void func_112()
{
	iLocal_49 = 3;
}

void func_113()
{
	Global_14611 = 0;
	func_114();
}

void func_114()
{
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x8C8894B8C4CFE97F();
		Global_16756 = 0;
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

int func_115()
{
	iLocal_126 = 0;
	while (iLocal_126 <= 1)
	{
		if (unk_0x7A6C051038031EFA(iLocal_52[iLocal_126], 0))
		{
			if (unk_0x7CA73A79B30385F3(iLocal_52[iLocal_126], unk_0x0031992CA618A445(), 1))
			{
				return 1;
			}
		}
		iLocal_126++;
	}
	return 0;
}

void func_116()
{
	iLocal_128 = unk_0x31CD6E9F83C10233();
	if (!bLocal_138)
	{
		switch (iLocal_51)
		{
			case 0:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_127 = unk_0x31CD6E9F83C10233();
					iLocal_51 = 1;
				}
				break;
			
			case 1:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_127 = unk_0x31CD6E9F83C10233();
					iLocal_51 = 2;
				}
				break;
			
			case 2:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if ((iLocal_128 - iLocal_127) > 6000)
				{
					if (func_103(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_127 = unk_0x31CD6E9F83C10233();
						iLocal_51 = 3;
					}
				}
				break;
			
			case 3:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (func_103(&uLocal_154, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_127 = unk_0x31CD6E9F83C10233();
					iLocal_51 = 4;
				}
				break;
			
			case 4:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if ((iLocal_128 - iLocal_127) > 5500)
				{
					if (func_103(&uLocal_154, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_127 = unk_0x31CD6E9F83C10233();
						iLocal_51 = 5;
					}
				}
				break;
			
			case 5:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_120() && !iLocal_114)
				{
					iLocal_51 = 13;
				}
				if (!iLocal_115 && unk_0x83666F9FB8FEBD4B() > 5000)
				{
					unk_0x173325AAF2CD766A(&uLocal_136);
					unk_0x43EC517AF665D2B9(0, iLocal_72, -1, 2054, 2);
					unk_0x3933C434ECC3BB69(0, iLocal_72, -1);
					unk_0xF81AD3C937316CCA(uLocal_136);
					unk_0xEDD5437C49B7B1F8(iLocal_52[0], uLocal_136);
					unk_0x390D16BCBFB23E1A(iLocal_52[0], 1);
					iLocal_115 = 1;
				}
				if ((iLocal_128 - iLocal_127) > 3000 || iLocal_114)
				{
					if (((unk_0x432757A9E7AAFA96(iLocal_65, 0) && !unk_0x8682D8A6269E52C9(iLocal_52[0])) && !unk_0x8682D8A6269E52C9(iLocal_52[1])) && !unk_0x8682D8A6269E52C9(iLocal_72))
					{
						if (unk_0x00BF23259C14645D(uLocal_149))
						{
							if (unk_0xB69F54D50B0A81C6(uLocal_149) > 0.98f)
							{
								if (!func_105())
								{
									if (unk_0x51D10CE903646C26(iLocal_52[0], iLocal_72, 10f))
									{
										if (func_103(&uLocal_154, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											unk_0xCFA3B07B6CEEF62C(iLocal_52[0]);
											uLocal_149 = unk_0x87070FAB863D4019(0f, 0f, 0f, 0f, 0f, 0f, 2);
											unk_0xB2F559B96F92CDFF(uLocal_149, iLocal_65, 0);
											unk_0x5C774A8BEBE5BD26(iLocal_72, uLocal_149, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x5C774A8BEBE5BD26(iLocal_52[0], uLocal_149, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x5C774A8BEBE5BD26(iLocal_52[1], uLocal_149, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x5049C2D0A202B94E(iLocal_65, "exit_car", "random@homelandsecurity", 4f, 0, 0, 0, 0, 0);
											iLocal_150 = 1;
											iLocal_127 = unk_0x31CD6E9F83C10233();
											iLocal_51 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_119())
				{
					iLocal_51 = 15;
				}
				break;
			
			case 15:
				if (((unk_0x432757A9E7AAFA96(iLocal_65, 0) && !unk_0x8682D8A6269E52C9(iLocal_52[0])) && !unk_0x8682D8A6269E52C9(iLocal_52[1])) && !unk_0x8682D8A6269E52C9(iLocal_72))
				{
					if (unk_0x00BF23259C14645D(uLocal_149))
					{
						if (!func_105())
						{
							if (unk_0x51D10CE903646C26(iLocal_52[0], iLocal_72, 10f))
							{
								if (func_103(&uLocal_154, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									unk_0xCFA3B07B6CEEF62C(iLocal_52[0]);
									uLocal_149 = unk_0x87070FAB863D4019(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0xB2F559B96F92CDFF(uLocal_149, iLocal_65, 0);
									unk_0x5C774A8BEBE5BD26(iLocal_72, uLocal_149, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x5C774A8BEBE5BD26(iLocal_52[0], uLocal_149, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x5C774A8BEBE5BD26(iLocal_52[1], uLocal_149, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x5049C2D0A202B94E(iLocal_65, "exit_car", "random@homelandsecurity", 2f, 0, 0, 0, 0, 0);
									iLocal_150 = 1;
									iLocal_127 = unk_0x31CD6E9F83C10233();
									iLocal_51 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_117();
				if (unk_0x00BF23259C14645D(uLocal_149))
				{
					if (unk_0xB69F54D50B0A81C6(uLocal_149) > 0.45f)
					{
						if ((unk_0x432757A9E7AAFA96(iLocal_65, 0) && !unk_0x8682D8A6269E52C9(iLocal_72)) && !unk_0x8682D8A6269E52C9(iLocal_52[0]))
						{
						}
					}
				}
				if (unk_0x00BF23259C14645D(uLocal_149))
				{
					if (unk_0xB69F54D50B0A81C6(uLocal_149) > 0.9f)
					{
						if (unk_0x432757A9E7AAFA96(iLocal_65, 0))
						{
							if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
							{
								unk_0x2E0E5BF2A31392F4(iLocal_52[0], iLocal_65, -1, -1, 1f, 9, 0);
								iLocal_51 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_117();
				if (unk_0x00BF23259C14645D(uLocal_149))
				{
					if (unk_0xB69F54D50B0A81C6(uLocal_149) > 0.95f)
					{
						if (unk_0x432757A9E7AAFA96(iLocal_65, 0))
						{
							if (!unk_0x8682D8A6269E52C9(iLocal_52[1]))
							{
								unk_0x2E0E5BF2A31392F4(iLocal_52[1], iLocal_65, -1, 0, 1f, 9, 0);
								unk_0x390D16BCBFB23E1A(iLocal_52[1], 1);
								iLocal_51 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_117();
				if ((unk_0x432757A9E7AAFA96(iLocal_65, 0) && !unk_0x8682D8A6269E52C9(iLocal_52[0])) && !unk_0x8682D8A6269E52C9(iLocal_52[1]))
				{
					if ((unk_0x26D7BF365BA84F9C(iLocal_72, iLocal_65) && unk_0x26D7BF365BA84F9C(iLocal_52[0], iLocal_65)) && unk_0x26D7BF365BA84F9C(iLocal_52[1], iLocal_65))
					{
						unk_0xF48F6EEC1EBEB012(iLocal_52[0], iLocal_65, 15f, 786468);
						unk_0x0F85FB40BC1CA4C2(iLocal_65, 1);
						bLocal_138 = true;
					}
				}
				break;
			
			case 9:
				unk_0x173325AAF2CD766A(&uLocal_136);
				unk_0xCFA3B07B6CEEF62C(0);
				unk_0x43EC517AF665D2B9(0, unk_0x0031992CA618A445(), 20000, 0, 2);
				unk_0x11E129FEA365DF5C(0, unk_0x0031992CA618A445(), -1, 0);
				unk_0xF81AD3C937316CCA(uLocal_136);
				if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
				{
					unk_0xEDD5437C49B7B1F8(iLocal_52[0], uLocal_136);
				}
				unk_0x1F5B34056C3CB80B(&uLocal_136);
				if (!iLocal_112)
				{
					if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 4) && !unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 3))
					{
						func_93();
						unk_0x4EDE34FBADD967A6(0);
						func_103(&uLocal_154, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 3) && !unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 4))
					{
						func_93();
						unk_0x4EDE34FBADD967A6(0);
						if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
						{
							func_108(iLocal_52[0], "GUN_COOL", 24);
						}
					}
					iLocal_112 = 1;
					iLocal_134 = unk_0x31CD6E9F83C10233();
				}
				iLocal_51 = 10;
				break;
			
			case 10:
				if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6) && unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_135 = unk_0x31CD6E9F83C10233();
				}
				else
				{
					iLocal_51 = 13;
				}
				if (((iLocal_135 - iLocal_134) > 6000 && unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6)) && !iLocal_113)
				{
					if (func_103(&uLocal_154, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_134 = unk_0x31CD6E9F83C10233();
						iLocal_113 = 1;
					}
					iLocal_51 = 11;
				}
				break;
			
			case 11:
				if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6) && unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_135 = unk_0x31CD6E9F83C10233();
				}
				else
				{
					iLocal_51 = 13;
				}
				if (((iLocal_135 - iLocal_134) > 9000 && unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6)) || iLocal_140)
				{
					if (func_103(&uLocal_154, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_51 = 12;
					}
				}
				break;
			
			case 12:
				if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
				{
					iLocal_135 = unk_0x31CD6E9F83C10233();
				}
				else
				{
					iLocal_51 = 13;
				}
				if ((iLocal_135 - iLocal_134) > 13000)
				{
					iLocal_49 = 3;
				}
				break;
			
			case 13:
				if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
				{
					unk_0x173325AAF2CD766A(&uLocal_136);
					unk_0xCFA3B07B6CEEF62C(0);
					unk_0x43EC517AF665D2B9(0, unk_0x0031992CA618A445(), -1, 2052, 4);
					unk_0x3933C434ECC3BB69(0, unk_0x0031992CA618A445(), -1);
					unk_0xF81AD3C937316CCA(uLocal_136);
					unk_0xEDD5437C49B7B1F8(iLocal_52[0], uLocal_136);
					unk_0x1F5B34056C3CB80B(&uLocal_136);
				}
				if (iLocal_141)
				{
					if (!unk_0x8682D8A6269E52C9(iLocal_52[1]))
					{
						if (!unk_0x8682D8A6269E52C9(iLocal_72))
						{
							if (unk_0xF57D21B49780A7A8(iLocal_52[1], 1785177548) != 1)
							{
								unk_0x173325AAF2CD766A(&uLocal_136);
								unk_0xCFA3B07B6CEEF62C(0);
								unk_0x3933C434ECC3BB69(0, iLocal_72, 0);
								unk_0x43EC517AF665D2B9(0, iLocal_72, 20000, 0, 2);
								unk_0x06DEF8F41E4A8DBB(0, iLocal_72, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
								unk_0xF81AD3C937316CCA(uLocal_136);
								unk_0xEDD5437C49B7B1F8(iLocal_52[1], uLocal_136);
								unk_0x1F5B34056C3CB80B(&uLocal_136);
							}
						}
						else if (unk_0xF57D21B49780A7A8(iLocal_52[1], 1785177548) != 1)
						{
							unk_0x173325AAF2CD766A(&uLocal_136);
							unk_0xCFA3B07B6CEEF62C(0);
							unk_0x3933C434ECC3BB69(0, unk_0x0031992CA618A445(), 0);
							unk_0x43EC517AF665D2B9(0, unk_0x0031992CA618A445(), 20000, 0, 2);
							unk_0xF81AD3C937316CCA(uLocal_136);
							unk_0xEDD5437C49B7B1F8(iLocal_52[1], uLocal_136);
							unk_0x1F5B34056C3CB80B(&uLocal_136);
						}
					}
					if (!unk_0x8682D8A6269E52C9(iLocal_72))
					{
						if (unk_0xF57D21B49780A7A8(iLocal_72, 1785177548) != 1)
						{
							unk_0x70A2E7997E014555(iLocal_72, unk_0x0031992CA618A445(), -1, 0);
							unk_0x390D16BCBFB23E1A(iLocal_72, 1);
						}
					}
				}
				iLocal_51 = 14;
				break;
			
			case 14:
				if (func_121())
				{
					iLocal_51 = 9;
				}
				if (func_119())
				{
					if (unk_0x00BF23259C14645D(uLocal_149))
					{
						if (!iLocal_141)
						{
							if (!unk_0x8682D8A6269E52C9(iLocal_52[1]))
							{
							}
							if (!unk_0x8682D8A6269E52C9(iLocal_72))
							{
								unk_0x70A2E7997E014555(iLocal_72, unk_0x0031992CA618A445(), -1, 0);
								unk_0x390D16BCBFB23E1A(iLocal_72, 1);
							}
							iLocal_141 = 1;
						}
					}
				}
				if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
				{
					if (!func_105() && !iLocal_114)
					{
						if (func_104())
						{
							func_103(&uLocal_154, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_103(&uLocal_154, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_114 = 1;
					}
					iLocal_115 = 0;
					unk_0xC1B1E9A034A63A62(0);
					iLocal_127 = (unk_0x31CD6E9F83C10233() - 4500);
					iLocal_51 = 5;
				}
			}
	}
}

void func_117()
{
	if (!func_105())
	{
		if (unk_0x432757A9E7AAFA96(iLocal_65, 0))
		{
			if (!unk_0x8682D8A6269E52C9(iLocal_72))
			{
				if (unk_0xA32DC7E16AD1DFB7(iLocal_72, iLocal_65, 0))
				{
					if (func_118(iLocal_72, 0) == 2)
					{
						if (iLocal_129 < unk_0x31CD6E9F83C10233())
						{
							func_103(&uLocal_154, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_129 = (unk_0x31CD6E9F83C10233() + unk_0x3AF262D7332EEDF5(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_118(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x90219307C9D2728D(iParam0, iParam1))
		{
			uVar0 = unk_0xCFA31F1E461A6BB5(iParam0, iParam1);
			if (unk_0x76B3C79DE564AFC6(uVar0))
			{
				iVar1 = unk_0x09139F011D2AE2D0(unk_0xE9559A12052415BE(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x00E962E9D49FD6C4(iVar0, iVar3, 0))
					{
						if (unk_0x3251C2B06497863C(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_119()
{
	if ((!unk_0x8682D8A6269E52C9(iLocal_52[0]) && !unk_0x8682D8A6269E52C9(iLocal_52[1])) && !unk_0x8682D8A6269E52C9(iLocal_72))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if ((unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[0], 1.5f, 1.5f, 5f, 0, 1, 2) || unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[1], 2.5f, 2.5f, 5f, 0, 1, 2)) || unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_72, 1.5f, 1.5f, 5f, 0, 1, 2))
			{
				return 1;
			}
		}
		else if ((unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[0], 0.5f, 0.5f, 5f, 0, 1, 1) || unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[1], 0.5f, 0.5f, 5f, 0, 1, 1)) || unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_72, 0.5f, 0.5f, 5f, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_120()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_52[1]))
	{
		if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (unk_0x51D10CE903646C26(iLocal_52[1], unk_0x0031992CA618A445(), 120f))
			{
				if (!unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
	{
		if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_52[1]))
	{
		if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x51D10CE903646C26(iLocal_52[1], unk_0x0031992CA618A445(), 120f))
			{
				if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x8682D8A6269E52C9(iLocal_52[0]))
	{
		if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_52[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x51D10CE903646C26(iLocal_52[0], unk_0x0031992CA618A445(), 120f))
			{
				if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (func_125())
	{
		Global_104429 = 1;
		Global_104426 = unk_0x31CD6E9F83C10233();
		if (func_16(Global_104428))
		{
			func_123(0);
		}
		unk_0xD1DEB22AEDCCED60(1, "RE_TITLE");
		if (iParam0 && func_16(Global_104428))
		{
			unk_0x292298DDE6D3EE2A();
		}
		return 1;
	}
	return 0;
}

void func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104439.f_24856.f_2 < 3)
			{
				if (!unk_0x878B7171D1F304ED())
				{
					func_89(func_124(iParam0), -1);
					Global_104439.f_24856.f_2++;
					unk_0xCD7E92DE2BFA0B0D(&Global_104435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x2A3398C6222EB190(Global_104435, 1))
			{
				if (!unk_0x878B7171D1F304ED())
				{
					func_89(func_124(iParam0), -1);
					Global_104439.f_24856.f_3++;
					unk_0xCD7E92DE2BFA0B0D(&Global_104435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x2A3398C6222EB190(Global_104435, 2))
			{
				if (!unk_0x878B7171D1F304ED())
				{
					func_89(func_124(iParam0), -1);
					Global_104439.f_24856.f_4++;
					unk_0xCD7E92DE2BFA0B0D(&Global_104435, 2);
				}
			}
			break;
	}
}

char* func_124(int iParam0)
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

int func_125()
{
	switch (func_126(&Global_25281, 0, 5, 0, unk_0xFFDE6A3A0108B7CB()))
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

int func_126(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90385.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_130(0))
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		unk_0x94EB0EFC2C10DAF6(unk_0xED1168B8D2D313FA(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x7EF668988342648C(8);
		}
		Global_35813 = iParam2;
		Global_35775 = *uParam0;
		Global_35776 = iParam4;
		Global_35774 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35774 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35774)
			{
				if (Global_35780[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35775 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_128(iParam2))
		{
			return 0;
		}
		if (Global_35774 == 8)
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		Global_35780[Global_35774 /*4*/] = Global_35777;
		Global_35780[Global_35774 /*4*/].f_1 = iParam1;
		Global_35780[Global_35774 /*4*/].f_2 = iParam2;
		Global_35780[Global_35774 /*4*/].f_3 = 0;
		Global_35774++;
		if (iParam4 != 0)
		{
			func_127(uParam0, iParam4);
		}
	}
	return 2;
}

void func_127(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35774 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35774)
	{
		if (Global_35780[iVar0 /*4*/] == *uParam0)
		{
			Global_35780[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_128(int iParam0)
{
	return func_129(iParam0, Global_35813);
}

int func_129(int iParam0, int iParam1)
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

int func_130(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_128(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_131()
{
	if (unk_0xA761A0B6072010C8(uLocal_119))
	{
		unk_0x0C4BDC77192798AE(&uLocal_119);
	}
	if (!unk_0xA761A0B6072010C8(uLocal_120))
	{
		if (!unk_0x7A6C051038031EFA(iLocal_72, 0))
		{
			uLocal_120 = func_96(iLocal_72, 0, 145);
			unk_0x02C0454478A70EFA(uLocal_120, 0);
		}
	}
	else
	{
		unk_0x02C0454478A70EFA(uLocal_120, 1);
	}
	iLocal_126 = 0;
	while (iLocal_126 <= 1)
	{
		if (!unk_0xA761A0B6072010C8(uLocal_121[iLocal_126]))
		{
			if (!unk_0x7A6C051038031EFA(iLocal_52[iLocal_126], 0))
			{
				uLocal_121[iLocal_126] = func_96(iLocal_52[iLocal_126], 0, 145);
				unk_0x02C0454478A70EFA(uLocal_121[iLocal_126], 0);
			}
		}
		else
		{
			unk_0x02C0454478A70EFA(uLocal_121[iLocal_126], 1);
		}
		iLocal_126++;
	}
}

int func_132()
{
	var uVar0;
	var uVar1;
	
	if (!bLocal_133)
	{
		if (unk_0x358ED862352D8DB6(Local_66 - Vector(30f, 30f, 30f), Local_66 + Vector(30f, 30f, 30f), 1) || unk_0x1FFAA0D1B631CAB3(Local_66 - Vector(30f, 30f, 30f), Local_66 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_50 = 2;
			return 1;
		}
		if (!unk_0x8682D8A6269E52C9(iLocal_52[0]) && !unk_0x8682D8A6269E52C9(iLocal_52[1]))
		{
			if (unk_0x830CAE5496B8AD6B(iLocal_52[0], unk_0x0031992CA618A445(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 7) || (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()) && unk_0x830CAE5496B8AD6B(iLocal_52[0], unk_0x0031992CA618A445(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iLocal_52[0]) || unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), iLocal_52[0])) || unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iLocal_52[1])) || unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), iLocal_52[1]))
					{
						if (unk_0xE790C95BCC9F3F62(iLocal_52[0], unk_0x0031992CA618A445()) || unk_0xE790C95BCC9F3F62(iLocal_52[1], unk_0x0031992CA618A445()))
						{
							iLocal_50 = 2;
							return 1;
						}
					}
				}
			}
		}
		uVar0 = unk_0x7899A2987EB03783();
		if (unk_0x76B3C79DE564AFC6(iLocal_65))
		{
			if (!unk_0x7A6C051038031EFA(iLocal_65, 0))
			{
				if (unk_0x7CA73A79B30385F3(iLocal_65, unk_0x0031992CA618A445(), 1))
				{
					iLocal_50 = 2;
					return 1;
				}
				if (unk_0x723F14FB94D6F22C(unk_0x0031992CA618A445(), iLocal_65) && unk_0x38A3CC71471EC547(unk_0x0031992CA618A445()) > 0.1f)
				{
					iLocal_50 = 2;
					return 1;
				}
				if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_65, 0))
				{
					iLocal_50 = 2;
					return 1;
				}
				if (unk_0x432757A9E7AAFA96(uVar0, 0))
				{
					if (unk_0x7CA73A79B30385F3(iLocal_65, iVar0, 1))
					{
						iLocal_50 = 2;
						return 1;
					}
				}
			}
			else if (unk_0x7CA73A79B30385F3(iLocal_65, unk_0x0031992CA618A445(), 1))
			{
				iLocal_50 = 2;
				return 1;
			}
		}
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x58D3B7C1735F004F(unk_0x0031992CA618A445(), joaat("towtruck")) || unk_0x58D3B7C1735F004F(unk_0x0031992CA618A445(), joaat("towtruck2")))
			{
				uVar1 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if (!unk_0x7A6C051038031EFA(iLocal_65, 0))
				{
					if (unk_0x3B10248EA2F8B36C(uVar1, iLocal_65))
					{
						iLocal_50 = 2;
						return 1;
					}
				}
			}
		}
		if (!unk_0x8682D8A6269E52C9(iLocal_52[0]) || unk_0x7A6C051038031EFA(iLocal_52[0], 0))
		{
			if (unk_0x7CA73A79B30385F3(iLocal_52[0], unk_0x0031992CA618A445(), 1))
			{
				iLocal_50 = 5;
				return 1;
			}
			if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), iLocal_52[0]) && unk_0x38A3CC71471EC547(unk_0x0031992CA618A445()) > 0.1f)
			{
				iLocal_50 = 5;
				return 1;
			}
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (unk_0x7CA73A79B30385F3(iLocal_52[0], iVar0, 1))
				{
					iLocal_50 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x8682D8A6269E52C9(iLocal_52[1]) || unk_0x7A6C051038031EFA(iLocal_52[1], 0))
		{
			if (unk_0x7CA73A79B30385F3(iLocal_52[1], unk_0x0031992CA618A445(), 1))
			{
				iLocal_50 = 5;
				return 1;
			}
			if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), iLocal_52[1]) && unk_0x38A3CC71471EC547(unk_0x0031992CA618A445()) > 0.1f)
			{
				iLocal_50 = 5;
				return 1;
			}
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (unk_0x7CA73A79B30385F3(iLocal_52[1], iVar0, 1))
				{
					iLocal_50 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x7A6C051038031EFA(iLocal_72, 0))
		{
			if (unk_0x7CA73A79B30385F3(iLocal_72, unk_0x0031992CA618A445(), 1))
			{
				iLocal_50 = 4;
				return 1;
			}
			if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), iLocal_72))
			{
				iLocal_50 = 4;
				return 1;
			}
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (unk_0x7CA73A79B30385F3(iLocal_72, iVar0, 1))
				{
					iLocal_50 = 4;
					return 1;
				}
			}
		}
		else if (unk_0x7CA73A79B30385F3(iLocal_72, unk_0x0031992CA618A445(), 1))
		{
			iLocal_50 = 4;
			return 1;
		}
	}
	return 0;
}

void func_133()
{
	func_135(39, 1);
	func_135(40, 1);
	func_135(41, 1);
	func_135(42, 1);
	func_135(43, 1);
	func_135(44, 1);
	unk_0x765BE154A2FACB3E(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	unk_0x765BE154A2FACB3E(Local_96 - Vector(20f, 20f, 20f), Local_96 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0xD50199C9F3AD72E7(Local_73, 50f, 0);
	unk_0x5CEBAD207A41641E(419f, -1387f, 28f, 427f, -1370f, 29f, 0, 0);
	unk_0xCD7E92DE2BFA0B0D(&uLocal_131, 5);
	iLocal_72 = unk_0x5618B819E5B9C053(26, iLocal_76, Local_73, 0, 1, 1);
	unk_0xEB9B39274C401888(iLocal_72, 1);
	unk_0x9793B48C4C8275F8(iLocal_76);
	unk_0x0EB00C68DDFABE19(iLocal_72, 0);
	unk_0xD6A092D1F1B9A9F1(iLocal_72, 185, 1);
	unk_0xD6A092D1F1B9A9F1(iLocal_72, 206, 1);
	unk_0x67ABC034CBFBD349(iLocal_72, 2, 0);
	unk_0xBEDADBE0FDA3EF25(iLocal_72, 1);
	unk_0x37907A374973B718(iLocal_72, "REHOMGirl");
	unk_0xD5FF2158C8907CA9(iLocal_72, 0, 2, 1, 0);
	unk_0xD5FF2158C8907CA9(iLocal_72, 2, 0, 0, 0);
	unk_0xD5FF2158C8907CA9(iLocal_72, 3, 1, 4, 0);
	unk_0xD5FF2158C8907CA9(iLocal_72, 4, 0, 5, 0);
	unk_0xD5FF2158C8907CA9(iLocal_72, 6, 1, 0, 0);
	unk_0x659E5E147E8E6635("OFFICERS", &iLocal_153);
	iLocal_126 = 0;
	while (iLocal_126 <= 1)
	{
		iLocal_52[iLocal_126] = unk_0x5618B819E5B9C053(6, iLocal_70, Local_55[iLocal_126 /*3*/], fLocal_62[iLocal_126], 1, 1);
		unk_0xEB9B39274C401888(iLocal_52[iLocal_126], 1);
		unk_0x9793B48C4C8275F8(iLocal_70);
		unk_0x7F53E53C6F32D196(iLocal_52[iLocal_126], iLocal_153);
		unk_0xD6A092D1F1B9A9F1(iLocal_52[iLocal_126], 42, 1);
		iLocal_126++;
	}
	unk_0xD5D9B48EB10FA2C0(iLocal_52[0], joaat("weapon_pistol"), -1, 1, 1);
	unk_0xD5D9B48EB10FA2C0(iLocal_52[1], joaat("weapon_pistol"), -1, 0, 1);
	unk_0x85F49C37BE784CD7(5, iLocal_153, joaat("player"));
	unk_0x85F49C37BE784CD7(1, iLocal_153, joaat("COP"));
	unk_0x85F49C37BE784CD7(1, joaat("COP"), iLocal_153);
	iLocal_65 = unk_0x5129A9193468FF77(iLocal_71, Local_66, fLocal_69, 1, 1, 0);
	unk_0x05C9FC8771682275(iLocal_71, 1);
	unk_0x24B72A49849215AE(iLocal_65, 1084227584);
	unk_0x0F85FB40BC1CA4C2(iLocal_65, 1);
	func_134(&uLocal_154, 5, iLocal_52[0], "ACULTMember1", 0, 1);
	func_134(&uLocal_154, 4, iLocal_52[1], "ACULTMember2", 0, 1);
	func_134(&uLocal_154, 3, iLocal_72, "REHOMGirl", 0, 1);
	if (func_98() == 0)
	{
		func_134(&uLocal_154, 0, unk_0x0031992CA618A445(), "MICHAEL", 0, 1);
	}
	else if (func_98() == 1)
	{
		func_134(&uLocal_154, 1, unk_0x0031992CA618A445(), "FRANKLIN", 0, 1);
	}
	uLocal_149 = unk_0x87070FAB863D4019(0f, 0f, 0f, 0f, 0f, 0f, 2);
	unk_0xB2F559B96F92CDFF(uLocal_149, iLocal_65, 0);
	unk_0x5C774A8BEBE5BD26(iLocal_72, uLocal_149, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x5C774A8BEBE5BD26(iLocal_52[0], uLocal_149, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x5C774A8BEBE5BD26(iLocal_52[1], uLocal_149, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x786E76DF7155D4EC(uLocal_149, 1);
}

void func_134(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

void func_135(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_142(iParam0, 2, 1))
		{
			func_141(iParam0, 2, 1);
		}
	}
	else if (func_142(iParam0, 2, 1))
	{
		func_136(iParam0, 2, 1);
	}
}

void func_136(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD804ACF2A7171150(&(Global_92814.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_11() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0xD804ACF2A7171150(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_668[iParam0]), iParam1);
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, uParam1, iParam3);
	}
}

int func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
		if (iVar1 > -1)
		{
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2511967[iParam0 /*3*/][func_138(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 6632;
			break;
		
		case 45:
			return 3787;
			break;
		
		case 46:
			return 5362;
			break;
		
		default:
			break;
	}
	return 7237;
}

void func_141(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_92814.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_11() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0xCD7E92DE2BFA0B0D(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_668[iParam0]), iParam1);
	}
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x2A3398C6222EB190(Global_92814.f_1315[iParam0], iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_11() == 0)
		{
			return unk_0x2A3398C6222EB190(func_139(func_140(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_143()
{
	unk_0xBE91026C1FC72180(iLocal_76);
	unk_0xBE91026C1FC72180(iLocal_70);
	unk_0xBE91026C1FC72180(iLocal_71);
	unk_0x9F62787D280BF2EC("random@homelandsecurity");
	if (((unk_0x772F801619C83779(iLocal_76) && unk_0x772F801619C83779(iLocal_70)) && unk_0x772F801619C83779(iLocal_71)) && unk_0xB3379AC2E71D1E7E("random@homelandsecurity"))
	{
		bLocal_104 = true;
	}
	else
	{
		unk_0xBE91026C1FC72180(iLocal_76);
		unk_0xBE91026C1FC72180(iLocal_70);
		unk_0xBE91026C1FC72180(iLocal_71);
		unk_0x9F62787D280BF2EC("random@homelandsecurity");
	}
}

void func_144()
{
	iLocal_76 = joaat("a_f_y_tourist_01");
	iLocal_70 = joaat("a_m_o_acult_01");
	iLocal_71 = joaat("fugitive");
	Local_73 = { -174.0522f, 1905.611f, 197.0466f };
	Local_55[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_62[0] = 147.8596f;
	Local_55[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_62[1] = 164.5974f;
	Local_66 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_69 = 187.3899f;
	Local_93 = { 469.8768f, 2617.532f, 42.2566f };
	Local_96 = { 472.2393f, 2611.611f, 42.2676f };
	Local_99 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_103 = 1;
}

int func_145()
{
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC267F33BC0EB4D24(unk_0x0031992CA618A445())) > 1369f && !func_156())
		{
			return 0;
		}
	}
	if (func_152())
	{
		return 1;
	}
	if (func_146(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_146(float fParam0, bool bParam1)
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
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (func_24(func_98()))
		{
			iVar36 = func_21();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x2A3398C6222EB190(Global_104439.f_18435[iVar32 /*6*/], 2) && !unk_0x2A3398C6222EB190(Global_104439.f_18435[iVar32 /*6*/], 3))
				{
					func_147(iVar32, &Var0);
					fVar35 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var0.f_6, 1);
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

void func_147(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_148(uParam1, "Abigail1", func_150(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 1:
			func_148(uParam1, "Abigail2", func_150(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 2:
			func_148(uParam1, "Barry1", func_150(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 3:
			func_148(uParam1, "Barry2", func_150(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 4:
			func_148(uParam1, "Barry3", func_150(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 5:
			func_148(uParam1, "Barry3A", func_150(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 6:
			func_148(uParam1, "Barry3C", func_150(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 7:
			func_148(uParam1, "Barry4", func_150(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_149(iParam0), 0, 0);
			break;
		
		case 8:
			func_148(uParam1, "Dreyfuss1", func_150(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 9:
			func_148(uParam1, "Epsilon1", func_150(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 10:
			func_148(uParam1, "Epsilon2", func_150(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 11:
			func_148(uParam1, "Epsilon3", func_150(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 12:
			func_148(uParam1, "Epsilon4", func_150(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 13:
			func_148(uParam1, "Epsilon5", func_150(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 14:
			func_148(uParam1, "Epsilon6", func_150(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 15:
			func_148(uParam1, "Epsilon7", func_150(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 16:
			func_148(uParam1, "Epsilon8", func_150(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 17:
			func_148(uParam1, "Extreme1", func_150(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 18:
			func_148(uParam1, "Extreme2", func_150(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 19:
			func_148(uParam1, "Extreme3", func_150(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 20:
			func_148(uParam1, "Extreme4", func_150(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 21:
			func_148(uParam1, "Fanatic1", func_150(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_149(iParam0), 1, 0);
			break;
		
		case 22:
			func_148(uParam1, "Fanatic2", func_150(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_149(iParam0), 1, 0);
			break;
		
		case 23:
			func_148(uParam1, "Fanatic3", func_150(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_149(iParam0), 0, 1);
			break;
		
		case 24:
			func_148(uParam1, "Hao1", func_150(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_149(iParam0), 0, 1);
			break;
		
		case 25:
			func_148(uParam1, "Hunting1", func_150(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 26:
			func_148(uParam1, "Hunting2", func_150(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 27:
			func_148(uParam1, "Josh1", func_150(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 28:
			func_148(uParam1, "Josh2", func_150(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 29:
			func_148(uParam1, "Josh3", func_150(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 30:
			func_148(uParam1, "Josh4", func_150(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 31:
			func_148(uParam1, "Maude1", func_150(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 32:
			func_148(uParam1, "Minute1", func_150(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 33:
			func_148(uParam1, "Minute2", func_150(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 34:
			func_148(uParam1, "Minute3", func_150(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 35:
			func_148(uParam1, "MrsPhilips1", func_150(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 36:
			func_148(uParam1, "MrsPhilips2", func_150(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 37:
			func_148(uParam1, "Nigel1", func_150(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 38:
			func_148(uParam1, "Nigel1A", func_150(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 39:
			func_148(uParam1, "Nigel1B", func_150(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
			break;
		
		case 40:
			func_148(uParam1, "Nigel1C", func_150(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
			break;
		
		case 41:
			func_148(uParam1, "Nigel1D", func_150(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_149(iParam0), 1, 1);
			break;
		
		case 42:
			func_148(uParam1, "Nigel2", func_150(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 43:
			func_148(uParam1, "Nigel3", func_150(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 1);
			break;
		
		case 44:
			func_148(uParam1, "Omega1", func_150(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 45:
			func_148(uParam1, "Omega2", func_150(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 46:
			func_148(uParam1, "Paparazzo1", func_150(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 47:
			func_148(uParam1, "Paparazzo2", func_150(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 48:
			func_148(uParam1, "Paparazzo3", func_150(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 49:
			func_148(uParam1, "Paparazzo3A", func_150(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 50:
			func_148(uParam1, "Paparazzo3B", func_150(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 51:
			func_148(uParam1, "Paparazzo4", func_150(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 52:
			func_148(uParam1, "Rampage1", func_150(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 54:
			func_148(uParam1, "Rampage3", func_150(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 55:
			func_148(uParam1, "Rampage4", func_150(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 56:
			func_148(uParam1, "Rampage5", func_150(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_149(iParam0), 0, 0);
			break;
		
		case 53:
			func_148(uParam1, "Rampage2", func_150(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_149(iParam0), 1, 0);
			break;
		
		case 57:
			func_148(uParam1, "TheLastOne", func_150(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 58:
			func_148(uParam1, "Tonya1", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 59:
			func_148(uParam1, "Tonya2", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 60:
			func_148(uParam1, "Tonya3", func_150(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 61:
			func_148(uParam1, "Tonya4", func_150(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		case 62:
			func_148(uParam1, "Tonya5", func_150(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_149(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_148(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_149(int iParam0)
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

struct<2> func_150(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_151(iParam0) };
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_151(int iParam0)
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

int func_152()
{
	if (func_155() && !func_156())
	{
		return 1;
	}
	if (func_154() && func_153())
	{
		return 1;
	}
	return 0;
}

bool func_153()
{
	return Global_104157 > 0;
}

int func_154()
{
	if (Global_89829 != -1)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	if (Global_89829 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_83695[Global_89829 /*34*/].f_15, 20);
	}
	return 0;
}

int func_156()
{
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xEAD4F97609714B93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_157()
{
	if (!func_128(5))
	{
		return 1;
	}
	if (func_152())
	{
		return 1;
	}
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC267F33BC0EB4D24(unk_0x0031992CA618A445())) > 1369f && !func_156())
		{
			return 0;
		}
	}
	if (func_146(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	if ((Global_104428 == func_30() && unk_0x86EEE9A2AEF6EC88()) && Global_104429)
	{
		return 1;
	}
	return 0;
}

void func_159(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_161(iParam0);
	unk_0x5048E5ECEC23D271(0);
	unk_0x4FA59397643FB016(1);
	Global_104425 = 0;
	func_160();
}

void func_160()
{
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			unk_0x05C9FC8771682275(unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)), 1);
		}
		unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 0);
	}
}

void func_161(int iParam0)
{
	Global_104428 = iParam0;
}

int func_162(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142565)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_30();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_203())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC267F33BC0EB4D24(unk_0x0031992CA618A445())) > 1369f && !func_156())
			{
				return 0;
			}
		}
		if (!Global_104439.f_8946)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_152())
		{
			return 0;
		}
		if (func_202())
		{
			return 0;
		}
		if (Global_104428 != -1)
		{
			return 0;
		}
		if (func_24(func_98()))
		{
			if (func_146(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_201(iParam3))
		{
			return 0;
		}
		if (func_24(func_98()))
		{
			if (func_200(func_98()) == 4 || func_200(func_98()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_98()))
		{
			if (!func_199(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_198(Global_104439.f_24856.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x31CD6E9F83C10233() - Global_104430) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_197())
		{
			return 0;
		}
		if (unk_0xD532AAF71376B5E8())
		{
			return 0;
		}
		if (unk_0x86EEE9A2AEF6EC88())
		{
			return 0;
		}
		if (!func_188(4))
		{
			return 0;
		}
		if (!func_128(5))
		{
			return 0;
		}
		if (func_187(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x68BBDCBE8B7849EB(unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445())))
		{
			if ((unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x0C84D01216EF2CB3(377.153f, -717.567f, 10.0536f) || unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x0C84D01216EF2CB3(320.9934f, 265.2515f, 82.1221f)) || unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x0C84D01216EF2CB3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_187(0, 0))
		{
			return 0;
		}
		if (Global_25368)
		{
			return 0;
		}
		if (func_201(30) && !func_187(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_98()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_104439.f_2244.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104439.f_2244.f_539.f_2276[iVar4];
				if (func_186(iVar8))
				{
					if (func_164(iVar4))
					{
						if (!func_163(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var5) < (210f * 210f))
							{
								if (func_98() != iVar4)
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

bool func_163(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104439.f_2244.f_539.f_2276[iParam0];
	return func_165(iVar0);
}

int func_165(int iParam0)
{
	return func_166(iParam0, 1);
}

int func_166(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_186(iParam0))
	{
		return 0;
	}
	func_167(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_168(func_179(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_168(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_178(iParam0, iParam1))
	{
		iVar0 = func_177(iParam1);
		iVar1 = func_175(iParam0);
		iVar2 = (func_175(iParam0) - func_175(iParam1));
		iVar3 = (func_177(iParam0) - func_177(iParam1));
		iVar4 = (func_174(iParam0) - func_174(iParam1));
		iVar5 = (func_173(iParam0) - func_173(iParam1));
		iVar6 = (func_172(iParam0) - func_172(iParam1));
		iVar7 = (func_171(iParam0) - func_171(iParam1));
	}
	else
	{
		iVar0 = func_177(iParam0);
		iVar1 = func_175(iParam1);
		iVar2 = (func_175(iParam1) - func_175(iParam0));
		iVar3 = (func_177(iParam1) - func_177(iParam0));
		iVar4 = (func_174(iParam1) - func_174(iParam0));
		iVar5 = (func_173(iParam1) - func_173(iParam0));
		iVar6 = (func_172(iParam1) - func_172(iParam0));
		iVar7 = (func_171(iParam1) - func_171(iParam0));
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
		iVar4 = (iVar4 + func_170(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_169(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_169(float fParam0, float fParam1, float fParam2)
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

int func_170(int iParam0, int iParam1)
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

int func_171(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_172(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_173(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_174(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_175(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_176(unk_0x2A3398C6222EB190(iParam0, 31), -1, 1)) + 2011;
}

int func_176(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_177(int iParam0)
{
	return iParam0 & 15;
}

int func_178(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_186(iParam1) || !func_186(iParam0))
	{
		return 1;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = func_172(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_171(iParam0);
	iVar1 = func_171(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	var uVar0;
	
	func_185(&uVar0, unk_0x6676AD594A1E113E());
	func_184(&uVar0, unk_0xE647A8424B4399CE());
	func_183(&uVar0, unk_0x41413FABD538FC3A());
	func_182(&uVar0, unk_0xEC3E0DDCEEBF8A00());
	func_181(&uVar0, unk_0x1A7BD52C0A88E679());
	func_180(&uVar0, unk_0x760D3328FB0F48C5());
	return uVar0;
}

void func_180(var uParam0, int iParam1)
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

void func_181(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_182(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_175(*uParam0);
	if (iParam1 < 1 || iParam1 > func_170(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_186(int iParam0)
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
	iVar0 = func_171(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_172(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_173(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_175(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_177(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_174(iParam0);
	if (iVar5 < 1 || iVar5 > func_170(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_187(int iParam0, int iParam1)
{
	if (unk_0x2A3398C6222EB190(Global_104439.f_24856.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0)
{
	int iVar0;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				iVar0 = func_98();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1()) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0x292D1BF190062D1C(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0)) || func_196()) || Global_103486) || Global_25224) || func_195()) || func_73(8, -1)) || func_194()) || func_193()) || func_192()) || func_191()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1) || func_196()) || Global_25224) || func_195()) || func_73(8, -1)) || func_192()) || func_194()) || func_193()) || func_191()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1()) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0x292D1BF190062D1C(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0)) || func_196()) || Global_103486) || Global_25224) || func_195()) || func_73(8, -1)) || func_192()) || func_194()) || func_193()) || func_191()) || Global_104439.f_7549.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0)) || func_196()) || Global_103486) || Global_25224) || func_195()) || func_73(8, -1)) || func_194()) || func_193()) || func_191()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_196() || unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0) || func_73(8, -1)) || func_191()) || func_190()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_73(8, -1) || func_194()) || func_193()) || func_190()) || func_189())
						{
							return 0;
						}
						if ((unk_0x003E46CBEF6CE07A() && unk_0xEBDBC787B1778ACF() != 3) && unk_0x3AA42F4BDAE68399() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
						{
							if ((((((((((((((unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0) || unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || func_196()) || Global_25224) || func_195()) || func_73(8, -1)) || func_193()) || func_192()) || func_191()) || Global_104439.f_7549.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0) || !unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) || !unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1())) || !unk_0xF9FC07CC13402AEF()) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || func_196()) || func_193()) || Global_103486) || Global_25224) || func_195()) || Global_36944) || func_73(8, -1)) || func_192()) || func_190()) || func_191()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0) || !unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) || !unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1())) || !unk_0xF9FC07CC13402AEF()) || unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0)) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1)) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0x5BB7DB96F2D9F1A9(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || func_196()) || Global_103486) || Global_25224) || func_195()) || func_73(8, -1)) || func_192()) || func_190()) || func_194()) || func_193()) || func_191())
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

var func_189()
{
	return Global_92801.f_1;
}

int func_190()
{
	if (Global_89829 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_83695[Global_89829 /*34*/].f_15, 13);
	}
	return 0;
}

int func_191()
{
	if (unk_0x7832F791572D5809(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if (Global_71045)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return Global_92814.f_310 > 0;
}

bool func_194()
{
	return Global_92814.f_309 > 0;
}

var func_195()
{
	return Global_1312853;
}

int func_196()
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return Global_90385.f_44 == 1;
	}
	return 0;
}

int func_197()
{
	func_71();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_198(int iParam0)
{
	return func_178(func_179(), iParam0);
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_98();
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

int func_200(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_104439.f_7549.f_919[iParam0];
}

bool func_201(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_203())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x2A3398C6222EB190(Global_104439.f_24856, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x2A3398C6222EB190(Global_104439.f_24856.f_1, iVar0);
	}
	return bVar1;
}

int func_202()
{
	var uVar0;
	
	if (Global_25372)
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			uVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if (unk_0x432757A9E7AAFA96(uVar0, 0))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x3251C2B06497863C(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_203()
{
	var uVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0x9F3509E90B1EE108())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 2);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 4);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 6);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 2);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 4);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 6);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6008D10CE7FC9AA8())
				{
					iVar0 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
					unk_0x5149EEBBCD305987(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_142820 == 2)
	{
		return 1;
	}
	else if (Global_142820 == 3)
	{
		return 0;
	}
	if (unk_0x6008D10CE7FC9AA8())
	{
		if (unk_0x2A3398C6222EB190(unk_0x03CCEFDDDC599303(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_204()
{
	int iVar0;
	
	if (iLocal_102)
	{
		func_218(0);
		if (Global_25460)
		{
			unk_0x1E420F926A7BC4D2("AC_STOP");
		}
		func_217();
		unk_0x23F24DF2A529FED8();
		unk_0x98D14485479FED5C(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		unk_0xF39316F534343731(unk_0x3D35F9864E4640B1());
		unk_0x15007EAE63C7ECCF(1f);
		func_93();
		if (iLocal_103)
		{
			unk_0x9793B48C4C8275F8(iLocal_76);
			unk_0x9793B48C4C8275F8(iLocal_70);
			unk_0x9793B48C4C8275F8(iLocal_71);
			unk_0x05C9FC8771682275(iLocal_71, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (unk_0x76B3C79DE564AFC6(iLocal_52[iVar0]))
			{
				if (!unk_0x8682D8A6269E52C9(iLocal_52[iVar0]))
				{
					if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						unk_0xD9BDC06F52127118(iLocal_52[iVar0], func_216(unk_0x3D35F9864E4640B1()), -1, 0, 0);
						unk_0x390D16BCBFB23E1A(iLocal_52[iVar0], 1);
						if (!unk_0x8682D8A6269E52C9(iLocal_72))
						{
							unk_0x26CD819CC5B5E17A(iLocal_72, -1);
							unk_0x390D16BCBFB23E1A(iLocal_72, 1);
						}
					}
					unk_0xEB9B39274C401888(iLocal_52[iVar0], 0);
				}
				unk_0x056049D9941BD43D(&(iLocal_52[iVar0]));
			}
			iVar0++;
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_72))
		{
			if (!unk_0x8682D8A6269E52C9(iLocal_72))
			{
				unk_0xD6A092D1F1B9A9F1(iLocal_72, 317, 1);
				if (unk_0xCA71EE26095D78BE(iLocal_72))
				{
					unk_0x38396C255EC4D248(iLocal_72);
				}
				if (!unk_0x90219307C9D2728D(iLocal_72, 0))
				{
					unk_0xA6CF3FDF7453AB63(iLocal_72);
				}
				unk_0xEB9B39274C401888(iLocal_72, 0);
			}
			unk_0x056049D9941BD43D(&iLocal_72);
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_65))
		{
			unk_0x28BB69BE14577487(&iLocal_65);
		}
		unk_0x326E498BE1EE12A8(5, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
			}
		}
	}
	func_205(-1);
	unk_0xBEE2834559A8897A();
}

void func_205(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_158())
	{
		func_209(iParam0);
		unk_0xD1DEB22AEDCCED60(0, 0);
		Global_104430 = unk_0x31CD6E9F83C10233();
		func_208(30000);
		StringCopy(&cVar0, func_207(Global_104428, 1), 64);
		if (func_29(Global_104428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104427, 64);
		}
		unk_0xBE71FB92F44391FF(&cVar0, Global_104425, (unk_0x31CD6E9F83C10233() - Global_104426), 0);
	}
	else if (unk_0x2A3398C6222EB190(Global_104435, 0) && Global_104439.f_24856.f_2 < 3)
	{
		unk_0xD804ACF2A7171150(&Global_104435, 0);
	}
	func_206(&Global_25281);
	Global_104429 = 0;
	func_161(-1);
}

void func_206(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35775)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35774 = 0;
	Global_35776 = 0;
	Global_35813 = 15;
	Global_55851 = 0;
	Global_55852 = 0;
}

char* func_207(int iParam0, bool bParam1)
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

void func_208(int iParam0)
{
	Global_36364 = (unk_0x31CD6E9F83C10233() + iParam0);
}

void func_209(int iParam0)
{
	func_210(iParam0, 0, func_215(iParam0));
}

void func_210(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_179();
	func_213(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_212(iParam0, &uVar0);
	Var1 = { func_211(&uVar0) };
}

struct<16> func_211(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_172(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_171(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_174(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_177(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_175(*uParam0), 64);
	return Var0;
}

void func_212(int iParam0, var uParam1)
{
	Global_104439.f_24856.f_43[iParam0] = *uParam1;
}

void func_213(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_175(*uParam0);
	iVar1 = func_177(*uParam0);
	iVar2 = func_174(*uParam0);
	iVar3 = func_173(*uParam0);
	iVar4 = func_172(*uParam0);
	iVar5 = func_171(*uParam0);
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
	iVar6 = func_170(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_170(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_214(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_214(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_185(uParam0, iParam1);
	func_184(uParam0, iParam2);
	func_183(uParam0, iParam3);
	func_181(uParam0, iParam5);
	func_182(uParam0, iParam4);
	func_180(uParam0, iParam6);
}

int func_215(int iParam0)
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

Vector3 func_216(var uParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(uParam0), 0);
}

void func_217()
{
	Global_25456 = 0;
	Global_25457 = 0;
	Global_25459 = 0;
	Global_25460 = 0;
	Global_25461 = 0;
}

void func_218(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 47)
	{
		func_135(iVar0, bParam0);
		iVar0++;
	}
}

