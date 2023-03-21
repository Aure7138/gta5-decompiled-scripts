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
	int iLocal_19 = 0;
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
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81[2];
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	float fLocal_98[2] = { 0f, 0f };
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<3> Local_107 = { 0, 0, 0 } ;
	int iLocal_110 = 0;
	var uLocal_111[2] = { 0, 0 };
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	bool bLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	struct<6> Local_150 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_156 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	bool bLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178 = 16;
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
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
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
	iLocal_18 = 3;
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
	Local_107 = { 154.92f, 6841.12f, 19.14f };
	iLocal_125 = 200;
	Local_139 = { -1161.199f, 934.5912f, 196.7591f };
	Local_142 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_150, "", 24);
	if (unk_0x78BF2001491914AC(11))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			if (unk_0xAB603D6FBED0F015(iLocal_53))
			{
				unk_0x799D2CB4039F4804(iLocal_53);
			}
		}
		func_206();
	}
	if (func_164(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_161(-1);
	}
	else
	{
		unk_0xA232817B0B36F2E5();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC6D11983DAD48A48() || iLocal_131)
		{
			if (!func_160())
			{
				if (func_159())
				{
					func_206();
				}
			}
			unk_0xE57EE82872DC7A9F("RE_BU", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_147())
					{
						func_206();
					}
					if (!iLocal_66)
					{
						func_146();
					}
					else
					{
						func_145();
					}
					if (bLocal_52)
					{
						iLocal_162 = 1;
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
					{
						func_144();
						switch (iLocal_49)
						{
							case 0:
								func_134();
								iLocal_49 = 1;
								break;
							
							case 1:
								if ((!func_127(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) && !func_127(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) && !func_126())
								{
									switch (iLocal_50)
									{
										case 0:
											func_125();
											if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_78, 50f, 35f, 50f, 0, 1, 0))
											{
												func_124();
											}
											if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_78, 80f, 65f, 50f, 0, 1, 0))
											{
												func_123();
											}
											if (!unk_0xA9A04898798AE9E6(iLocal_58, 0))
											{
												if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, 1, 0) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0, 1, 0))
												{
													func_122();
													if (unk_0xBDD3EABACAB97D09(uLocal_114))
													{
														unk_0xE1E81CBB89115254(uLocal_114, 0);
													}
													iLocal_64 = 0;
													while (iLocal_64 <= 1)
													{
														if (unk_0xBDD3EABACAB97D09(uLocal_111[iLocal_64]))
														{
															unk_0xE1E81CBB89115254(uLocal_111[iLocal_64], 0);
														}
														iLocal_64++;
													}
													if (!func_160())
													{
														func_113(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_122();
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if ((func_127(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) || func_127(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) || iLocal_129)
								{
									iLocal_129 = 1;
									if (!func_160())
									{
										func_113(1);
									}
									if (unk_0xBDD3EABACAB97D09(uLocal_114))
									{
										unk_0xE1E81CBB89115254(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0xBDD3EABACAB97D09(uLocal_111[iLocal_64]))
										{
											unk_0xE1E81CBB89115254(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									switch (iLocal_128)
									{
										case 0:
											func_112();
											break;
										
										case 1:
											func_112();
											break;
										
										case 2:
											func_112();
											break;
										
										case 3:
											func_112();
											break;
										
										case 4:
											func_112();
											break;
										
										case 5:
											func_112();
											break;
										}
								}
								if (func_126())
								{
									iLocal_75 = 1;
									if (unk_0xBDD3EABACAB97D09(uLocal_114))
									{
										unk_0xE1E81CBB89115254(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0xBDD3EABACAB97D09(uLocal_111[iLocal_64]))
										{
											unk_0xE1E81CBB89115254(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									if (!func_111())
									{
										switch (iLocal_51)
										{
											case 1:
												func_108();
												break;
											
											case 3:
												func_107();
												break;
											
											case 4:
												func_106();
												break;
											
											case 5:
												func_104();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]))
												{
													func_102(iLocal_54[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x769F0F6444C1ABE0(iLocal_54[1]))
												{
													func_102(iLocal_54[1], "GENERIC_WAR_CRY", 24);
												}
												func_112();
												break;
											
											case 6:
												func_104();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]))
												{
													func_102(iLocal_54[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x769F0F6444C1ABE0(iLocal_54[1]))
												{
													func_102(iLocal_54[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_112();
												break;
										}
									}
									else
									{
										func_104();
										unk_0x4EDE34FBADD967A6(0);
										iVar0 = 0;
										while (iVar0 < iLocal_54)
										{
											if (!unk_0x769F0F6444C1ABE0(iLocal_54[iVar0]))
											{
												unk_0x78F0842D5D2B0BBD(iLocal_54[iVar0], 5, 0, 0);
												unk_0xCD6FB688ED8B6284(iLocal_54[iVar0], unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 0);
												unk_0x015B50BC21C88C8C(iLocal_54[iVar0], 1);
												if (unk_0x2137828D03306CAF(iLocal_60))
												{
													if (unk_0xED01C551E3A161C0(iLocal_60))
													{
														unk_0xA806066ECDF61E23(iLocal_60, 1, 1);
													}
												}
												if (unk_0xBDD3EABACAB97D09(uLocal_111[iVar0]))
												{
													unk_0x789C84F1B8496AD0(&(uLocal_111[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_49 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_130)
								{
									func_101();
								}
								if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_107, 100f, 100f, 100f, 1, 1, 0))
								{
									unk_0xFBC4596E19752537(1f);
									if (unk_0x2137828D03306CAF(iLocal_54[0]) && unk_0x2137828D03306CAF(iLocal_54[1]))
									{
										unk_0x6C559FCFFD2365CB(&(iLocal_54[0]));
										unk_0x6C559FCFFD2365CB(&(iLocal_54[1]));
									}
								}
								if (!unk_0x2137828D03306CAF(iLocal_57))
								{
									if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_139, 200f, 200f, 200f, 1, 1, 0))
									{
										unk_0x0F39DF6675B2333E(joaat("s_m_m_highsec_01"));
										unk_0x0F39DF6675B2333E(joaat("granger"));
										if (unk_0xA1FC9D7AEA164881(joaat("s_m_m_highsec_01")) && unk_0xA1FC9D7AEA164881(joaat("granger")))
										{
											iLocal_59 = unk_0xE42A511281C9895B(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, 1, 0);
											unk_0xCEF34666451D1CD0(iLocal_59, 200);
											unk_0x7C75E7C149A6903C(iLocal_59, 1.5f);
											iLocal_57 = unk_0x7B47BFDF39EC38D3(iLocal_59, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
											unk_0x6CA29A70250F194F(iLocal_57, 0, 0, 2, 0);
											unk_0x6CA29A70250F194F(iLocal_57, 3, 0, 0, 0);
											unk_0x6CA29A70250F194F(iLocal_57, 4, 0, 0, 0);
											unk_0x0013D519C885E60B(iLocal_57, joaat("weapon_pistol"), -1, 1, 1);
											unk_0x3C030E241A3543D2(iLocal_57, iLocal_177);
										}
									}
								}
								if (!unk_0x769F0F6444C1ABE0(iLocal_53))
								{
									if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
									{
										if (unk_0xCBA4F77BB9D2F115(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) < 1)
										{
											if (!iLocal_132)
											{
												func_81(0);
												func_104();
												unk_0x4EDE34FBADD967A6(0);
												func_70(&uLocal_178, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_132 = 1;
											}
										}
									}
									else
									{
										iLocal_132 = 0;
									}
									if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_139, Global_22, 1, 1, 0) && unk_0x2860DA9980AC4109(iLocal_53, unk_0x2A5EB8B0FE590B91(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0xAB603D6FBED0F015(iLocal_53))
										{
											if (unk_0xBDD3EABACAB97D09(uLocal_137))
											{
												unk_0x789C84F1B8496AD0(&uLocal_137);
											}
											if (unk_0xBDD3EABACAB97D09(uLocal_138))
											{
												unk_0x789C84F1B8496AD0(&uLocal_138);
											}
											if (func_69())
											{
												iLocal_49 = 5;
											}
											else
											{
												iLocal_49 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(Local_139))
										{
											func_81(0);
											func_104();
											unk_0x4EDE34FBADD967A6(0);
											func_70(&uLocal_178, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_104();
											unk_0x4EDE34FBADD967A6(0);
											func_70(&uLocal_178, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0x2137828D03306CAF(iLocal_60))
								{
									if (unk_0xED01C551E3A161C0(iLocal_60))
									{
										if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]))
										{
											if (unk_0x453DB1DBE5D81637(iLocal_54[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0xA806066ECDF61E23(iLocal_60, 1, 1);
												}
											}
											else
											{
												unk_0xA806066ECDF61E23(iLocal_60, 1, 1);
											}
										}
									}
								}
								if (unk_0x769F0F6444C1ABE0(iLocal_54[0]) || unk_0x769F0F6444C1ABE0(iLocal_54[1]))
								{
									bLocal_147 = true;
								}
								if (bLocal_147)
								{
									if (unk_0x7FAC45D56235AB39(iLocal_58, 0))
									{
										if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]))
										{
											unk_0x923CA4007FCCB6D3(iLocal_54[0]);
											if (unk_0xD570551619005062(iLocal_54[0], iLocal_58, -1, 0, 0) || unk_0xD570551619005062(iLocal_54[0], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0x654FFF4D16298AC5(iLocal_54[0]);
													if (unk_0x2137828D03306CAF(iLocal_60))
													{
														if (unk_0xED01C551E3A161C0(iLocal_60))
														{
															unk_0xA806066ECDF61E23(iLocal_60, 1, 1);
														}
													}
													unk_0x219EE6A7B599E7DC(&uLocal_65);
													unk_0xAF2C217E49954DFD(0);
													unk_0xF7D2F9A8A20E06C8(0, unk_0x82D9CF397BA8C885(iLocal_58, -0.5f, 0.5f, 0f), unk_0x2A5EB8B0FE590B91(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xA6AC097BEBB7B1F0(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0x8C6A1F8B258BDF97(0, iLocal_58, unk_0x2A5EB8B0FE590B91(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0xBD718C5BA2122192(uLocal_65);
													unk_0x234E551BB8E8813B(iLocal_54[0], uLocal_65);
													unk_0xEDD36C58DDE03C8F(&uLocal_65);
													unk_0x015B50BC21C88C8C(iLocal_54[0], 1);
													unk_0x8D4FC7850E2EDA51(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0xE897E371352225D5(iLocal_54[0], 242628503) == 1)
												{
													if (unk_0xFAE04DAE7D44950E(iLocal_54[0]) == 3)
													{
														if (!unk_0x2860DA9980AC4109(iLocal_54[0], unk_0x2A5EB8B0FE590B91(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x7DDA81F38FB30F23(iLocal_54[0], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0x6C559FCFFD2365CB(&(iLocal_54[0]));
														}
													}
												}
											}
											else
											{
												unk_0xDD0413EAB0ADDE6A(iLocal_54[0], unk_0x2A5EB8B0FE590B91(), 0, 16);
												unk_0x015B50BC21C88C8C(iLocal_54[0], 1);
											}
										}
										if (!unk_0x769F0F6444C1ABE0(iLocal_54[1]))
										{
											unk_0x923CA4007FCCB6D3(iLocal_54[1]);
											if (unk_0xD570551619005062(iLocal_54[1], iLocal_58, -1, 0, 0) || unk_0xD570551619005062(iLocal_54[1], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0x654FFF4D16298AC5(iLocal_54[1]);
													unk_0x219EE6A7B599E7DC(&uLocal_65);
													unk_0xAF2C217E49954DFD(0);
													unk_0xF7D2F9A8A20E06C8(0, unk_0x82D9CF397BA8C885(iLocal_58, -0.5f, 0.5f, 0f), unk_0x2A5EB8B0FE590B91(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xA6AC097BEBB7B1F0(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0x8C6A1F8B258BDF97(0, iLocal_58, unk_0x2A5EB8B0FE590B91(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0xBD718C5BA2122192(uLocal_65);
													unk_0x234E551BB8E8813B(iLocal_54[1], uLocal_65);
													unk_0xEDD36C58DDE03C8F(&uLocal_65);
													unk_0x015B50BC21C88C8C(iLocal_54[1], 1);
													unk_0x8D4FC7850E2EDA51(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0xE897E371352225D5(iLocal_54[1], 242628503) == 1)
												{
													if (unk_0xFAE04DAE7D44950E(iLocal_54[1]) == 3)
													{
														if (!unk_0x2860DA9980AC4109(iLocal_54[1], unk_0x2A5EB8B0FE590B91(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x7DDA81F38FB30F23(iLocal_54[1], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0x6C559FCFFD2365CB(&(iLocal_54[1]));
														}
													}
												}
											}
											else
											{
												unk_0xDD0413EAB0ADDE6A(iLocal_54[1], unk_0x2A5EB8B0FE590B91(), 0, 16);
												unk_0x015B50BC21C88C8C(iLocal_54[1], 1);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_49 != 9)
						{
							if (!unk_0x769F0F6444C1ABE0(iLocal_53))
							{
								if (unk_0x7DDA81F38FB30F23(iLocal_53, Local_142, 5f, 5f, 5f, 0, 1, 0))
								{
									func_8(0);
									unk_0x4EDE34FBADD967A6(0);
									func_104();
									iLocal_49 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0x2137828D03306CAF(iLocal_53))
							{
								unk_0x27BAC9B39BCC6522(&iLocal_53);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_49 != 3)
						{
							if (func_1())
							{
								unk_0x988197573BDAD49A("RE6_BOTH_DEAD");
								if (!iLocal_74)
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_106 = unk_0x3732B96D7A1859B4() + 8500;
									iLocal_74 = 1;
								}
								if (!unk_0x769F0F6444C1ABE0(iLocal_53))
								{
									if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_53, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_49 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_49 == 1 || iLocal_49 == 2) || iLocal_49 == 3) || iLocal_49 == 7)
						{
							if (!unk_0x769F0F6444C1ABE0(iLocal_53))
							{
								if (!bLocal_130)
								{
									if (unk_0xE897E371352225D5(iLocal_53, 1785177548) != 1 && unk_0xE897E371352225D5(iLocal_53, 1785177548) != 0)
									{
										unk_0x5DE3EC94E90BB96F(iLocal_53);
										uLocal_343 = unk_0x6D46C949A32B8D73(Local_78, -2f, -4f, 18f, 2);
										unk_0x5F778B8D6D7DF47B(iLocal_53, uLocal_343, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0xA5537C55BC0E41FD(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xA5537C55BC0E41FD(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xA2218E1CAB0028A5(uLocal_343, 1);
										unk_0x015B50BC21C88C8C(iLocal_53, 1);
									}
									if (unk_0xFB4BF464D20ED824(iLocal_53))
									{
										unk_0x67727DD908D0A5D5(iLocal_53, 1);
										unk_0xE1369C79B22BAF97(iLocal_53, 1);
										unk_0x67E5DE1657F60AC6(iLocal_53, 0);
									}
								}
								if ((unk_0xB7924D997D960618(iLocal_53) || unk_0xD6E644EE39BA8797(iLocal_53)) || (iLocal_125 - unk_0xE86A53C202B21FAB(iLocal_53)) >= 50)
								{
									unk_0x67727DD908D0A5D5(iLocal_53, 1);
									unk_0xE1369C79B22BAF97(iLocal_53, 1);
									unk_0x67E5DE1657F60AC6(iLocal_53, 0);
								}
								if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xA9A04898798AE9E6(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
								{
									if (unk_0xD2660BAC03EB7433(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) < 5f)
									{
									}
									else if (unk_0xB588E9EC60290D87(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), iLocal_53))
									{
										unk_0x67727DD908D0A5D5(iLocal_53, 1);
										unk_0xE1369C79B22BAF97(iLocal_53, 1);
										unk_0x67E5DE1657F60AC6(iLocal_53, 0);
									}
								}
								if (!unk_0xA9A04898798AE9E6(iLocal_58, 0))
								{
									if (unk_0xB588E9EC60290D87(iLocal_58, iLocal_53))
									{
										unk_0x67727DD908D0A5D5(iLocal_53, 1);
										unk_0xE1369C79B22BAF97(iLocal_53, 1);
										unk_0x67E5DE1657F60AC6(iLocal_53, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_206();
		}
	}
}

int func_1()
{
	if (!bLocal_130)
	{
		if (!unk_0x2137828D03306CAF(iLocal_54[0]) && !unk_0x2137828D03306CAF(iLocal_54[1]))
		{
			return 1;
		}
		if (unk_0x2137828D03306CAF(iLocal_54[0]) && unk_0x2137828D03306CAF(iLocal_54[1]))
		{
			if (unk_0x769F0F6444C1ABE0(iLocal_54[0]) && unk_0x769F0F6444C1ABE0(iLocal_54[1]))
			{
				return 1;
			}
			if (unk_0x9C328EE18F7D02F0(iLocal_54[0]) && unk_0x9C328EE18F7D02F0(iLocal_54[1]))
			{
				return 1;
			}
		}
		if (unk_0x2137828D03306CAF(iLocal_54[0]) && !unk_0x2137828D03306CAF(iLocal_54[1]))
		{
			if (unk_0x769F0F6444C1ABE0(iLocal_54[0]))
			{
				return 1;
			}
		}
		if (unk_0x2137828D03306CAF(iLocal_54[1]) && !unk_0x2137828D03306CAF(iLocal_54[0]))
		{
			if (unk_0x769F0F6444C1ABE0(iLocal_54[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0x769F0F6444C1ABE0(iLocal_54[0]))
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_111[0]))
		{
			if (unk_0x2137828D03306CAF(iLocal_60))
			{
				if (unk_0xED01C551E3A161C0(iLocal_60))
				{
					unk_0xA806066ECDF61E23(iLocal_60, 1, 1);
				}
			}
			func_3(&uLocal_178, 4);
			unk_0x789C84F1B8496AD0(&(uLocal_111[0]));
		}
	}
	if (unk_0x769F0F6444C1ABE0(iLocal_54[1]))
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_111[1]))
		{
			func_3(&uLocal_178, 3);
			unk_0x789C84F1B8496AD0(&(uLocal_111[1]));
		}
	}
	if (unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (!unk_0xA9A04898798AE9E6(iLocal_53, 0))
		{
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_114))
		{
			func_3(&uLocal_178, 5);
			unk_0x789C84F1B8496AD0(&uLocal_114);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	unk_0x988197573BDAD49A("RE6_END");
	func_206();
}

int func_5()
{
	if (unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_25457)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_103222 = iParam0;
}

void func_8(int iParam0)
{
	Global_16756 = iParam0;
}

int func_9()
{
	if (Global_103236.f_24776.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_25456;
}

void func_11()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]) || !unk_0x769F0F6444C1ABE0(iLocal_54[1]))
		{
			if (!func_12())
			{
				switch (iLocal_168)
				{
					case 0:
						if (iLocal_106 < unk_0x3732B96D7A1859B4())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 1:
						if (iLocal_106 < unk_0x3732B96D7A1859B4())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 2:
						if (iLocal_106 < unk_0x3732B96D7A1859B4())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 3:
						if (iLocal_106 < unk_0x3732B96D7A1859B4())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(3500, 5000));
								iLocal_168 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_45())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_6())
	{
		if (func_44() == 0)
		{
			func_41(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 1)
		{
			func_41(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 2)
		{
			func_41(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0xA05830EF1E69B13F(unk_0x0FFED3E94261A832(), 1);
	func_17(-1, 0);
	func_14();
	func_206();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
	{
		return 0;
	}
	if (Global_91816.f_8)
	{
		if (Global_91816.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91816.f_10 > 1)
	{
		return 0;
	}
	Global_91816.f_10++;
	return 1;
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_103236.f_24776.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_103224 = iParam1;
		if (Global_103222 == 0)
		{
			if (((Global_103225 == 1 || Global_103225 == 5) || Global_103225 == 11) || Global_103225 == 25)
			{
				func_7(2);
			}
			else if ((Global_103225 == 26 || Global_103225 == 8) || Global_103225 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_103236.f_9975[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_103236.f_9975[iParam0 /*12*/].f_6 == 11 || Global_103236.f_9975[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_103236.f_9975[iParam0 /*12*/].f_5 = 1;
		Global_103236.f_9975[iParam0 /*12*/].f_10 = uParam1;
		Global_103236.f_9975[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_19();
	}
}

void func_19()
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
	Global_102972 = 0;
	Global_102973 = 0;
	Global_102974 = 0;
	Global_102975 = 0;
	Global_102976 = 0;
	Global_102977 = 0;
	Global_102978 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_103236.f_9975.f_3853;
	Global_103236.f_9975.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_103236.f_9975[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_103236.f_9975[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_102972++;
					fVar1 = (fVar1 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_102973++;
					fVar2 = (fVar2 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_102974++;
					fVar3 = (fVar3 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_102975++;
					fVar4 = (fVar4 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_102976++;
					fVar5 = (fVar5 + (Global_103236.f_9975[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_102977++;
					fVar6 = (fVar6 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_102978++;
					fVar7 = (fVar7 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_102955 > 0)
	{
		if (Global_102972 == Global_102955)
		{
			fVar1 = 55f;
		}
	}
	if (Global_102956 > 0)
	{
		if (Global_102973 == Global_102956)
		{
			fVar2 = 10f;
		}
	}
	if (Global_102957 > 0)
	{
		if (Global_102974 == Global_102957)
		{
			fVar3 = 0f;
		}
	}
	if (Global_102958 > 0)
	{
		if (Global_102975 == Global_102958)
		{
			fVar4 = 10f;
		}
	}
	if (Global_102959 > 0)
	{
		if (((Global_102976 == Global_102959 || (Global_102959 * 10 / Global_102976) < 41) || Global_102976 > Global_102962) || Global_102976 == Global_102962)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_103236.f_9975.f_3856, 14))
			{
				if (Global_102976 == Global_102959)
				{
					unk_0x19AA4F8D57E34A69(joaat("num_rndevents_completed"), Global_102959, 0);
					unk_0xF6082E2ADA1C795B(&(Global_103236.f_9975.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_102960 > 0)
	{
		if (Global_102977 == Global_102960)
		{
			fVar6 = 15f;
		}
	}
	if (Global_102961 > 0)
	{
		if (Global_102978 == Global_102961)
		{
			fVar7 = 5f;
		}
	}
	Global_103236.f_9975.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_102976 > Global_102962 || Global_102976 == Global_102962)
	{
		iVar9 = Global_102962;
	}
	else
	{
		iVar9 = Global_102976;
	}
	unk_0xC94674712BED1A82(joaat("num_missions_completed"), Global_102972, 1);
	unk_0xC94674712BED1A82(joaat("num_missions_available"), Global_102955, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_completed"), Global_102973, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_available"), Global_102956, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_completed"), Global_102974, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_available"), Global_102957, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_completed"), Global_102975, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_available"), Global_102958, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_available"), Global_102962, 1);
	unk_0xC94674712BED1A82(joaat("num_misc_completed"), (Global_102978 + Global_102977), 1);
	unk_0xC94674712BED1A82(joaat("num_misc_available"), (Global_102961 + Global_102960), 1);
	Global_102979 = (Global_102972 * 100 / Global_102955);
	Global_102981 = ((Global_102974 + Global_102973) * 100 / (Global_102957 + Global_102956));
	Global_102980 = ((Global_102975 + iVar9) * 100 / (Global_102958 + Global_102962));
	Global_102982 = ((Global_102977 + Global_102978) * 100 / (Global_102960 + Global_102961));
	unk_0x24CB8183E6499C7F(joaat("total_progress_made"), Global_103236.f_9975.f_3853, 1);
	unk_0xC94674712BED1A82(joaat("percent_story_missions"), Global_102979, 1);
	unk_0xC94674712BED1A82(joaat("percent_ambient_missions"), Global_102980, 1);
	unk_0xC94674712BED1A82(joaat("percent_oddjobs"), Global_102981, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853))
	{
		func_21(13, unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853));
	}
	if (!unk_0xA8A044A76B03FC4C())
	{
		if (!Global_69800)
		{
			if (func_20() == 2 == 0 && !unk_0x591AF4C50B46E014())
			{
				if (unk_0xD49DD4AB66A964B2())
				{
					Global_102970 = 0;
				}
				if (!Global_55854)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_25222;
}

int func_21(int iParam0, int iParam1)
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
	iVar0 = unk_0x0C54585A239FF08F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB88BC822A9F5BED8(iParam0, iParam1);
	}
	return 0;
}

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_23()
{
	return Global_1312735;
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_20191.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35302CD5A5D37EED(sParam0, ""))
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
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_103236.f_20191.f_145 < 9)
	{
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_4), sParam1, 16);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_8 = (unk_0x3732B96D7A1859B4() + iParam3);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_9 = iParam5;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_11 = iParam6;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_12 = uParam2;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_13 = iParam7;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_14 = iParam8;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = ((unk_0x3732B96D7A1859B4() + iParam3) + iParam4);
		}
		else
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = -1;
		}
		Global_103236.f_20191.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_103236.f_20191.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 0))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[0])
			{
				Global_103236.f_20191.f_146[0] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 1))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[1])
			{
				Global_103236.f_20191.f_146[1] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 2))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[2])
			{
				Global_103236.f_20191.f_146[2] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_103236.f_2164.f_539.f_4301)
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

void func_31()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_35(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_34(unk_0x2A5EB8B0FE590B91());
			if (func_33(iVar0) && (!func_32(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_33(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_32(int iParam0)
{
	return Global_35813 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)
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
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_20191.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_103236.f_24776.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)
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

int func_39()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xFABF5258A318B1DC(), 64);
	uVar16 = func_40(Var0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xCAEDBF30E3EA14FC(&cParam0))
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

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xAA4F14DA15DB0B51(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_103236.f_7469.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_103236.f_7469.f_911 == Var0.f_0)
		{
			Global_103236.f_7469.f_911 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x3732B96D7A1859B4() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x507FE690B1271947(&(Var0.f_1), 1);
		unk_0x507FE690B1271947(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xF6082E2ADA1C795B(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xF6082E2ADA1C795B(&(Var0.f_1), 10);
		}
		Global_103236.f_7469[Global_103236.f_7469.f_136 /*15*/] = { Var0 };
		Global_103236.f_7469.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0xAA4F14DA15DB0B51(iParam2, iVar15))
			{
				func_42(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_7469.f_136)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_7469[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_103236.f_7469[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_103236.f_7469[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_103236.f_7469.f_764)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_7469.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_103236.f_7469.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_103236.f_7469.f_919[iParam0] = iVar1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_44()
{
	func_31();
	return Global_103236.f_2164.f_539.f_4301;
}

int func_45()
{
	return 1;
}

void func_46()
{
	switch (iLocal_136)
	{
		case 0:
			if (!unk_0x769F0F6444C1ABE0(iLocal_53) && unk_0x7FAC45D56235AB39(iLocal_59, 0))
			{
				if (unk_0xAB603D6FBED0F015(iLocal_53))
				{
					unk_0x799D2CB4039F4804(iLocal_53);
				}
				unk_0x4C47904AE69D7393(iLocal_53, 0);
				unk_0x2725C3746060DA66(iLocal_53, 1);
				unk_0x219EE6A7B599E7DC(&uLocal_65);
				unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), 5000, 2048, 2);
				unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
				unk_0xA6AC097BEBB7B1F0(0, iLocal_59, -1, 0, 1f, 1, 0);
				unk_0xBD718C5BA2122192(uLocal_65);
				unk_0x234E551BB8E8813B(iLocal_53, uLocal_65);
				unk_0xEDD36C58DDE03C8F(&uLocal_65);
				unk_0x015B50BC21C88C8C(iLocal_53, 1);
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0x7FAC45D56235AB39(iLocal_59, 0))
			{
				if (unk_0x5B9B499C707C2A95(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_57))
					{
						unk_0x37959C6A7F431781(iLocal_57, iLocal_58, 10f, 786599);
						unk_0x015B50BC21C88C8C(iLocal_57, 1);
					}
					unk_0x8D4FC7850E2EDA51(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 2:
			iLocal_136++;
			break;
		
		case 3:
			iLocal_136++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_136++;
			}
			break;
		
		case 5:
			unk_0xC1B1E9A034A63A62(0);
			func_13();
			break;
	}
}

void func_47()
{
	switch (iLocal_136)
	{
		case 0:
			unk_0x3A8EFBE4AB457FE2(255, iLocal_177, joaat("player"));
			unk_0x3A8EFBE4AB457FE2(255, joaat("player"), iLocal_177);
			if (!unk_0xA9A04898798AE9E6(unk_0x19D9DFABC3C7D219(), 0))
			{
				unk_0x8231579045104F87(unk_0x19D9DFABC3C7D219(), 5f, 2, 0);
				if (!unk_0x769F0F6444C1ABE0(iLocal_53) && unk_0x7FAC45D56235AB39(iLocal_59, 0))
				{
					if (unk_0xAB603D6FBED0F015(iLocal_53))
					{
						unk_0x799D2CB4039F4804(iLocal_53);
					}
					unk_0x4C47904AE69D7393(iLocal_53, 0);
					unk_0x2725C3746060DA66(iLocal_53, 1);
					unk_0x219EE6A7B599E7DC(&uLocal_65);
					unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), 5000, 2048, 2);
					unk_0xA6AC097BEBB7B1F0(0, iLocal_59, -1, 0, 1f, 1, 0);
					unk_0xBD718C5BA2122192(uLocal_65);
					unk_0x234E551BB8E8813B(iLocal_53, uLocal_65);
					unk_0xEDD36C58DDE03C8F(&uLocal_65);
					unk_0x015B50BC21C88C8C(iLocal_53, 1);
					func_104();
					unk_0x4EDE34FBADD967A6(0);
					func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2700);
			unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
			{
				if (!unk_0xA9A04898798AE9E6(unk_0x19D9DFABC3C7D219(), 0))
				{
					if (!unk_0x05B8AAC38D122B03(unk_0x19D9DFABC3C7D219(), 1))
					{
						if (unk_0xB2C6EB7B345D25EC(unk_0x19D9DFABC3C7D219(), 1) > 0.1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_136++;
			break;
		
		case 2:
			if (unk_0x7FAC45D56235AB39(iLocal_59, 0))
			{
				if (unk_0x5B9B499C707C2A95(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_57))
					{
						unk_0x37959C6A7F431781(iLocal_57, iLocal_59, 10f, 786599);
						unk_0x015B50BC21C88C8C(iLocal_57, 1);
					}
					unk_0x8D4FC7850E2EDA51(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_124 = true;
			}
			break;
	}
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDDA1B42A28EFD32F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (bParam0)
		{
			if (unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) != unk_0x2A5EB8B0FE590B91())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			if (unk_0x3A564E53FCAA6917(iVar0) < 0.95f || unk_0x3A564E53FCAA6917(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!unk_0x30B90655507F26E3(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_49()
{
	if (func_44() == 2)
	{
		if (func_10())
		{
			if (unk_0x4A2E6F541CD8C36E(-1014.154f, 4881.411f, 245.0001f, unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(unk_0x8A41C463063AFC8E()), 0), 1) < 400f)
			{
				if (!Global_25461)
				{
					unk_0x988197573BDAD49A("AC_EN_ROUTE_CULT");
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
				unk_0x988197573BDAD49A("AC_LEFT_AREA");
				Global_25461 = 0;
			}
		}
	}
	return 0;
}

int func_50(struct<3> Param0)
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_25459)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Param0) > (fLocal_47 + 200f) || unk_0x4A2E6F541CD8C36E(-1014.154f, 4881.411f, 245.0001f, unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(unk_0x8A41C463063AFC8E()), 0), 1) < 400f)
			{
				Global_25459 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_51()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			unk_0xA6EF4C7DCA806A90(iLocal_53, 1, 1);
			unk_0xAF2C217E49954DFD(iLocal_53);
		}
		if (func_55("REBU2_LV2_9") || iLocal_72 > 1)
		{
			unk_0xA6EF4C7DCA806A90(iLocal_53, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_72)
		{
			case 0:
				func_70(&uLocal_178, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 1:
				iLocal_73 = unk_0x3732B96D7A1859B4() + 1500;
				iLocal_72++;
				break;
			
			case 2:
				if (iLocal_73 < unk_0x3732B96D7A1859B4())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 4:
				iLocal_73 = unk_0x3732B96D7A1859B4() + 500;
				iLocal_72++;
				break;
			
			case 5:
				if (iLocal_73 < unk_0x3732B96D7A1859B4())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 7:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 9:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 11:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 13:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 15:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 17:
				iLocal_73 = unk_0x3732B96D7A1859B4() + 1000;
				iLocal_72++;
				break;
			
			case 18:
				if (iLocal_73 < unk_0x3732B96D7A1859B4())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 19:
				iLocal_73 = unk_0x3732B96D7A1859B4() + 2500;
				iLocal_72++;
				break;
			
			case 20:
				if (iLocal_73 < unk_0x3732B96D7A1859B4())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_72++;
				}
				break;
			}
	}
}

int func_52()
{
	if (((((((((func_53("REBU2_WV") || func_53("REBU2_UNS1")) || func_53("REBU2_UNS2")) || func_53("REBU2_CULT")) || func_53("REBU2_NEAR")) || func_53("REBU2_WRONG")) || func_53("REBU2_STOP")) || func_53("REBU2_GETOUT")) || func_53("REBU2_JACK")) || func_53("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_53(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_54()}, 4);
		if (unk_0x35302CD5A5D37EED(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_54()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

int func_55(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (unk_0x35302CD5A5D37EED(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_56()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xFCB6B117B84DEF57();
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

void func_57()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (!iLocal_133)
		{
			if (!unk_0xA9A04898798AE9E6(unk_0x19D9DFABC3C7D219(), 0))
			{
				if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), unk_0x19D9DFABC3C7D219(), 1) && unk_0x5B9B499C707C2A95(iLocal_53, unk_0x19D9DFABC3C7D219(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_104();
						unk_0x4EDE34FBADD967A6(0);
						func_70(&uLocal_178, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_133 = 1;
					}
				}
			}
		}
		else if (!unk_0xA9A04898798AE9E6(unk_0x19D9DFABC3C7D219(), 0))
		{
			if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), unk_0x19D9DFABC3C7D219(), 0) && unk_0x5B9B499C707C2A95(iLocal_53, unk_0x19D9DFABC3C7D219(), 0))
			{
				iLocal_133 = 0;
			}
		}
		if (!iLocal_134)
		{
			if (unk_0x13F66F794C535493(unk_0x2A5EB8B0FE590B91()))
			{
				func_81(0);
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (!unk_0x13F66F794C535493(unk_0x2A5EB8B0FE590B91()))
		{
			iLocal_134 = 0;
		}
		if (!iLocal_135)
		{
			if (unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
			{
				func_81(0);
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_135 = 1;
			}
		}
		else if (unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
		{
			iLocal_135 = 0;
		}
	}
}

void func_58()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (!func_61())
			{
				if (unk_0xAB603D6FBED0F015(iLocal_53))
				{
					unk_0x799D2CB4039F4804(iLocal_53);
				}
				if (unk_0xE897E371352225D5(iLocal_53, 1227113341) != 1 && unk_0xE897E371352225D5(iLocal_53, 1227113341) != 0)
				{
					unk_0x17DD40170243F0AB(iLocal_53, unk_0x2A5EB8B0FE590B91(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0xC4A39E4229BD3ABE(iLocal_53, 0))
				{
					unk_0x8F2751B831A7B303(iLocal_53, 0, 4194304);
				}
				if (!iLocal_132)
				{
					func_81(0);
					func_104();
					unk_0x4EDE34FBADD967A6(0);
					iLocal_132 = 1;
					if (!func_60())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_132 = 0;
				if (((unk_0xE897E371352225D5(iLocal_53, 1227113341) == 1 || unk_0xE897E371352225D5(iLocal_53, 1227113341) == 0) || unk_0xE897E371352225D5(iLocal_53, 242628503) == 1) || unk_0xE897E371352225D5(iLocal_53, 242628503) == 0)
				{
					unk_0x654FFF4D16298AC5(iLocal_53);
				}
			}
		}
		else if (((!unk_0xAB603D6FBED0F015(iLocal_53) && !unk_0xC4A39E4229BD3ABE(iLocal_53, 0)) && unk_0xE897E371352225D5(iLocal_53, 242628503) != 1) && unk_0xE897E371352225D5(iLocal_53, 242628503) != 0)
		{
			unk_0xD234B4C90ED0E156(iLocal_53, func_59());
			unk_0xAF0A51CDFB0B9352(iLocal_53, 1);
			unk_0x6DADD4361C85DDAC(iLocal_53, 0);
		}
	}
}

var func_59()
{
	return unk_0x60A7F9A542DD09AD(unk_0x8A41C463063AFC8E());
}

int func_60()
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		if (unk_0x7FAC45D56235AB39(unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91()), 1))
		{
			if ((unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 1))) || unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 1)))) || unk_0xD043D4D784E459B0(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
		{
			if (((((!unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()) && !unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91())) && !unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91())) && !unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91())) && !unk_0x833B8D234938E4CD(unk_0x2A5EB8B0FE590B91())) && !unk_0x3E7C8A20BD503C7A(unk_0x2A5EB8B0FE590B91(), joaat("rhino")))
			{
				if (unk_0xCBA4F77BB9D2F115(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		if (unk_0x7FAC45D56235AB39(unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91()), 0))
		{
			if ((((!unk_0x0F93427D94EAEAA2(unk_0xD3B21CE53AA7BE51(unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91()))) && !unk_0xDA6E804770521A18(unk_0xD3B21CE53AA7BE51(unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91())))) && !unk_0xC6B6C45D0DE76B0B(unk_0xD3B21CE53AA7BE51(unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91())))) && !unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91())))) && unk_0xD3B21CE53AA7BE51(unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (unk_0xC212BF73836863E3(iLocal_53))
		{
			if (!iLocal_170)
			{
				iLocal_171 = unk_0x3732B96D7A1859B4();
				iLocal_170 = 1;
			}
			else
			{
				iLocal_172 = unk_0x3732B96D7A1859B4();
			}
		}
		else
		{
			iLocal_170 = 0;
		}
	}
	if ((iLocal_172 - iLocal_171) > 180000)
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			if (unk_0xAB603D6FBED0F015(iLocal_53))
			{
				unk_0x799D2CB4039F4804(iLocal_53);
				if (unk_0x7DDA81F38FB30F23(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x28FB7E63A217D6DE(iLocal_53, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x015B50BC21C88C8C(iLocal_53, 1);
				}
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()
{
	if (unk_0xBBEAEDA40178A7D0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!iLocal_173)
		{
			iLocal_174 = unk_0x3732B96D7A1859B4();
			iLocal_173 = 1;
		}
		else
		{
			iLocal_175 = unk_0x3732B96D7A1859B4();
		}
	}
	else
	{
		iLocal_173 = 0;
	}
	if ((iLocal_175 - iLocal_174) > 120000)
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			if (unk_0xAB603D6FBED0F015(iLocal_53))
			{
				unk_0x799D2CB4039F4804(iLocal_53);
				if (unk_0x7DDA81F38FB30F23(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x28FB7E63A217D6DE(iLocal_53, Local_139, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x015B50BC21C88C8C(iLocal_53, 1);
				}
				else
				{
					unk_0x8F2751B831A7B303(iLocal_53, 0, 4194304);
				}
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_53, 8f, 8f, 8f, 0, 1, 0) || unk_0x7ED5EB6731656BF7(unk_0x2A5EB8B0FE590B91()))
		{
			if ((unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0x5B9B499C707C2A95(iLocal_53, unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0)) && !unk_0x7ED5EB6731656BF7(unk_0x2A5EB8B0FE590B91()))
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_114))
				{
					uLocal_114 = func_67(iLocal_53, 0, 145);
				}
				if (unk_0xBDD3EABACAB97D09(uLocal_137))
				{
					unk_0x789C84F1B8496AD0(&uLocal_137);
				}
			}
			else
			{
				if (!unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xBDD3EABACAB97D09(uLocal_114))
					{
						unk_0x789C84F1B8496AD0(&uLocal_114);
					}
				}
				if (!unk_0xBDD3EABACAB97D09(uLocal_137))
				{
					uLocal_137 = func_65(Local_139, 1);
				}
			}
		}
		else if (!unk_0xBDD3EABACAB97D09(uLocal_114))
		{
			uLocal_114 = func_67(iLocal_53, 0, 145);
		}
		if (!unk_0xAB603D6FBED0F015(iLocal_53))
		{
			if (!unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_53, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0x654FFF4D16298AC5(iLocal_53);
				unk_0xD234B4C90ED0E156(iLocal_53, func_59());
				unk_0xAF0A51CDFB0B9352(iLocal_53, 1);
				unk_0x6DADD4361C85DDAC(iLocal_53, 0);
			}
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
			{
				unk_0x654FFF4D16298AC5(iLocal_53);
				unk_0xD234B4C90ED0E156(iLocal_53, func_59());
				unk_0xAF0A51CDFB0B9352(iLocal_53, 1);
				unk_0x6DADD4361C85DDAC(iLocal_53, 0);
			}
		}
		if (!unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_53, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

var func_65(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9EDB165CAADCAB2C(Param0);
	unk_0x0B584E556B01101F(uVar0, func_66(unk_0x591AF4C50B46E014(), 1f, 1f));
	unk_0xD42DEAFD12809447(uVar0, iParam3);
	return uVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_67(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xBDD3EABACAB97D09(uVar0)) && unk_0x9418F0AE636D9770(&(Global_103236.f_27831[iParam2 /*29*/].f_3)))
	{
		unk_0xA6B842B66643C116(uVar0, &(Global_103236.f_27831[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x2137828D03306CAF(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x9E3A324AB806771E(iParam0);
	if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_66(unk_0x591AF4C50B46E014(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
		}
		else
		{
			unk_0xEB5D36079067EBA5(uVar0, 2);
		}
	}
	else if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_66(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
		unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
	}
	else if (unk_0xD277B6800A356CC0(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_66(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_69()
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		iLocal_169 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (unk_0x7FAC45D56235AB39(iLocal_169, 0))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_53))
			{
				if (unk_0xF8ED2D0629FE764D(iLocal_53, iLocal_169))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_70(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_71(sParam2, iParam3, 0);
}

int func_71(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xE40123A348A5FEDA(0);
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
					func_79();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_77();
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
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_76();
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
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_75())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_74())
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_73();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_72();
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
		func_79();
	}
	return 0;
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_73()
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
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_74()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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

void func_76()
{
	if (func_32(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		Global_14443 = func_44();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_77()
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

bool func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_79()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_81(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_149)
		{
			if (!unk_0x58478145CAF8429C(&Local_156))
			{
				if (func_84(&uLocal_178, "REBU2AU", &Local_156, &Local_150, 8, 0, 0))
				{
					iLocal_149 = 0;
				}
			}
			else
			{
				iLocal_149 = 0;
			}
		}
	}
	else if ((!iLocal_149 && func_12()) && !func_52())
	{
		Local_156 = { func_54() };
		Local_150 = { func_56() };
		func_82();
		iLocal_149 = 1;
	}
}

void func_82()
{
	Global_14611 = 0;
	func_83();
}

void func_83()
{
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xA37D20A4B77452D4();
		Global_16756 = 0;
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

bool func_84(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_71(sParam2, iParam4, 0);
}

void func_85()
{
	if (unk_0x2137828D03306CAF(iLocal_53))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			unk_0x3EFE40733EFB6649(iLocal_53, 394, 1);
		}
		if (unk_0xE8594BE97055E9A1(iLocal_53, unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_53))
			{
				unk_0xCD6FB688ED8B6284(iLocal_53, unk_0x2A5EB8B0FE590B91(), 150f, -1, 0, 0);
				unk_0x015B50BC21C88C8C(iLocal_53, 1);
			}
			if (!unk_0x769F0F6444C1ABE0(iLocal_57))
			{
				unk_0x3A8EFBE4AB457FE2(5, iLocal_177, joaat("player"));
				unk_0xDD0413EAB0ADDE6A(iLocal_57, unk_0x2A5EB8B0FE590B91(), 0, 16);
				unk_0x015B50BC21C88C8C(iLocal_57, 1);
			}
			func_104();
			unk_0x4EDE34FBADD967A6(0);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
		if (unk_0x2137828D03306CAF(iLocal_57))
		{
			if (unk_0xE8594BE97055E9A1(iLocal_57, unk_0x2A5EB8B0FE590B91(), 1))
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_53))
				{
					unk_0xCD6FB688ED8B6284(iLocal_53, unk_0x2A5EB8B0FE590B91(), 150f, -1, 0, 0);
					unk_0x015B50BC21C88C8C(iLocal_53, 1);
				}
				if (!unk_0x769F0F6444C1ABE0(iLocal_57))
				{
					unk_0x3A8EFBE4AB457FE2(5, iLocal_177, joaat("player"));
					unk_0xDD0413EAB0ADDE6A(iLocal_57, unk_0x2A5EB8B0FE590B91(), 0, 16);
					unk_0x015B50BC21C88C8C(iLocal_57, 1);
				}
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_51 = 4;
			}
		}
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 1)
		{
			unk_0xCD6FB688ED8B6284(iLocal_53, unk_0x2A5EB8B0FE590B91(), 150f, -1, 0, 0);
			unk_0x015B50BC21C88C8C(iLocal_53, 1);
			func_104();
			unk_0x4EDE34FBADD967A6(0);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	}
}

void func_86()
{
	int iVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if ((unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_53, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91())) && !unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_130 = true;
				if (!iLocal_115)
				{
					func_93(1, 1, 1, 0);
					unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 0, 24);
					unk_0x7D53B6FFAEDA810A(1);
					unk_0xDA0C5084402DA99C(0);
					unk_0xA6C8C7573424CA93(0);
					unk_0x93C3E0DB435FCD13(unk_0x2A5EB8B0FE590B91(), 1);
					if (unk_0x2137828D03306CAF(unk_0x19D9DFABC3C7D219()))
					{
						unk_0x216B434C1A609F5B(unk_0x19D9DFABC3C7D219(), 1, 0);
						if (unk_0xFB4BF464D20ED824(unk_0x19D9DFABC3C7D219()))
						{
							func_92(unk_0x19D9DFABC3C7D219());
							unk_0x525CB8A0699017B3(unk_0x19D9DFABC3C7D219(), 200f);
						}
						if (unk_0x2860DA9980AC4109(unk_0x19D9DFABC3C7D219(), iLocal_53, 5f, 5f, 5f, 0, 1, 0) || unk_0x7DDA81F38FB30F23(unk_0x19D9DFABC3C7D219(), Local_88, 5f, 5f, 5f, 0, 1, 0))
						{
							unk_0x8E979F037EACE55A(unk_0x19D9DFABC3C7D219(), unk_0xD1EE0E9FCD74A37B(iLocal_53, 1) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!unk_0xA9A04898798AE9E6(unk_0x19D9DFABC3C7D219(), 0))
							{
								unk_0x07C140F31B3CDAFA(unk_0x19D9DFABC3C7D219(), 1084227584);
							}
						}
					}
					if (unk_0x2137828D03306CAF(iLocal_58))
					{
						if (unk_0xFB4BF464D20ED824(iLocal_58))
						{
							func_92(iLocal_58);
							unk_0x525CB8A0699017B3(iLocal_58, 200f);
						}
						if (unk_0x2860DA9980AC4109(iLocal_58, iLocal_53, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0x8E979F037EACE55A(iLocal_58, Local_88, 0, 0, 0, 1);
							if (!unk_0xA9A04898798AE9E6(iLocal_58, 0))
							{
								unk_0x07C140F31B3CDAFA(iLocal_58, 1084227584);
							}
						}
					}
					if (!unk_0x769F0F6444C1ABE0(iLocal_53))
					{
						iLocal_169 = unk_0x8B62441BF8D73898(unk_0xD1EE0E9FCD74A37B(iLocal_53, 1), 5f, 0, 2);
						if (!unk_0xA9A04898798AE9E6(iLocal_169, 0))
						{
							if (unk_0xFB4BF464D20ED824(iLocal_169))
							{
								func_92(iLocal_169);
								unk_0x525CB8A0699017B3(iLocal_169, 200f);
							}
							unk_0x8E979F037EACE55A(iLocal_169, unk_0xD1EE0E9FCD74A37B(iLocal_53, 1) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					unk_0x03F063804FDEDF1C(Local_78, 10f);
					unk_0xCF5A819ECA466C6C(Local_78, 10f, 0);
					unk_0x17F1CA1754EDB8DB(Local_78, 4.5f, 0, 0, 0, 0, 0);
					unk_0x8E979F037EACE55A(iLocal_53, Local_78, 1, 0, 0, 1);
					unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Local_78, 1, 0, 0, 1);
					if (!unk_0x769F0F6444C1ABE0(iLocal_53))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_54)
					{
						if (unk_0x2137828D03306CAF(iLocal_54[iVar0]))
						{
							if (unk_0x7DDA81F38FB30F23(iLocal_54[iVar0], unk_0xD1EE0E9FCD74A37B(iLocal_53, 0), 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								unk_0x27BAC9B39BCC6522(&(iLocal_54[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x769F0F6444C1ABE0(iLocal_53))
					{
						uLocal_343 = unk_0x6D46C949A32B8D73(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						uLocal_77 = unk_0x1FF428E592B6F928("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x70D9DCACEFF60406(uLocal_77, uLocal_343, "untie_cam", "random@burial");
						unk_0x5DE3EC94E90BB96F(unk_0x2A5EB8B0FE590B91());
						unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 18.2311f);
						unk_0x67E5DE1657F60AC6(iLocal_53, 200);
						unk_0x67727DD908D0A5D5(iLocal_53, 0);
						unk_0xE1369C79B22BAF97(iLocal_53, 0);
						unk_0x5DE3EC94E90BB96F(iLocal_53);
						unk_0x5F778B8D6D7DF47B(iLocal_53, uLocal_343, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0xB1D181DBFC526F52(iLocal_53, 0, 0);
						unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), uLocal_343, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
						unk_0xA5537C55BC0E41FD(uLocal_61[0], uLocal_343, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0xA5537C55BC0E41FD(uLocal_61[1], uLocal_343, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0xD429163073BD3A47(uLocal_77, 1);
						unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
						iLocal_120 = unk_0x3732B96D7A1859B4();
						iLocal_115 = 1;
					}
				}
			}
		}
	}
	if (iLocal_115 && !iLocal_117)
	{
		unk_0x9BF32B79391A5A8E();
		if (unk_0x354ACA1BAED67927(uLocal_343))
		{
			if ((unk_0x58DF249E321EAB8E(uLocal_343) > 0.115f && unk_0x58DF249E321EAB8E(uLocal_343) < 0.12f) || (unk_0x58DF249E321EAB8E(uLocal_343) > 0.355f && unk_0x58DF249E321EAB8E(uLocal_343) < 0.36f))
			{
				unk_0x08BE237DBCD9CBD9(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (unk_0x58DF249E321EAB8E(uLocal_343) > 0.6f)
			{
				if (!iLocal_116)
				{
					func_104();
					unk_0x4EDE34FBADD967A6(0);
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_116 = 1;
					}
				}
			}
		}
		iLocal_119 = unk_0x3732B96D7A1859B4();
		if (((iLocal_119 - iLocal_120) > 9700 && !iLocal_123) && unk_0xAD69426B73C6E186() == 4)
		{
			unk_0x18A0B296F4932A7B("CamPushInNeutral", 0, 0);
			unk_0x08BE237DBCD9CBD9(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_123 = 1;
		}
		if ((iLocal_119 - iLocal_120) > 10000)
		{
			iLocal_117 = 1;
		}
		if (func_90(1000))
		{
			func_104();
			unk_0x5BFE0E837BA0AF60(800);
			while (unk_0xEF08C8E0C4679477())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_117 = 1;
			bLocal_118 = true;
		}
	}
	if (iLocal_117 && !bLocal_122)
	{
		unk_0xDA0C5084402DA99C(1);
		unk_0xA6C8C7573424CA93(1);
		unk_0x7D700F8B84AB6466(uLocal_343, 1f);
		unk_0x5DE3EC94E90BB96F(unk_0x2A5EB8B0FE590B91());
		unk_0xB1D181DBFC526F52(unk_0x2A5EB8B0FE590B91(), 0, 0);
		unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 256.7693f);
		if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			unk_0x5DE3EC94E90BB96F(iLocal_53);
			unk_0xB1D181DBFC526F52(iLocal_53, 0, 0);
			unk_0xDC7A31134115BFF0(iLocal_53, 1);
			unk_0x8E979F037EACE55A(iLocal_53, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			unk_0x2681BA3707AF6DA7(iLocal_53, 73.449f);
		}
		unk_0x164CA344DBD7B6F3(26.1578f);
		unk_0x61C3B2A4FEFA1D6D(-8.1198f, 1065353216);
		unk_0xD429163073BD3A47(uLocal_77, 0);
		unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
		unk_0x1E2E6AAAD9AE1286(uLocal_77, 0);
		unk_0x93C3E0DB435FCD13(unk_0x2A5EB8B0FE590B91(), 0);
		if (bLocal_118)
		{
			unk_0x9B0467159FAB9F56(800);
			while (unk_0x9AF3AC4F52023B45())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		bLocal_122 = true;
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (bLocal_122)
		{
			if (!iLocal_121)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0x3A8EFBE4AB457FE2(1, iLocal_177, joaat("player"));
					unk_0x3A8EFBE4AB457FE2(1, joaat("player"), iLocal_177);
					unk_0x219EE6A7B599E7DC(&uLocal_65);
					unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), -1, 2048, 2);
					unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 4000);
					if (unk_0x7FAC45D56235AB39(unk_0x19D9DFABC3C7D219(), 0))
					{
						if (unk_0x2860DA9980AC4109(iLocal_53, unk_0x19D9DFABC3C7D219(), 20f, 20f, 20f, 0, 1, 0) && unk_0xCBA4F77BB9D2F115(unk_0x19D9DFABC3C7D219()) > 0)
						{
							unk_0xA6AC097BEBB7B1F0(0, unk_0x19D9DFABC3C7D219(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0xAB603D6FBED0F015(iLocal_53))
						{
							unk_0xD234B4C90ED0E156(iLocal_53, func_59());
							unk_0xAF0A51CDFB0B9352(iLocal_53, 1);
							unk_0x6DADD4361C85DDAC(iLocal_53, 0);
						}
					}
					else if (!unk_0xAB603D6FBED0F015(iLocal_53))
					{
						unk_0xD234B4C90ED0E156(iLocal_53, func_59());
						unk_0xAF0A51CDFB0B9352(iLocal_53, 1);
						unk_0x6DADD4361C85DDAC(iLocal_53, 0);
					}
					unk_0xBD718C5BA2122192(uLocal_65);
					unk_0x234E551BB8E8813B(iLocal_53, uLocal_65);
					unk_0xEDD36C58DDE03C8F(&uLocal_65);
					if (unk_0xBDD3EABACAB97D09(uLocal_114))
					{
						unk_0x789C84F1B8496AD0(&uLocal_114);
					}
					if (!unk_0xBDD3EABACAB97D09(uLocal_137))
					{
						uLocal_137 = func_65(Local_139, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!unk_0xBDD3EABACAB97D09(uLocal_138))
						{
							uLocal_138 = func_65(Local_142, 0);
							unk_0x9FD1808EF916E312(uLocal_138, 269);
							func_88();
						}
					}
					func_87();
					iLocal_131 = 1;
					iLocal_121 = 1;
					unk_0xC1B1E9A034A63A62(0);
					unk_0x24266D999C1121E2(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					unk_0x20A9229D8F4F054A(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0, 1);
					func_93(0, 1, 1, 0);
					unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 4);
					unk_0x869E3FDF7FDABA6A(unk_0x2A5EB8B0FE590B91());
					iLocal_49 = 4;
				}
			}
		}
	}
}

void func_87()
{
	if (!func_9())
	{
		if (func_44() == 2)
		{
			Global_25456 = 1;
		}
	}
}

void func_88()
{
	if (func_44() == 2)
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
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

int func_90(int iParam0)
{
	if (unk_0x0B21CC5276C2CE1B())
	{
		if ((unk_0x3732B96D7A1859B4() - Global_28) > iParam0)
		{
			Global_27 = unk_0x3732B96D7A1859B4();
		}
		Global_28 = unk_0x3732B96D7A1859B4();
		if ((unk_0x3732B96D7A1859B4() - Global_27) > iParam0)
		{
			if (func_91())
			{
				Global_27 = unk_0x3732B96D7A1859B4();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
{
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (unk_0x92BC4A8239BDDACC(0, 18) || unk_0x92BC4A8239BDDACC(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (!unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			if (unk_0xFB4BF464D20ED824(iParam0))
			{
				unk_0xF8879E0D1FB66B7B(iParam0);
				unk_0x67E5DE1657F60AC6(iParam0, unk_0xE86A53C202B21FAB(iParam0) + 200);
				unk_0x525CB8A0699017B3(iParam0, (unk_0xB01B1648698791BB(iParam0) + 200f));
				unk_0x6385100E76566DD6(iParam0, (unk_0x67ED3C44A2B3E8F2(iParam0) + 200f));
				unk_0x03F063804FDEDF1C(unk_0xD1EE0E9FCD74A37B(iParam0, 1), 5f);
				unk_0x333EF04F1A5ADEB5(unk_0xD1EE0E9FCD74A37B(iParam0, 1), 2.5f, 1, 0, 0, 0);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xFEDBEA905C0956B1(unk_0x0FFED3E94261A832());
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 1);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 1);
		func_100(1);
		unk_0x2200CE3F471C6FE7();
		unk_0xFF9AC2CB876656B2();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3813EBE69CF8CAD2())
			{
				unk_0xE40123A348A5FEDA(0);
			}
			if (!func_74())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_99(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_69798 = 1;
	}
	else
	{
		func_100(0);
		unk_0x5827AA638AD6DBC3();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x387F543932786998();
		}
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 0);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 0);
		func_99(0, iParam3, iParam2, 0);
		if (unk_0x591AF4C50B46E014())
		{
			if (((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_97(unk_0x0FFED3E94261A832())) && !func_95(unk_0x0FFED3E94261A832(), 0)) && !func_94())
			{
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_97(unk_0x0FFED3E94261A832()))
		{
			unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
		}
		Global_69798 = 0;
	}
}

bool func_94()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

bool func_95(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_96(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_97(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_98())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_98()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_99(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && uParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_100(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 13);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 13);
	}
}

void func_101()
{
	if (!unk_0xA9A04898798AE9E6(iLocal_53, 0))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0x3732B96D7A1859B4())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0x3732B96D7A1859B4())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0x3732B96D7A1859B4())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0x3732B96D7A1859B4())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(4000, 5500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_102(var uParam0, char* sParam1, int iParam2)
{
	unk_0x430053236FA97FB8(uParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)
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

void func_104()
{
	Global_14611 = 0;
	func_105();
}

void func_105()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
	}
}

void func_106()
{
	if (!iLocal_67 && unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_107, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
		}
	}
	if (unk_0x7FAC45D56235AB39(iLocal_58, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]))
		{
			unk_0x8C6A1F8B258BDF97(iLocal_54[0], iLocal_58, unk_0x2A5EB8B0FE590B91(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0x015B50BC21C88C8C(iLocal_54[0], 1);
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_54[1]))
		{
			unk_0xA6AC097BEBB7B1F0(iLocal_54[1], iLocal_58, -1, 0, 3f, 1, 0);
			unk_0x015B50BC21C88C8C(iLocal_54[1], 1);
		}
	}
	else
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54[iLocal_64]))
			{
				unk_0xCD6FB688ED8B6284(iLocal_54[iLocal_64], unk_0x2A5EB8B0FE590B91(), 250f, -1, 0, 0);
				unk_0x015B50BC21C88C8C(iLocal_54[iLocal_64], 1);
			}
			iLocal_64++;
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	func_4();
}

void func_107()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]) && !unk_0x769F0F6444C1ABE0(iLocal_54[1]))
	{
		if (!unk_0x971F6A3B4BE8006F(iLocal_54[0]) && !unk_0x971F6A3B4BE8006F(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0xAB211D8B129F26CB(iLocal_54[1]))
				{
					unk_0x654FFF4D16298AC5(iLocal_54[1]);
					unk_0xBE7E90218F42F15C(iLocal_54[1], unk_0x2A5EB8B0FE590B91(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
	iLocal_49 = 7;
}

void func_108()
{
	float fVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]) && !unk_0x769F0F6444C1ABE0(iLocal_54[1]))
	{
		if (!iLocal_69)
		{
			if (!iLocal_68)
			{
				unk_0x219EE6A7B599E7DC(&uLocal_65);
				unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), -1, 2048, 2);
				unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
				unk_0xBD718C5BA2122192(uLocal_65);
				unk_0x234E551BB8E8813B(iLocal_54[1], uLocal_65);
				unk_0xEDD36C58DDE03C8F(&uLocal_65);
				iLocal_68 = 1;
			}
			if (unk_0x16EDD647B91D8D8F(iLocal_54[1], unk_0x2A5EB8B0FE590B91(), 90f))
			{
				func_104();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]) && !unk_0x769F0F6444C1ABE0(iLocal_54[1]))
				{
					fVar0 = func_110(iLocal_54[0], unk_0x2A5EB8B0FE590B91(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0xA806066ECDF61E23(iLocal_60, 0, 1);
					unk_0x5DAB197A499B8499(iLocal_60, iLocal_54[0], unk_0xC88C187E2120E0BE(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x654FFF4D16298AC5(iLocal_54[0]);
					unk_0x219EE6A7B599E7DC(&uLocal_65);
					unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), -1, 2048, 2);
					unk_0xF1C3427BFED79E6B(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
					unk_0xBD718C5BA2122192(uLocal_65);
					unk_0x234E551BB8E8813B(iLocal_54[0], uLocal_65);
					unk_0xEDD36C58DDE03C8F(&uLocal_65);
					unk_0x1776A639860985BF(iLocal_54[1], joaat("weapon_sawnoffshotgun"), 1);
					unk_0x654FFF4D16298AC5(iLocal_54[1]);
					unk_0x219EE6A7B599E7DC(&uLocal_65);
					unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), -1, 2048, 2);
					unk_0x17DD40170243F0AB(0, unk_0x2A5EB8B0FE590B91(), -1, fVar0, 1f, 1073741824, 0);
					unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
					unk_0xBD718C5BA2122192(uLocal_65);
					unk_0x234E551BB8E8813B(iLocal_54[1], uLocal_65);
					unk_0xEDD36C58DDE03C8F(&uLocal_65);
					iLocal_69 = 1;
				}
			}
		}
		if (unk_0x2137828D03306CAF(iLocal_60))
		{
			if (unk_0xED01C551E3A161C0(iLocal_60))
			{
				if (unk_0x453DB1DBE5D81637(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0xA806066ECDF61E23(iLocal_60, 1, 1);
					}
				}
			}
		}
		if (iLocal_69 && !iLocal_165)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0x219EE6A7B599E7DC(&uLocal_65);
				unk_0xF37957BD055DBCF9(0, unk_0x2A5EB8B0FE590B91(), unk_0x2A5EB8B0FE590B91(), 1f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xD6E739D9CC93B1C2(0, unk_0x2A5EB8B0FE590B91(), -1, 0);
				unk_0xBD718C5BA2122192(uLocal_65);
				unk_0x234E551BB8E8813B(iLocal_54[1], uLocal_65);
				unk_0xEDD36C58DDE03C8F(&uLocal_65);
				unk_0x988197573BDAD49A("RE6_START");
				iLocal_165 = 1;
			}
		}
		if (iLocal_165 && !iLocal_166)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xD6E739D9CC93B1C2(iLocal_54[0], unk_0x2A5EB8B0FE590B91(), -1, 0);
				}
				iLocal_166 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (iLocal_166 && !bLocal_167)
		{
			if (unk_0xC9D9444186B5A374() > 15000 && !func_12())
			{
				if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x88E3EDF9AF851486(iLocal_54[0], unk_0x2A5EB8B0FE590B91(), 0);
					unk_0x88E3EDF9AF851486(iLocal_54[1], unk_0x2A5EB8B0FE590B91(), 0);
					func_70(&uLocal_178, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_167 = true;
				}
			}
		}
		if (((!iLocal_70 && iLocal_165) && !unk_0x769F0F6444C1ABE0(iLocal_54[0])) && !unk_0x769F0F6444C1ABE0(iLocal_54[1]))
		{
			if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_109())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0x219EE6A7B599E7DC(&uLocal_65);
				unk_0x17DD40170243F0AB(0, iLocal_54[1], -1, 2f, 1f, 1073741824, 0);
				unk_0x88E3EDF9AF851486(0, iLocal_54[1], 0);
				unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0xBD718C5BA2122192(uLocal_65);
				unk_0x234E551BB8E8813B(iLocal_54[0], uLocal_65);
				unk_0xEDD36C58DDE03C8F(&uLocal_65);
				unk_0x219EE6A7B599E7DC(&uLocal_65);
				unk_0x17DD40170243F0AB(0, iLocal_54[0], -1, 2f, 1f, 1073741824, 0);
				unk_0x88E3EDF9AF851486(0, iLocal_54[0], 0);
				unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0xBD718C5BA2122192(uLocal_65);
				unk_0x234E551BB8E8813B(iLocal_54[1], uLocal_65);
				unk_0xEDD36C58DDE03C8F(&uLocal_65);
				unk_0x5AE11BC36633DE4E(15000);
				iLocal_145 = 0;
				iLocal_166 = 1;
				iLocal_70 = 1;
			}
		}
		if (bLocal_167)
		{
			func_11();
			func_112();
		}
		if (((unk_0x296AF7133305081C(iLocal_54[0], unk_0x2A5EB8B0FE590B91()) || unk_0x296AF7133305081C(iLocal_54[1], unk_0x2A5EB8B0FE590B91())) || unk_0xD7AC8A8028A7ECC8(unk_0x0FFED3E94261A832(), iLocal_54[0])) || unk_0xD7AC8A8028A7ECC8(unk_0x0FFED3E94261A832(), iLocal_54[1]))
		{
			if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 4) && !unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 3))
			{
				if (unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91()))
				{
					if (!iLocal_76)
					{
						func_104();
						unk_0x4EDE34FBADD967A6(0);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 3) && !unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 4))
			{
				if (unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91()))
				{
					if (!iLocal_76)
					{
						func_104();
						unk_0x4EDE34FBADD967A6(0);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()) || unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
			{
				func_112();
			}
		}
	}
}

int func_109()
{
	if (unk_0xAA4F14DA15DB0B51(unk_0x895FB9FE885E36ED(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_110(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	if (!unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Var3, iParam2);
}

int func_111()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0))
			{
				if ((((unk_0x3E7C8A20BD503C7A(unk_0x2A5EB8B0FE590B91(), joaat("rhino")) || unk_0xD50DF0CF7D16F6D9(unk_0x2A5EB8B0FE590B91())) || unk_0x3E7C8A20BD503C7A(unk_0x2A5EB8B0FE590B91(), joaat("annihilator"))) || unk_0x3E7C8A20BD503C7A(unk_0x2A5EB8B0FE590B91(), joaat("buzzard"))) || unk_0x7910B114D2285BA3(unk_0x2A5EB8B0FE590B91()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_112()
{
	func_11();
	unk_0x988197573BDAD49A("RE6_START");
	if (!iLocal_145)
	{
		if (unk_0x2137828D03306CAF(iLocal_54[0]))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]))
			{
				unk_0x3EFE40733EFB6649(iLocal_54[0], 156, 1);
				if (unk_0x2137828D03306CAF(iLocal_60))
				{
					unk_0x923CA4007FCCB6D3(iLocal_54[0]);
					if (unk_0xED01C551E3A161C0(iLocal_60))
					{
						if (!iLocal_70)
						{
							unk_0xA806066ECDF61E23(iLocal_60, 0, 1);
							unk_0x5DAB197A499B8499(iLocal_60, iLocal_54[0], unk_0xC88C187E2120E0BE(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0x654FFF4D16298AC5(iLocal_54[0]);
							unk_0x219EE6A7B599E7DC(&uLocal_65);
							unk_0xAF2C217E49954DFD(0);
							unk_0xF1C3427BFED79E6B(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0xDD0413EAB0ADDE6A(0, unk_0x2A5EB8B0FE590B91(), 0, 16);
							unk_0xBD718C5BA2122192(uLocal_65);
							unk_0x234E551BB8E8813B(iLocal_54[0], uLocal_65);
							unk_0xEDD36C58DDE03C8F(&uLocal_65);
							unk_0x015B50BC21C88C8C(iLocal_54[0], 1);
							unk_0xB1D181DBFC526F52(iLocal_54[0], 0, 0);
							iLocal_145 = 1;
						}
					}
					else
					{
						unk_0x219EE6A7B599E7DC(&uLocal_65);
						unk_0xAF2C217E49954DFD(0);
						unk_0xDD0413EAB0ADDE6A(0, unk_0x2A5EB8B0FE590B91(), 0, 16);
						unk_0xBD718C5BA2122192(uLocal_65);
						unk_0x234E551BB8E8813B(iLocal_54[0], uLocal_65);
						unk_0xEDD36C58DDE03C8F(&uLocal_65);
						unk_0x015B50BC21C88C8C(iLocal_54[0], 1);
						iLocal_145 = 1;
					}
				}
			}
			else
			{
				iLocal_145 = 1;
			}
		}
		else
		{
			iLocal_145 = 1;
		}
	}
	if (unk_0x2137828D03306CAF(iLocal_60))
	{
		if (unk_0xED01C551E3A161C0(iLocal_60))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]))
			{
				if (unk_0x453DB1DBE5D81637(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0xA806066ECDF61E23(iLocal_60, 1, 1);
					}
				}
			}
		}
	}
	if (!iLocal_146)
	{
		if (unk_0x2137828D03306CAF(iLocal_54[1]))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54[1]))
			{
				unk_0x3EFE40733EFB6649(iLocal_54[1], 156, 1);
				unk_0x923CA4007FCCB6D3(iLocal_54[1]);
				unk_0x219EE6A7B599E7DC(&uLocal_65);
				unk_0xAF2C217E49954DFD(0);
				unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 500);
				unk_0xDD0413EAB0ADDE6A(0, unk_0x2A5EB8B0FE590B91(), 0, 16);
				unk_0xBD718C5BA2122192(uLocal_65);
				unk_0x234E551BB8E8813B(iLocal_54[1], uLocal_65);
				unk_0xEDD36C58DDE03C8F(&uLocal_65);
				unk_0x015B50BC21C88C8C(iLocal_54[1], 1);
				iLocal_146 = 1;
			}
			else
			{
				iLocal_146 = 1;
			}
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	if (iLocal_146 && iLocal_145)
	{
		iLocal_106 = unk_0x3732B96D7A1859B4() + 8500;
		unk_0xC1B1E9A034A63A62(0);
		iLocal_49 = 7;
	}
}

int func_113(int iParam0)
{
	if (func_116())
	{
		Global_103226 = 1;
		Global_103223 = unk_0x3732B96D7A1859B4();
		if (func_25(Global_103225))
		{
			func_114(0);
		}
		unk_0x016711C6F4D08FCE(1, "RE_TITLE");
		if (iParam0 && func_25(Global_103225))
		{
			unk_0x847E5C2DF89423C1();
		}
		return 1;
	}
	return 0;
}

void func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_103236.f_24776.f_2 < 3)
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_89(func_115(iParam0), -1);
					Global_103236.f_24776.f_2++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 1))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_89(func_115(iParam0), -1);
					Global_103236.f_24776.f_3++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 2))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_89(func_115(iParam0), -1);
					Global_103236.f_24776.f_4++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 2);
				}
			}
			break;
	}
}

char* func_115(int iParam0)
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

int func_116()
{
	switch (func_117(&Global_25281, 0, 5, 0, unk_0xFF09208EC90C94CB()))
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

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89400.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_121(0))
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		unk_0x1EF72C87138AD63D(unk_0x8A41C463063AFC8E(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6A11DD53643C828(8);
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
		if (!func_119(iParam2))
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
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)
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

bool func_119(int iParam0)
{
	return func_120(iParam0, Global_35813);
}

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()
{
	if (unk_0xBDD3EABACAB97D09(uLocal_163))
	{
		unk_0x789C84F1B8496AD0(&uLocal_163);
	}
	if (!unk_0xBDD3EABACAB97D09(uLocal_114))
	{
		if (!unk_0xA9A04898798AE9E6(iLocal_53, 0))
		{
			uLocal_114 = func_67(iLocal_53, 0, 145);
		}
	}
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		if (!unk_0xBDD3EABACAB97D09(uLocal_111[iLocal_64]))
		{
			if (!unk_0xA9A04898798AE9E6(iLocal_54[iLocal_64], 0))
			{
				uLocal_111[iLocal_64] = func_67(iLocal_54[iLocal_64], 1, 145);
			}
		}
		iLocal_64++;
	}
}

void func_123()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0x3732B96D7A1859B4())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0x3732B96D7A1859B4())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0x3732B96D7A1859B4())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0x3732B96D7A1859B4())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(4500, 6500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_124()
{
	switch (iLocal_110)
	{
		case 0:
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_110++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 4:
			iLocal_106 = unk_0x3732B96D7A1859B4() + 3000;
			iLocal_110++;
			break;
		
		case 5:
			break;
	}
}

void func_125()
{
	if (unk_0x2137828D03306CAF(iLocal_60))
	{
		if (unk_0xED01C551E3A161C0(iLocal_60))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]))
			{
				if (unk_0x453DB1DBE5D81637(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial_stop") > 0.124f && unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0xA60596C647F340CC("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0x453DB1DBE5D81637(iLocal_54[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") > 0.04f && unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") < 0.043f) || (unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") > 0.24f && unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") < 0.243f)) || (unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") > 0.44f && unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") < 0.443f)) || (unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") > 0.64f && unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") < 0.643f)) || (unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") > 0.84f && unk_0x1E479544F884CFB5(iLocal_54[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0xA60596C647F340CC("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_126()
{
	if (!iLocal_129)
	{
		if (unk_0xD42AA0CF76AFB4D8(Local_88, 100f, 1) || unk_0xD42AA0CF76AFB4D8(Local_88, 100f, 1))
		{
			if (unk_0x769F0F6444C1ABE0(iLocal_54[0]) || unk_0x769F0F6444C1ABE0(iLocal_54[1]))
			{
				iLocal_51 = 1;
				return 1;
			}
			else if (!unk_0xD42AA0CF76AFB4D8(Local_88, 100f, 1) || !unk_0xD42AA0CF76AFB4D8(Local_88, 100f, 1))
			{
				iLocal_51 = 1;
				return 1;
			}
		}
		if (((((((((unk_0xA52E092886EFF9D2(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0xA52E092886EFF9D2(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0xA52E092886EFF9D2(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0xA52E092886EFF9D2(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0xA52E092886EFF9D2(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0xA52E092886EFF9D2(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0xA52E092886EFF9D2(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0x6D554E257ADAFBBF(2, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0x6D554E257ADAFBBF(4, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0x6D554E257ADAFBBF(0, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f)))
		{
			iLocal_51 = 1;
			return 1;
		}
		if (unk_0x2137828D03306CAF(iLocal_58))
		{
			if (!unk_0xA9A04898798AE9E6(iLocal_58, 0))
			{
				if (unk_0xE8594BE97055E9A1(iLocal_58, unk_0x2A5EB8B0FE590B91(), 1) || unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_58, 0))
				{
					unk_0x869E3FDF7FDABA6A(iLocal_58);
					func_112();
					iLocal_51 = 3;
					return 1;
				}
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					if (unk_0x3E7C8A20BD503C7A(unk_0x2A5EB8B0FE590B91(), joaat("towtruck")) || unk_0x3E7C8A20BD503C7A(unk_0x2A5EB8B0FE590B91(), joaat("towtruck2")))
					{
						if (unk_0x07FD82987E8F3A91(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), iLocal_58))
						{
							func_112();
							iLocal_51 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_75)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]) && !unk_0x769F0F6444C1ABE0(iLocal_54[1]))
			{
				if ((((unk_0x296AF7133305081C(iLocal_54[0], unk_0x2A5EB8B0FE590B91()) || unk_0x296AF7133305081C(iLocal_54[1], unk_0x2A5EB8B0FE590B91())) || unk_0xD7AC8A8028A7ECC8(unk_0x0FFED3E94261A832(), iLocal_54[0])) || unk_0xD7AC8A8028A7ECC8(unk_0x0FFED3E94261A832(), iLocal_54[1])) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0, 1, 0))
				{
					if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_88 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0, 1, 0))
					{
						iLocal_51 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54[0]) && !unk_0x769F0F6444C1ABE0(iLocal_54[1]))
			{
				if (!unk_0xA9A04898798AE9E6(unk_0x19D9DFABC3C7D219(), 0))
				{
					if (unk_0xB588E9EC60290D87(unk_0x19D9DFABC3C7D219(), iLocal_54[0]) || unk_0xB588E9EC60290D87(unk_0x19D9DFABC3C7D219(), iLocal_54[1]))
					{
						iLocal_51 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			if (unk_0xE8594BE97055E9A1(iLocal_53, unk_0x2A5EB8B0FE590B91(), 0) || unk_0xE781FF266FA8648E(iLocal_53, joaat("weapon_stungun"), 0))
			{
				iLocal_51 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_51 = 4;
			return 1;
		}
		if (unk_0xA9A04898798AE9E6(iLocal_54[0], 0) || unk_0xA9A04898798AE9E6(iLocal_54[1], 0))
		{
			iLocal_51 = 6;
			return 1;
		}
		if (iLocal_75)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0xA9A04898798AE9E6(iParam0, 0) && !bParam4)
	{
		if (unk_0xC212BF73836863E3(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0xA9A04898798AE9E6(iParam0, 0) && !bParam4)
		{
			Var3 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			Var6 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0xAA4F14DA15DB0B51(iParam3, 3))
			{
				if (func_133(iParam0, iParam6))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xD42AA0CF76AFB4D8(Var6, fParam5, 1))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
				if (unk_0x05A9C36EF40B6941(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iParam3, 2))
			{
				fVar0 = unk_0xDFEB40F63EF94D71(unk_0x2A5EB8B0FE590B91());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))
				{
					if (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iParam0) || unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0x2FF6D1D6A0790F5A(iParam0, unk_0x2A5EB8B0FE590B91(), 17))
							{
								func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_132("	aggro Ped knows player is pointing gun\n");
								func_128("		lockOnTimer = ", *uParam2);
								func_132("\n");
								func_128("		time since not LockedOn = ", (unk_0x3732B96D7A1859B4() - iLocal_19));
								func_132("\n");
								bVar2 = true;
								if (unk_0x3732B96D7A1859B4() > (iLocal_19 + *uParam2))
								{
									func_132("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_131(iParam0);
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
			if (!unk_0xAA4F14DA15DB0B51(iParam3, 0))
			{
				if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_131(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0x3732B96D7A1859B4();
	}
	return 0;
}

void func_128(char* sParam0, int iParam1)
{
	func_130(sParam0);
	func_129(iParam1);
}

void func_129(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_130(char* sParam0)
{
	if (unk_0x35302CD5A5D37EED(uParam0, uParam0))
	{
	}
}

void func_131(int iParam0)
{
	unk_0x0308BFFF4E651039(iParam0);
}

void func_132(char* sParam0)
{
	func_130(sParam0);
}

int func_133(int iParam0, int iParam1)
{
	if (unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xE8594BE97055E9A1(iParam0, unk_0x2A5EB8B0FE590B91(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xE8594BE97055E9A1(iParam0, unk_0x2A5EB8B0FE590B91(), 1))
	{
		if ((unk_0xADC57D202AF0BDF7(iParam0) - unk_0xE86A53C202B21FAB(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_134()
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_136(39, 1);
	func_136(40, 1);
	func_136(41, 1);
	func_136(42, 1);
	func_136(43, 1);
	func_136(44, 1);
	unk_0x25118499AB6F447B(Local_139 - Vector(20f, 40f, 40f), Local_139 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0x25118499AB6F447B(Local_78 - Vector(20f, 50f, 60f), Local_78 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0x02E663D7DDAE8202(iLocal_105, 1);
	unk_0xBAD89C59C9871295(5, 0);
	unk_0xBAD89C59C9871295(3, 0);
	unk_0xFBC4596E19752537(0f);
	iLocal_53 = unk_0xD00B79C0E206E082(26, iLocal_102, Local_78, fLocal_97, 1, 1);
	unk_0x4C47904AE69D7393(iLocal_53, 1);
	unk_0x2725C3746060DA66(iLocal_53, 0);
	unk_0xAE833788DEAB23CA(iLocal_53, 2, 0);
	unk_0xAE833788DEAB23CA(iLocal_53, 128, 1);
	unk_0x89AEA58335779997(iLocal_53, 1, 0);
	unk_0x89AEA58335779997(iLocal_53, 6, 0);
	unk_0x31AC59B7C21A2047(iLocal_53, 206, 1);
	unk_0x31AC59B7C21A2047(iLocal_53, 318, 0);
	unk_0x31AC59B7C21A2047(iLocal_53, 118, 0);
	unk_0x31AC59B7C21A2047(iLocal_53, 208, 1);
	unk_0xFD213087BC4CC3B3(iLocal_102);
	unk_0x67E5DE1657F60AC6(iLocal_53, iLocal_125);
	unk_0x876D35DC1850E7FC(unk_0x2A5EB8B0FE590B91(), 0);
	unk_0xEE8231F61ED038B0("rghKidnappers", &iLocal_176);
	unk_0xEE8231F61ED038B0("rghVictim", &iLocal_177);
	unk_0x3C030E241A3543D2(iLocal_53, iLocal_177);
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		iLocal_54[iLocal_64] = unk_0xD00B79C0E206E082(26, iLocal_103, Local_81[iLocal_64 /*3*/], fLocal_98[iLocal_64], 1, 1);
		unk_0x4C47904AE69D7393(iLocal_54[iLocal_64], 1);
		unk_0x0E9E5456339F425B(iLocal_54[iLocal_64], 1);
		unk_0x89AEA58335779997(iLocal_54[iLocal_64], 0, 1);
		unk_0xAE833788DEAB23CA(iLocal_54[iLocal_64], 2, 0);
		unk_0xAE833788DEAB23CA(iLocal_54[iLocal_64], 128, 1);
		unk_0x31AC59B7C21A2047(iLocal_54[iLocal_64], 42, 1);
		unk_0xB5AEEE6CCF634ECA(iLocal_54[0], 2);
		unk_0x89AEA58335779997(iLocal_54[0], 50, 1);
		unk_0x83153769EA6DF5B2(iLocal_54[iLocal_64], 50);
		unk_0x176253610C53F0E0(iLocal_54[iLocal_64], 13);
		unk_0xD44F61F61676BA14(iLocal_54[iLocal_64], 1);
		unk_0x3C030E241A3543D2(iLocal_54[iLocal_64], iLocal_176);
		unk_0x88D9DF53359130B9(iLocal_54[iLocal_64], unk_0x895FB9FE885E36ED(800, 2000));
		iLocal_64++;
	}
	unk_0xFD213087BC4CC3B3(iLocal_104);
	unk_0xFD213087BC4CC3B3(iLocal_103);
	unk_0x83153769EA6DF5B2(iLocal_54[1], 100);
	unk_0x1CDF2A367CBA85B4(iLocal_54[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	unk_0x3A8EFBE4AB457FE2(5, iLocal_176, joaat("player"));
	unk_0x0013D519C885E60B(iLocal_54[0], joaat("weapon_pistol"), -1, 0, 1);
	unk_0x0013D519C885E60B(iLocal_54[1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
	iLocal_58 = unk_0xE42A511281C9895B(iLocal_105, Local_88, fLocal_101, 1, 1, 0);
	unk_0x07C140F31B3CDAFA(iLocal_58, 1084227584);
	unk_0x8916BD2C5463CBEE(iLocal_58, 3);
	unk_0xE90B4C21E7E6817C(iLocal_58, 5, 0, 0);
	unk_0xFD213087BC4CC3B3(iLocal_105);
	iLocal_60 = unk_0xA3618B5F6184DAD2(joaat("prop_ld_shovel"), Local_107, 1, 1, 0);
	unk_0xFD213087BC4CC3B3(joaat("prop_ld_shovel"));
	uLocal_61[0] = unk_0xA3618B5F6184DAD2(joaat("p_arm_bind_cut_s"), Local_107, 1, 1, 0);
	uLocal_61[1] = unk_0xA3618B5F6184DAD2(joaat("p_arm_bind_cut_s"), Local_107 + Vector(1f, 1f, 1f), 1, 1, 0);
	unk_0x0F39DF6675B2333E(joaat("p_arm_bind_cut_s"));
	unk_0x5DAB197A499B8499(iLocal_60, iLocal_54[0], unk_0xC88C187E2120E0BE(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x6CA29A70250F194F(iLocal_54[0], 0, 0, 0, 0);
	unk_0x6CA29A70250F194F(iLocal_54[0], 3, 0, 1, 0);
	unk_0x6CA29A70250F194F(iLocal_54[0], 4, 1, 0, 0);
	unk_0x6CA29A70250F194F(iLocal_54[1], 0, 0, 2, 0);
	unk_0x6CA29A70250F194F(iLocal_54[1], 3, 2, 1, 0);
	unk_0x6CA29A70250F194F(iLocal_54[1], 4, 1, 1, 0);
	Var0 = { Local_78 };
	Var3 = { -2f, -4f, 18f };
	uLocal_343 = unk_0x6D46C949A32B8D73(Var0, Var3, 2);
	unk_0x5F778B8D6D7DF47B(iLocal_53, uLocal_343, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0xA5537C55BC0E41FD(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xA5537C55BC0E41FD(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xA2218E1CAB0028A5(uLocal_343, 1);
	unk_0x015B50BC21C88C8C(iLocal_53, 1);
	unk_0xF1C3427BFED79E6B(iLocal_54[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xF1C3427BFED79E6B(iLocal_54[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xCBDFFC5EA9E60A9D(iLocal_54[0], Local_91, Local_94, 2.75f, 0, 0);
	unk_0xCBDFFC5EA9E60A9D(iLocal_54[1], Local_91, Local_94, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_135(&uLocal_178, 0, unk_0x2A5EB8B0FE590B91(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_135(&uLocal_178, 1, unk_0x2A5EB8B0FE590B91(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_135(&uLocal_178, 2, unk_0x2A5EB8B0FE590B91(), "TREVOR", 0, 1);
	}
	unk_0x28AB07F44A348EFC(iLocal_54[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x28AB07F44A348EFC(iLocal_54[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x28AB07F44A348EFC(iLocal_53, "KIDNAPPEDFEMALE");
	func_135(&uLocal_178, 4, iLocal_54[0], "KIDNAPPER2", 0, 1);
	func_135(&uLocal_178, 3, iLocal_54[1], "KIDNAPPER1", 0, 1);
	func_135(&uLocal_178, 5, iLocal_53, "KIDNAPPEDFEMALE", 0, 1);
}

void func_135(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

void func_136(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_143(iParam0, 2, 1))
		{
			func_142(iParam0, 2, 1);
		}
	}
	else if (func_143(iParam0, 2, 1))
	{
		func_137(iParam0, 2, 1);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x507FE690B1271947(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_20() == 0)
		{
			uVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0x507FE690B1271947(&uVar0, iParam1);
			func_138(func_141(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, iParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_139(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 823;
			break;
		
		case 1:
			return 824;
			break;
		
		case 2:
			return 825;
			break;
		
		case 3:
			return 826;
			break;
		
		case 4:
			return 827;
			break;
		
		case 5:
			return 828;
			break;
		
		case 6:
			return 829;
			break;
		
		case 7:
			return 830;
			break;
		
		case 8:
			return 831;
			break;
		
		case 9:
			return 832;
			break;
		
		case 10:
			return 833;
			break;
		
		case 11:
			return 834;
			break;
		
		case 12:
			return 835;
			break;
		
		case 13:
			return 836;
			break;
		
		case 14:
			return 837;
			break;
		
		case 15:
			return 839;
			break;
		
		case 16:
			return 840;
			break;
		
		case 17:
			return 841;
			break;
		
		case 18:
			return 842;
			break;
		
		case 19:
			return 843;
			break;
		
		case 20:
			return 844;
			break;
		
		case 21:
			return 845;
			break;
		
		case 22:
			return 846;
			break;
		
		case 23:
			return 847;
			break;
		
		case 24:
			return 848;
			break;
		
		case 25:
			return 849;
			break;
		
		case 26:
			return 850;
			break;
		
		case 27:
			return 851;
			break;
		
		case 28:
			return 852;
			break;
		
		case 29:
			return 853;
			break;
		
		case 30:
			return 854;
			break;
		
		case 31:
			return 855;
			break;
		
		case 32:
			return 856;
			break;
		
		case 33:
			return 857;
			break;
		
		case 34:
			return 858;
			break;
		
		case 35:
			return 859;
			break;
		
		case 36:
			return 860;
			break;
		
		case 37:
			return 861;
			break;
		
		case 38:
			return 862;
			break;
		
		case 39:
			return 863;
			break;
		
		case 40:
			return 867;
			break;
		
		case 41:
			return 868;
			break;
		
		case 42:
			return 869;
			break;
		
		case 43:
			return 870;
			break;
		
		case 44:
			return 6134;
			break;
		
		case 45:
			return 3783;
			break;
		
		case 46:
			return 5358;
			break;
		
		default:
			break;
	}
	return 6309;
}

void func_142(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF6082E2ADA1C795B(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_20() == 0)
		{
			uVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0xF6082E2ADA1C795B(&uVar0, iParam1);
			func_138(func_141(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[iParam0], iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_20() == 0)
		{
			return unk_0xAA4F14DA15DB0B51(func_140(func_141(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_144()
{
	var uVar0;
	int iVar1;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		uVar0 = unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91());
		if (unk_0x7FAC45D56235AB39(uVar0, 0))
		{
			iVar1 = unk_0x8F8E5C33266ED978(iVar0, 0, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar1))
			{
				if (iVar1 != unk_0x2A5EB8B0FE590B91())
				{
					if (unk_0x03322C3918511AA0(iVar1))
					{
						if (!unk_0xD175293EF7878334(iVar1, unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xEDF42871EAD55C9B(iVar1, unk_0x2A5EB8B0FE590B91(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_145()
{
	unk_0x0F39DF6675B2333E(iLocal_102);
	unk_0x0F39DF6675B2333E(iLocal_104);
	unk_0x0F39DF6675B2333E(iLocal_103);
	unk_0x0F39DF6675B2333E(iLocal_105);
	unk_0x0F39DF6675B2333E(joaat("prop_ld_shovel"));
	unk_0x0F39DF6675B2333E(joaat("p_arm_bind_cut_s"));
	unk_0xA7C81DED990D3418("random@burial");
	unk_0x926AB8F66F783F4D();
	unk_0x741298E7009A20C9("ROPE_CUT", 0, -1);
	unk_0x8CF1128C350F1552("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0xA1FC9D7AEA164881(iLocal_102) && unk_0xA1FC9D7AEA164881(iLocal_104)) && unk_0xA1FC9D7AEA164881(iLocal_103)) && unk_0xA1FC9D7AEA164881(iLocal_105)) && unk_0xA1FC9D7AEA164881(joaat("prop_ld_shovel"))) && unk_0xA1FC9D7AEA164881(joaat("p_arm_bind_cut_s"))) && unk_0x45834D6C20FFF689("random@burial")) && unk_0x1135D5BD86A70AD2()) && unk_0x741298E7009A20C9("ROPE_CUT", 0, -1)) && unk_0x8CF1128C350F1552("RE6_BOTH_DEAD_OS"))
	{
		bLocal_52 = true;
	}
	else
	{
		unk_0x0F39DF6675B2333E(iLocal_102);
		unk_0x0F39DF6675B2333E(iLocal_104);
		unk_0x0F39DF6675B2333E(iLocal_103);
		unk_0x0F39DF6675B2333E(iLocal_105);
		unk_0x0F39DF6675B2333E(joaat("prop_ld_shovel"));
		unk_0x0F39DF6675B2333E(joaat("p_arm_bind_cut_s"));
		unk_0xA7C81DED990D3418("random@burial");
		unk_0x926AB8F66F783F4D();
		unk_0x741298E7009A20C9("ROPE_CUT", 0, -1);
		unk_0x8CF1128C350F1552("RE6_BOTH_DEAD_OS");
	}
}

void func_146()
{
	iLocal_102 = joaat("u_f_y_mistress");
	iLocal_103 = joaat("a_m_m_salton_01");
	iLocal_104 = joaat("a_m_m_salton_01");
	iLocal_105 = joaat("bison");
	Local_78 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_97 = 0f;
	Local_81[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_98[0] = 297.0056f;
	Local_81[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_98[1] = 193.3866f;
	Local_88 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_101 = 265.6862f;
	Local_91 = { 164.0896f, 6836.923f, 19.03899f };
	Local_94 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_66 = 1;
}

int func_147()
{
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_154())
	{
		return 1;
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_148(float fParam0, bool bParam1)
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
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (func_33(func_44()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 2) && !unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 3))
				{
					func_149(iVar32, &Var0);
					fVar35 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var0.f_6, 1);
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

void func_149(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_150(uParam1, "Abigail1", func_152(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 1:
			func_150(uParam1, "Abigail2", func_152(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 2:
			func_150(uParam1, "Barry1", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 3:
			func_150(uParam1, "Barry2", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 4:
			func_150(uParam1, "Barry3", func_152(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 5:
			func_150(uParam1, "Barry3A", func_152(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 6:
			func_150(uParam1, "Barry3C", func_152(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 7:
			func_150(uParam1, "Barry4", func_152(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_151(iParam0), 0, 0);
			break;
		
		case 8:
			func_150(uParam1, "Dreyfuss1", func_152(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 9:
			func_150(uParam1, "Epsilon1", func_152(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 10:
			func_150(uParam1, "Epsilon2", func_152(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 11:
			func_150(uParam1, "Epsilon3", func_152(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 12:
			func_150(uParam1, "Epsilon4", func_152(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 13:
			func_150(uParam1, "Epsilon5", func_152(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 14:
			func_150(uParam1, "Epsilon6", func_152(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 15:
			func_150(uParam1, "Epsilon7", func_152(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 16:
			func_150(uParam1, "Epsilon8", func_152(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 17:
			func_150(uParam1, "Extreme1", func_152(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 18:
			func_150(uParam1, "Extreme2", func_152(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 19:
			func_150(uParam1, "Extreme3", func_152(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 20:
			func_150(uParam1, "Extreme4", func_152(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 21:
			func_150(uParam1, "Fanatic1", func_152(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 22:
			func_150(uParam1, "Fanatic2", func_152(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 23:
			func_150(uParam1, "Fanatic3", func_152(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_151(iParam0), 0, 1);
			break;
		
		case 24:
			func_150(uParam1, "Hao1", func_152(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_151(iParam0), 0, 1);
			break;
		
		case 25:
			func_150(uParam1, "Hunting1", func_152(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 26:
			func_150(uParam1, "Hunting2", func_152(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 27:
			func_150(uParam1, "Josh1", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 28:
			func_150(uParam1, "Josh2", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 29:
			func_150(uParam1, "Josh3", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 30:
			func_150(uParam1, "Josh4", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 31:
			func_150(uParam1, "Maude1", func_152(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 32:
			func_150(uParam1, "Minute1", func_152(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 33:
			func_150(uParam1, "Minute2", func_152(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 34:
			func_150(uParam1, "Minute3", func_152(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 35:
			func_150(uParam1, "MrsPhilips1", func_152(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 36:
			func_150(uParam1, "MrsPhilips2", func_152(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 37:
			func_150(uParam1, "Nigel1", func_152(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 38:
			func_150(uParam1, "Nigel1A", func_152(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 39:
			func_150(uParam1, "Nigel1B", func_152(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 40:
			func_150(uParam1, "Nigel1C", func_152(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 41:
			func_150(uParam1, "Nigel1D", func_152(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 42:
			func_150(uParam1, "Nigel2", func_152(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 43:
			func_150(uParam1, "Nigel3", func_152(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 44:
			func_150(uParam1, "Omega1", func_152(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 45:
			func_150(uParam1, "Omega2", func_152(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 46:
			func_150(uParam1, "Paparazzo1", func_152(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 47:
			func_150(uParam1, "Paparazzo2", func_152(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 48:
			func_150(uParam1, "Paparazzo3", func_152(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 49:
			func_150(uParam1, "Paparazzo3A", func_152(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 50:
			func_150(uParam1, "Paparazzo3B", func_152(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 51:
			func_150(uParam1, "Paparazzo4", func_152(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 52:
			func_150(uParam1, "Rampage1", func_152(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 54:
			func_150(uParam1, "Rampage3", func_152(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 55:
			func_150(uParam1, "Rampage4", func_152(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 56:
			func_150(uParam1, "Rampage5", func_152(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 53:
			func_150(uParam1, "Rampage2", func_152(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 57:
			func_150(uParam1, "TheLastOne", func_152(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 58:
			func_150(uParam1, "Tonya1", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 59:
			func_150(uParam1, "Tonya2", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 60:
			func_150(uParam1, "Tonya3", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 61:
			func_150(uParam1, "Tonya4", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 62:
			func_150(uParam1, "Tonya5", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_150(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_151(int iParam0)
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

struct<2> func_152(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_153(iParam0) };
	if (unk_0x58478145CAF8429C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_153(int iParam0)
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

int func_154()
{
	if (func_157() && !func_158())
	{
		return 1;
	}
	if (func_156() && func_155())
	{
		return 1;
	}
	return 0;
}

bool func_155()
{
	return Global_102954 > 0;
}

int func_156()
{
	if (Global_88844 != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 20);
	}
	return 0;
}

int func_158()
{
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0x693458AABD7F18D7() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_159()
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	if ((Global_103225 == func_39() && unk_0x0EF1484C8ECA32F8()) && Global_103226)
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_163(iParam0);
	unk_0x2D47D0FBCE479E9D(0);
	unk_0x0A397D1B8C0E7CF0(1);
	Global_103222 = 0;
	func_162();
}

void func_162()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			unk_0x02E663D7DDAE8202(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)), 1);
		}
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 0);
	}
}

void func_163(int iParam0)
{
	Global_103225 = iParam0;
}

int func_164(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_141282)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_39();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_205())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_158())
			{
				return 0;
			}
		}
		if (!Global_103236.f_8866)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_154())
		{
			return 0;
		}
		if (func_204())
		{
			return 0;
		}
		if (Global_103225 != -1)
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_148(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_203(iParam3))
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_202(func_44()) == 4 || func_202(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_201(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_200(Global_103236.f_24776.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3732B96D7A1859B4() - Global_103227) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_199())
		{
			return 0;
		}
		if (unk_0xB2F8D1B7C533483C())
		{
			return 0;
		}
		if (unk_0x0EF1484C8ECA32F8())
		{
			return 0;
		}
		if (!func_190(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_189(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xA419466089F321B4(unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91())))
		{
			if ((unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(377.153f, -717.567f, 10.0536f) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(320.9934f, 265.2515f, 82.1221f)) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_189(0, 0))
		{
			return 0;
		}
		if (Global_25368)
		{
			return 0;
		}
		if (func_203(30) && !func_189(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_44()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_103236.f_2164.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_103236.f_2164.f_539.f_2276[iVar4];
				if (func_188(iVar8))
				{
					if (func_166(iVar4))
					{
						if (!func_165(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var5) < (210f * 210f))
							{
								if (func_44() != iVar4)
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

bool func_165(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_103236.f_2164.f_539.f_2276[iParam0];
	return func_167(iVar0);
}

int func_167(int iParam0)
{
	return func_168(iParam0, 1);
}

int func_168(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_188(iParam0))
	{
		return 0;
	}
	func_169(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_170(func_181(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_170(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179(iParam1);
		iVar1 = func_177(iParam0);
		iVar2 = (func_177(iParam0) - func_177(iParam1));
		iVar3 = (func_179(iParam0) - func_179(iParam1));
		iVar4 = (func_176(iParam0) - func_176(iParam1));
		iVar5 = (func_175(iParam0) - func_175(iParam1));
		iVar6 = (func_174(iParam0) - func_174(iParam1));
		iVar7 = (func_173(iParam0) - func_173(iParam1));
	}
	else
	{
		iVar0 = func_179(iParam0);
		iVar1 = func_177(iParam1);
		iVar2 = (func_177(iParam1) - func_177(iParam0));
		iVar3 = (func_179(iParam1) - func_179(iParam0));
		iVar4 = (func_176(iParam1) - func_176(iParam0));
		iVar5 = (func_175(iParam1) - func_175(iParam0));
		iVar6 = (func_174(iParam1) - func_174(iParam0));
		iVar7 = (func_173(iParam1) - func_173(iParam0));
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
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_171(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_171(float fParam0, float fParam1, float fParam2)
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

int func_172(int iParam0, int iParam1)
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

int func_173(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_174(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_175(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_176(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_177(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_178(unk_0xAA4F14DA15DB0B51(iParam0, 31), -1, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(int iParam0)
{
	return iParam0 & 15;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam1) || !func_188(iParam0))
	{
		return 1;
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
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_181()
{
	var uVar0;
	
	func_187(&uVar0, unk_0xD887411BD4A4A92D());
	func_186(&uVar0, unk_0xA4EAAF8247A3A69E());
	func_185(&uVar0, unk_0xDA870B7547A455EA());
	func_184(&uVar0, unk_0x56E76B9CA4BBAA18());
	func_183(&uVar0, unk_0x0FD588FC21950895());
	func_182(&uVar0, unk_0x15C180E135C728D1());
	return uVar0;
}

void func_182(var uParam0, int iParam1)
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

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_186(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_187(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_188(int iParam0)
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
	iVar0 = func_173(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_174(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_175(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_177(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_176(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, int iParam1)
{
	if (unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				iVar0 = func_44();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_198()) || Global_102283) || Global_25224) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_194()) || func_193()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1) || func_198()) || Global_25224) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_198()) || Global_102283) || Global_25224) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_103236.f_7469.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_198()) || Global_102283) || Global_25224) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_193()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_198() || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || func_78(8, -1)) || func_193()) || func_192()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_196()) || func_195()) || func_192()) || func_191())
						{
							return 0;
						}
						if ((unk_0x0AFBA1AD6DC1C540() && unk_0xD7037D74D866BD7D() != 3) && unk_0xE858C2EA240D3C68() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
						{
							if ((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_198()) || Global_25224) || func_197()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || Global_103236.f_7469.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || func_198()) || func_195()) || Global_102283) || Global_25224) || func_197()) || Global_36944) || func_78(8, -1)) || func_194()) || func_192()) || func_193()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_198()) || Global_102283) || Global_25224) || func_197()) || func_78(8, -1)) || func_194()) || func_192()) || func_196()) || func_195()) || func_193())
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

var func_191()
{
	return Global_91816.f_1;
}

int func_192()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 13);
	}
	return 0;
}

int func_193()
{
	if (unk_0x09952BA662A7629B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (Global_70060)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

bool func_195()
{
	return Global_91829.f_310 > 0;
}

bool func_196()
{
	return Global_91829.f_309 > 0;
}

var func_197()
{
	return Global_1312852;
}

int func_198()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
	}
	return 0;
}

int func_199()
{
	func_76();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)
{
	return func_180(func_181(), iParam0);
}

int func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_44();
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

int func_202(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_103236.f_7469.f_919[iParam0];
}

bool func_203(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_205())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_1, iVar0);
	}
	return bVar1;
}

int func_204()
{
	var uVar0;
	
	if (Global_25372)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x7FAC45D56235AB39(uVar0, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x8F8E5C33266ED978(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_205()
{
	var uVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					iVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&iVar0, 0);
					unk_0x01D51AAE02B320BA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_206()
{
	int iVar0;
	
	if (iLocal_162)
	{
		func_219(0);
		unk_0xF185F03C5796A4F6();
		unk_0x15AFDA4756FDF7EC("RE6_BOTH_DEAD_OS");
		if (iLocal_145 || iLocal_165)
		{
			if (Global_25460)
			{
				unk_0x988197573BDAD49A("AC_STOP");
			}
			else
			{
				unk_0x988197573BDAD49A("RE6_END");
			}
		}
		func_218();
		unk_0x3A8EFBE4AB457FE2(255, iLocal_177, joaat("player"));
		unk_0x3A8EFBE4AB457FE2(255, joaat("player"), iLocal_177);
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_53))
			{
				unk_0x31AC59B7C21A2047(iLocal_53, 317, 1);
				if (!unk_0xC4A39E4229BD3ABE(iLocal_53, 0))
				{
					unk_0x961A5568C1B2C2CD(iLocal_53);
				}
				if (unk_0xAB603D6FBED0F015(iLocal_53))
				{
					unk_0x799D2CB4039F4804(iLocal_53);
				}
				unk_0x4C47904AE69D7393(iLocal_53, 0);
				unk_0x2725C3746060DA66(iLocal_53, 1);
			}
			else if (!unk_0xA9A04898798AE9E6(iLocal_53, 0))
			{
				unk_0x67727DD908D0A5D5(iLocal_53, 1);
				unk_0xE1369C79B22BAF97(iLocal_53, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_54)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54[iVar0]) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x923CA4007FCCB6D3(iLocal_54[iVar0]);
				if (iLocal_69 || iLocal_76)
				{
					unk_0xDD0413EAB0ADDE6A(iLocal_54[iVar0], unk_0x2A5EB8B0FE590B91(), 0, 16);
				}
				else
				{
					unk_0xCD6FB688ED8B6284(iLocal_54[iVar0], unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 0);
					func_104();
				}
				unk_0x015B50BC21C88C8C(iLocal_54[iVar0], 1);
			}
			iVar0++;
		}
		unk_0xBE35B7268C680A20(&(uLocal_61[0]));
		unk_0xBE35B7268C680A20(&(uLocal_61[1]));
		if (unk_0x2137828D03306CAF(iLocal_58))
		{
			unk_0xFECCD8AF38671477(&iLocal_58);
		}
		if (unk_0x2137828D03306CAF(iLocal_60))
		{
			if (unk_0xED01C551E3A161C0(iLocal_60))
			{
				unk_0xA806066ECDF61E23(iLocal_60, 1, 1);
			}
			unk_0x0EE36F9D946F47F2(&iLocal_60);
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_163))
		{
			unk_0x789C84F1B8496AD0(&uLocal_163);
		}
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_111[iLocal_64]))
			{
				unk_0x789C84F1B8496AD0(&(uLocal_111[iLocal_64]));
			}
			iLocal_64++;
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_114))
		{
			unk_0x789C84F1B8496AD0(&uLocal_114);
		}
		if (unk_0x9FA769EB6C3BCCE4(uLocal_77))
		{
			unk_0x1E2E6AAAD9AE1286(uLocal_77, 0);
		}
		unk_0xBAD89C59C9871295(5, 1);
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xFBC4596E19752537(1f);
		unk_0x20A9229D8F4F054A(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 1, 1);
	}
	func_207(-1);
	unk_0xA232817B0B36F2E5();
}

void func_207(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_160())
	{
		func_211(iParam0);
		unk_0x016711C6F4D08FCE(0, 0);
		Global_103227 = unk_0x3732B96D7A1859B4();
		func_210(30000);
		StringCopy(&cVar0, func_209(Global_103225, 1), 64);
		if (func_38(Global_103225) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_103224, 64);
		}
		unk_0xFB2DC910C33320E0(&cVar0, Global_103222, (unk_0x3732B96D7A1859B4() - Global_103223), 0);
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_103232, 0) && Global_103236.f_24776.f_2 < 3)
	{
		unk_0x507FE690B1271947(&Global_103232, 0);
	}
	func_208(&Global_25281);
	Global_103226 = 0;
	func_163(-1);
}

void func_208(var uParam0)
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

char* func_209(int iParam0, bool bParam1)
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

void func_210(int iParam0)
{
	Global_36364 = (unk_0x3732B96D7A1859B4() + iParam0);
}

void func_211(int iParam0)
{
	func_212(iParam0, 0, func_217(iParam0));
}

void func_212(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_181();
	func_215(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_214(iParam0, &uVar0);
	Var1 = { func_213(&uVar0) };
}

struct<16> func_213(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_175(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_174(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_176(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_179(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_177(*uParam0), 64);
	return Var0;
}

void func_214(int iParam0, var uParam1)
{
	Global_103236.f_24776.f_43[iParam0] = *uParam1;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_179(*uParam0);
	iVar2 = func_176(*uParam0);
	iVar3 = func_175(*uParam0);
	iVar4 = func_174(*uParam0);
	iVar5 = func_173(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_216(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_187(uParam0, iParam1);
	func_186(uParam0, iParam2);
	func_185(uParam0, iParam3);
	func_183(uParam0, iParam5);
	func_184(uParam0, iParam4);
	func_182(uParam0, iParam6);
}

int func_217(int iParam0)
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

void func_218()
{
	Global_25456 = 0;
	Global_25457 = 0;
	Global_25459 = 0;
	Global_25460 = 0;
	Global_25461 = 0;
}

void func_219(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 47)
	{
		func_136(iVar0, bParam0);
		iVar0++;
	}
}

