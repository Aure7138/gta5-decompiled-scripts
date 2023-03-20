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
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[2] = { 0, 0 };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60[2] = { 0, 0 };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80[2];
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	float fLocal_97[2] = { 0f, 0f };
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	int iLocal_109 = 0;
	var uLocal_110[2] = { 0, 0 };
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	struct<3> Local_138 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	struct<6> Local_149 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_155 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	bool bLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	var uLocal_177 = 16;
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
	iLocal_17 = 3;
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
	fLocal_46 = -1f;
	Local_106 = { 154.92f, 6841.12f, 19.14f };
	iLocal_124 = 200;
	Local_138 = { -1161.199f, 934.5912f, 196.7591f };
	Local_141 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_149, "", 24);
	if (unk_0x7547D7CF93115D6D(11))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
		{
			if (unk_0xBE55B130951EF5CA(iLocal_52))
			{
				unk_0xA2A854DDCAB3A06F(iLocal_52);
			}
		}
		func_205();
	}
	if (func_163(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_160(-1);
	}
	else
	{
		unk_0x883793591E631A3B();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x3BCCCFB165E15A65() || iLocal_130)
		{
			if (!func_159())
			{
				if (func_158())
				{
					func_205();
				}
			}
			unk_0xC0B91B09CAEBF5AE("RE_BU", 0);
			switch (iLocal_47)
			{
				case 0:
					if (func_146())
					{
						func_205();
					}
					if (!iLocal_65)
					{
						func_145();
					}
					else
					{
						func_144();
					}
					if (bLocal_51)
					{
						iLocal_161 = 1;
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
					{
						func_143();
						switch (iLocal_48)
						{
							case 0:
								func_133();
								iLocal_48 = 1;
								break;
							
							case 1:
								if ((!func_126(iLocal_53[0], &iLocal_127, &uLocal_126, iLocal_125, iLocal_128, 7f, 0) && !func_126(iLocal_53[1], &iLocal_127, &uLocal_126, iLocal_125, iLocal_128, 7f, 0)) && !func_125())
								{
									switch (iLocal_49)
									{
										case 0:
											func_124();
											if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_77, 50f, 35f, 50f, 0, 1, 0))
											{
												func_123();
											}
											if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_77, 80f, 65f, 50f, 0, 1, 0))
											{
												func_122();
											}
											if (!unk_0xE5D56342B0FF1D0D(iLocal_57))
											{
												if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_87 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0, 1, 0))
												{
													func_121();
													if (unk_0xD361727124133DF3(uLocal_113))
													{
														unk_0x847FC5384ABAF1A7(uLocal_113, 0);
													}
													iLocal_63 = 0;
													while (iLocal_63 <= 1)
													{
														if (unk_0xD361727124133DF3(uLocal_110[iLocal_63]))
														{
															unk_0x847FC5384ABAF1A7(uLocal_110[iLocal_63], 0);
														}
														iLocal_63++;
													}
													if (!func_159())
													{
														func_112(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_121();
									iLocal_48 = 2;
								}
								break;
							
							case 2:
								if ((func_126(iLocal_53[0], &iLocal_127, &uLocal_126, iLocal_125, iLocal_128, 7f, 0) || func_126(iLocal_53[1], &iLocal_127, &uLocal_126, iLocal_125, iLocal_128, 7f, 0)) || iLocal_128)
								{
									iLocal_128 = 1;
									if (!func_159())
									{
										func_112(1);
									}
									if (unk_0xD361727124133DF3(uLocal_113))
									{
										unk_0x847FC5384ABAF1A7(uLocal_113, 1);
									}
									iLocal_63 = 0;
									while (iLocal_63 <= 1)
									{
										if (unk_0xD361727124133DF3(uLocal_110[iLocal_63]))
										{
											unk_0x847FC5384ABAF1A7(uLocal_110[iLocal_63], 1);
										}
										iLocal_63++;
									}
									switch (iLocal_127)
									{
										case 0:
											func_111();
											break;
										
										case 1:
											func_111();
											break;
										
										case 2:
											func_111();
											break;
										
										case 3:
											func_111();
											break;
										
										case 4:
											func_111();
											break;
										
										case 5:
											func_111();
											break;
										}
								}
								if (func_125())
								{
									iLocal_74 = 1;
									if (unk_0xD361727124133DF3(uLocal_113))
									{
										unk_0x847FC5384ABAF1A7(uLocal_113, 1);
									}
									iLocal_63 = 0;
									while (iLocal_63 <= 1)
									{
										if (unk_0xD361727124133DF3(uLocal_110[iLocal_63]))
										{
											unk_0x847FC5384ABAF1A7(uLocal_110[iLocal_63], 1);
										}
										iLocal_63++;
									}
									if (!func_110())
									{
										switch (iLocal_50)
										{
											case 1:
												func_107();
												break;
											
											case 3:
												func_106();
												break;
											
											case 4:
												func_105();
												break;
											
											case 5:
												func_103();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
												{
													func_101(iLocal_53[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
												{
													func_101(iLocal_53[1], "GENERIC_WAR_CRY", 24);
												}
												func_111();
												break;
											
											case 6:
												func_103();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
												{
													func_101(iLocal_53[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
												{
													func_101(iLocal_53[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_111();
												break;
										}
									}
									else
									{
										func_103();
										unk_0x4EDE34FBADD967A6(0);
										iVar0 = 0;
										while (iVar0 < iLocal_53)
										{
											if (!unk_0x9F94F2CFDCA78C55(iLocal_53[iVar0]))
											{
												unk_0x6204CDD58E47662C(iLocal_53[iVar0], 5, 0, 0);
												unk_0xA859D289EEB2D72A(iLocal_53[iVar0], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
												unk_0xA1E4BA3B17C6D931(iLocal_53[iVar0], 1);
												if (unk_0xFD68187442384158(iLocal_59))
												{
													if (unk_0xDF75DAAACD32E49E(iLocal_59))
													{
														unk_0x5B97F41A7BE54877(iLocal_59, 1, 1);
													}
												}
												if (unk_0xD361727124133DF3(uLocal_110[iVar0]))
												{
													unk_0xA0A65B537B1F11EC(&(uLocal_110[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_48 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_129)
								{
									func_100();
								}
								if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_106, 100f, 100f, 100f, 1, 1, 0))
								{
									unk_0xA54C914AEB391F49(1f);
									if (unk_0xFD68187442384158(iLocal_53[0]) && unk_0xFD68187442384158(iLocal_53[1]))
									{
										unk_0xCA4DD92F1F2931F3(&(iLocal_53[0]));
										unk_0xCA4DD92F1F2931F3(&(iLocal_53[1]));
									}
								}
								if (!unk_0xFD68187442384158(iLocal_56))
								{
									if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_138, 200f, 200f, 200f, 1, 1, 0))
									{
										unk_0xCBE6AC5010E5CE5C(joaat("s_m_m_highsec_01"));
										unk_0xCBE6AC5010E5CE5C(joaat("granger"));
										if (unk_0xD291857D0C9C7FEC(joaat("s_m_m_highsec_01")) && unk_0xD291857D0C9C7FEC(joaat("granger")))
										{
											iLocal_58 = unk_0x546974B676313326(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, 1);
											unk_0x94A4D627D865396B(iLocal_58, 200);
											unk_0xDAFFEDA410DDC991(iLocal_58, 1.5f);
											iLocal_56 = unk_0xC68FBD37098CE438(iLocal_58, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
											unk_0xF2685765B7BEBCB0(iLocal_56, 0, 0, 2, 0);
											unk_0xF2685765B7BEBCB0(iLocal_56, 3, 0, 0, 0);
											unk_0xF2685765B7BEBCB0(iLocal_56, 4, 0, 0, 0);
											unk_0x3F9EDC2D18464273(iLocal_56, joaat("weapon_pistol"), -1, 1, 1);
											unk_0xE440546F94B26235(iLocal_56, iLocal_176);
										}
									}
								}
								if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
								{
									if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
									{
										if (unk_0xF7D9833F1E3C722B(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)) < 1)
										{
											if (!iLocal_131)
											{
												func_81(0);
												func_103();
												unk_0x4EDE34FBADD967A6(0);
												func_70(&uLocal_177, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_131 = 1;
											}
										}
									}
									else
									{
										iLocal_131 = 0;
									}
									if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_138, Global_21, 1, 1, 0) && unk_0x2F406E91B59DB558(iLocal_52, unk_0x507DA4994C3D8EBD(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0xBE55B130951EF5CA(iLocal_52))
										{
											if (unk_0xD361727124133DF3(uLocal_136))
											{
												unk_0xA0A65B537B1F11EC(&uLocal_136);
											}
											if (unk_0xD361727124133DF3(uLocal_137))
											{
												unk_0xA0A65B537B1F11EC(&uLocal_137);
											}
											if (func_69())
											{
												iLocal_48 = 5;
											}
											else
											{
												iLocal_48 = 6;
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
										if (func_50(Local_138))
										{
											func_81(0);
											func_103();
											unk_0x4EDE34FBADD967A6(0);
											func_70(&uLocal_177, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_103();
											unk_0x4EDE34FBADD967A6(0);
											func_70(&uLocal_177, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
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
								if (bLocal_123)
								{
									iLocal_48 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_123)
								{
									iLocal_48 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0xFD68187442384158(iLocal_59))
								{
									if (unk_0xDF75DAAACD32E49E(iLocal_59))
									{
										if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
										{
											if (unk_0x22605DE2E6933CF2(iLocal_53[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0x5B97F41A7BE54877(iLocal_59, 1, 1);
												}
											}
											else
											{
												unk_0x5B97F41A7BE54877(iLocal_59, 1, 1);
											}
										}
									}
								}
								if (unk_0x9F94F2CFDCA78C55(iLocal_53[0]) || unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
								{
									bLocal_146 = true;
								}
								if (bLocal_146)
								{
									if (unk_0xCA8794CE207FC6D5(iLocal_57, 0))
									{
										if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
										{
											unk_0xDC06C29AA1C2E756(iLocal_53[0]);
											if (unk_0xCA8508992C844A64(iLocal_53[0], iLocal_57, -1, 0, 0) || unk_0xCA8508992C844A64(iLocal_53[0], iLocal_57, 0, 0, 0))
											{
												if (!iLocal_163)
												{
													unk_0xAC57FBF981AB03F4(iLocal_53[0]);
													if (unk_0xFD68187442384158(iLocal_59))
													{
														if (unk_0xDF75DAAACD32E49E(iLocal_59))
														{
															unk_0x5B97F41A7BE54877(iLocal_59, 1, 1);
														}
													}
													unk_0xB5DC017AFD430D1B(&uLocal_64);
													unk_0xCBA47B699F417E4D(0);
													unk_0xCDDB3BCC4A2E6A6C(0, unk_0x0CAFB9D38494283D(iLocal_57, -0.5f, 0.5f, 0f), unk_0x507DA4994C3D8EBD(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0x36B42DB2912118E2(0, iLocal_57, -1, -1, 3f, 9, 0);
													unk_0x9C373E78BA27BAA4(0, iLocal_57, unk_0x507DA4994C3D8EBD(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x6EE8A5CF9AC75F12(uLocal_64);
													unk_0x8229311A391A4EC6(iLocal_53[0], uLocal_64);
													unk_0x9F77DFFC61FCB68C(&uLocal_64);
													unk_0xA1E4BA3B17C6D931(iLocal_53[0], 1);
													unk_0x9BE3CF0D916E6F6A(iLocal_57, 1);
													iLocal_163 = 1;
												}
												else if (unk_0xEC043AB2FEE0E94F(iLocal_53[0], 242628503) == 1)
												{
													if (unk_0xCE91B0C5B23E0134(iLocal_53[0]) == 3)
													{
														if (!unk_0x2F406E91B59DB558(iLocal_53[0], unk_0x507DA4994C3D8EBD(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x594EB70937EC1486(iLocal_53[0], Local_87, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0xCA4DD92F1F2931F3(&(iLocal_53[0]));
														}
													}
												}
											}
											else
											{
												unk_0x247B2966C6C2A4C1(iLocal_53[0], unk_0x507DA4994C3D8EBD(), 0, 16);
												unk_0xA1E4BA3B17C6D931(iLocal_53[0], 1);
											}
										}
										if (!unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
										{
											unk_0xDC06C29AA1C2E756(iLocal_53[1]);
											if (unk_0xCA8508992C844A64(iLocal_53[1], iLocal_57, -1, 0, 0) || unk_0xCA8508992C844A64(iLocal_53[1], iLocal_57, 0, 0, 0))
											{
												if (!iLocal_163)
												{
													unk_0xAC57FBF981AB03F4(iLocal_53[1]);
													unk_0xB5DC017AFD430D1B(&uLocal_64);
													unk_0xCBA47B699F417E4D(0);
													unk_0xCDDB3BCC4A2E6A6C(0, unk_0x0CAFB9D38494283D(iLocal_57, -0.5f, 0.5f, 0f), unk_0x507DA4994C3D8EBD(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0x36B42DB2912118E2(0, iLocal_57, -1, -1, 3f, 9, 0);
													unk_0x9C373E78BA27BAA4(0, iLocal_57, unk_0x507DA4994C3D8EBD(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x6EE8A5CF9AC75F12(uLocal_64);
													unk_0x8229311A391A4EC6(iLocal_53[1], uLocal_64);
													unk_0x9F77DFFC61FCB68C(&uLocal_64);
													unk_0xA1E4BA3B17C6D931(iLocal_53[1], 1);
													unk_0x9BE3CF0D916E6F6A(iLocal_57, 1);
													iLocal_163 = 1;
												}
												else if (unk_0xEC043AB2FEE0E94F(iLocal_53[1], 242628503) == 1)
												{
													if (unk_0xCE91B0C5B23E0134(iLocal_53[1]) == 3)
													{
														if (!unk_0x2F406E91B59DB558(iLocal_53[1], unk_0x507DA4994C3D8EBD(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x594EB70937EC1486(iLocal_53[1], Local_87, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0xCA4DD92F1F2931F3(&(iLocal_53[1]));
														}
													}
												}
											}
											else
											{
												unk_0x247B2966C6C2A4C1(iLocal_53[1], unk_0x507DA4994C3D8EBD(), 0, 16);
												unk_0xA1E4BA3B17C6D931(iLocal_53[1], 1);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_48 != 9)
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
							{
								if (unk_0x594EB70937EC1486(iLocal_52, Local_141, 5f, 5f, 5f, 0, 1, 0))
								{
									func_8(0);
									unk_0x4EDE34FBADD967A6(0);
									func_103();
									iLocal_48 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0xFD68187442384158(iLocal_52))
							{
								unk_0x8019BB3BA236A900(&iLocal_52);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_48 != 3)
						{
							if (func_1())
							{
								unk_0xF74C93D9036BCC1E("RE6_BOTH_DEAD");
								if (!iLocal_73)
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_105 = unk_0xF976C624234A4AA8() + 8500;
									iLocal_73 = 1;
								}
								if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
								{
									if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_52, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_48 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_48 == 1 || iLocal_48 == 2) || iLocal_48 == 3) || iLocal_48 == 7)
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
							{
								if (!bLocal_129)
								{
									if (unk_0xEC043AB2FEE0E94F(iLocal_52, 1785177548) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_52, 1785177548) != 0)
									{
										unk_0xCEBD1B99CF343672(iLocal_52);
										uLocal_342 = unk_0x1BEDF9ACAEAB15F8(Local_77, -2f, -4f, 18f, 2);
										unk_0x206610E40EE4D7D9(iLocal_52, uLocal_342, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0x763BBCB2253879B8(uLocal_60[0], uLocal_342, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x763BBCB2253879B8(uLocal_60[1], uLocal_342, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x15B365C4645F79B8(uLocal_342, 1);
										unk_0xA1E4BA3B17C6D931(iLocal_52, 1);
									}
									if (unk_0xEF57771119A32DB2(iLocal_52))
									{
										unk_0x5E3892A28C879327(iLocal_52, 1);
										unk_0x898359B91EB2E0B1(iLocal_52, 1);
										unk_0x3E16CE93BAE616EE(iLocal_52, 0);
									}
								}
								if ((unk_0x43827D6447B61FA0(iLocal_52) || unk_0x087F7B968CB47182(iLocal_52)) || (iLocal_124 - unk_0x5D422B4764FA2ACA(iLocal_52)) >= 50)
								{
									unk_0x5E3892A28C879327(iLocal_52, 1);
									unk_0x898359B91EB2E0B1(iLocal_52, 1);
									unk_0x3E16CE93BAE616EE(iLocal_52, 0);
								}
								if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && !unk_0xE5D56342B0FF1D0D(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)))
								{
									if (unk_0x11F6A4A45943670E(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)) < 5f)
									{
									}
									else if (unk_0x5D0DED2275F131C9(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), iLocal_52))
									{
										unk_0x5E3892A28C879327(iLocal_52, 1);
										unk_0x898359B91EB2E0B1(iLocal_52, 1);
										unk_0x3E16CE93BAE616EE(iLocal_52, 0);
									}
								}
								if (!unk_0xE5D56342B0FF1D0D(iLocal_57))
								{
									if (unk_0x5D0DED2275F131C9(iLocal_57, iLocal_52))
									{
										unk_0x5E3892A28C879327(iLocal_52, 1);
										unk_0x898359B91EB2E0B1(iLocal_52, 1);
										unk_0x3E16CE93BAE616EE(iLocal_52, 0);
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
			func_205();
		}
	}
}

int func_1()
{
	if (!bLocal_129)
	{
		if (!unk_0xFD68187442384158(iLocal_53[0]) && !unk_0xFD68187442384158(iLocal_53[1]))
		{
			return 1;
		}
		if (unk_0xFD68187442384158(iLocal_53[0]) && unk_0xFD68187442384158(iLocal_53[1]))
		{
			if (unk_0x9F94F2CFDCA78C55(iLocal_53[0]) && unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
			{
				return 1;
			}
			if (unk_0xD074306FB8714BD2(iLocal_53[0]) && unk_0xD074306FB8714BD2(iLocal_53[1]))
			{
				return 1;
			}
		}
		if (unk_0xFD68187442384158(iLocal_53[0]) && !unk_0xFD68187442384158(iLocal_53[1]))
		{
			if (unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
			{
				return 1;
			}
		}
		if (unk_0xFD68187442384158(iLocal_53[1]) && !unk_0xFD68187442384158(iLocal_53[0]))
		{
			if (unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
	{
		if (unk_0xD361727124133DF3(uLocal_110[0]))
		{
			if (unk_0xFD68187442384158(iLocal_59))
			{
				if (unk_0xDF75DAAACD32E49E(iLocal_59))
				{
					unk_0x5B97F41A7BE54877(iLocal_59, 1, 1);
				}
			}
			func_3(&uLocal_177, 4);
			unk_0xA0A65B537B1F11EC(&(uLocal_110[0]));
		}
	}
	if (unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
	{
		if (unk_0xD361727124133DF3(uLocal_110[1]))
		{
			func_3(&uLocal_177, 3);
			unk_0xA0A65B537B1F11EC(&(uLocal_110[1]));
		}
	}
	if (unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if (!unk_0xE5D56342B0FF1D0D(iLocal_52))
		{
		}
		if (unk_0xD361727124133DF3(uLocal_113))
		{
			func_3(&uLocal_177, 5);
			unk_0xA0A65B537B1F11EC(&uLocal_113);
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
	unk_0xF74C93D9036BCC1E("RE6_END");
	func_205();
}

int func_5()
{
	if (unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_24679)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_97159 = iParam0;
}

void func_8(int iParam0)
{
	Global_16703 = iParam0;
}

int func_9()
{
	if (Global_97173.f_28117.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_24678;
}

void func_11()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]) || !unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
		{
			if (!func_12())
			{
				switch (iLocal_167)
				{
					case 0:
						if (iLocal_105 < unk_0xF976C624234A4AA8())
						{
							if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(3500, 5000));
								iLocal_167++;
							}
						}
						break;
					
					case 1:
						if (iLocal_105 < unk_0xF976C624234A4AA8())
						{
							if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(3500, 5000));
								iLocal_167++;
							}
						}
						break;
					
					case 2:
						if (iLocal_105 < unk_0xF976C624234A4AA8())
						{
							if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(3500, 5000));
								iLocal_167++;
							}
						}
						break;
					
					case 3:
						if (iLocal_105 < unk_0xF976C624234A4AA8())
						{
							if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(3500, 5000));
								iLocal_167 = 0;
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
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
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
	unk_0xC2AE0675A3BC6FEE(unk_0xAF65E5A58BE87D95(), 1);
	func_17(-1, 0);
	func_14();
	func_205();
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
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
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
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_7(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
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
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_21(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_20() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_24444;
}

int func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_23()
{
	return Global_1312736;
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
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xA858564DC37EED5E(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA858564DC37EED5E(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0xF976C624234A4AA8() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0xF976C624234A4AA8() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_97173.f_1729.f_539.f_3213)
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
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_35(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_34(unk_0x507DA4994C3D8EBD());
			if (func_33(iVar0) && (!func_32(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_33(Global_97173.f_1729.f_539.f_3213))
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

bool func_32(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x3ED5FA3F61EC9E68(), 64);
	uVar16 = func_40(Var0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BA42EA02A10243D(&cParam0))
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
		if (unk_0x61D8FEAF64881CDA(iParam2, iParam3))
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
	if (Global_97173.f_5944.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_97173.f_5944.f_881 == Var0.f_0)
		{
			Global_97173.f_5944.f_881 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0xF976C624234A4AA8() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xCD27BF29FB9012E2(&(Var0.f_1), 1);
		unk_0xCD27BF29FB9012E2(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_1), 10);
		}
		Global_97173.f_5944[Global_97173.f_5944.f_136 /*15*/] = { Var0 };
		Global_97173.f_5944.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0x61D8FEAF64881CDA(iParam2, iVar15))
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
	while (iVar0 < Global_97173.f_5944.f_136)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_5944[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_97173.f_5944[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_97173.f_5944[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_97173.f_5944.f_764)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_5944.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_97173.f_5944.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_97173.f_5944.f_889[iParam0] = iVar1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
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
		
		case 4:
			return 5;
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
	return Global_97173.f_1729.f_539.f_3213;
}

int func_45()
{
	return 1;
}

void func_46()
{
	switch (iLocal_135)
	{
		case 0:
			if (!unk_0x9F94F2CFDCA78C55(iLocal_52) && unk_0xCA8794CE207FC6D5(iLocal_58, 0))
			{
				if (unk_0xBE55B130951EF5CA(iLocal_52))
				{
					unk_0xA2A854DDCAB3A06F(iLocal_52);
				}
				unk_0x2DC5B31EBB810396(iLocal_52, 0);
				unk_0x6A750A31D18DA81A(iLocal_52, 1);
				unk_0xB5DC017AFD430D1B(&uLocal_64);
				unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), 5000, 2048, 2);
				unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
				unk_0x36B42DB2912118E2(0, iLocal_58, -1, 0, 1f, 1, 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_64);
				unk_0x8229311A391A4EC6(iLocal_52, uLocal_64);
				unk_0x9F77DFFC61FCB68C(&uLocal_64);
				unk_0xA1E4BA3B17C6D931(iLocal_52, 1);
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_135++;
			break;
		
		case 1:
			if (unk_0xCA8794CE207FC6D5(iLocal_58, 0))
			{
				if (unk_0x53170344050F2301(iLocal_52, iLocal_58, 0))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_56))
					{
						unk_0xF40D4EBDC0BA2C26(iLocal_56, iLocal_57, 10f, 786599);
						unk_0xA1E4BA3B17C6D931(iLocal_56, 1);
					}
					unk_0x9BE3CF0D916E6F6A(iLocal_58, 1);
					iLocal_135++;
				}
			}
			break;
		
		case 2:
			iLocal_135++;
			break;
		
		case 3:
			iLocal_135++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_135++;
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
	switch (iLocal_135)
	{
		case 0:
			unk_0xCA4EA7D4F6DCCD43(255, iLocal_176, joaat("player"));
			unk_0xCA4EA7D4F6DCCD43(255, joaat("player"), iLocal_176);
			if (!unk_0xE5D56342B0FF1D0D(unk_0xF6EA6ED8FFB5B505()))
			{
				unk_0x7674FE6F22323056(unk_0xF6EA6ED8FFB5B505(), 5f, 2, 0);
				if (!unk_0x9F94F2CFDCA78C55(iLocal_52) && unk_0xCA8794CE207FC6D5(iLocal_58, 0))
				{
					if (unk_0xBE55B130951EF5CA(iLocal_52))
					{
						unk_0xA2A854DDCAB3A06F(iLocal_52);
					}
					unk_0x2DC5B31EBB810396(iLocal_52, 0);
					unk_0x6A750A31D18DA81A(iLocal_52, 1);
					unk_0xB5DC017AFD430D1B(&uLocal_64);
					unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), 5000, 2048, 2);
					unk_0x36B42DB2912118E2(0, iLocal_58, -1, 0, 1f, 1, 0);
					unk_0x6EE8A5CF9AC75F12(uLocal_64);
					unk_0x8229311A391A4EC6(iLocal_52, uLocal_64);
					unk_0x9F77DFFC61FCB68C(&uLocal_64);
					unk_0xA1E4BA3B17C6D931(iLocal_52, 1);
					func_103();
					unk_0x4EDE34FBADD967A6(0);
					func_70(&uLocal_177, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2700);
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
			iLocal_135++;
			break;
		
		case 1:
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && !unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
			{
				if (!unk_0xE5D56342B0FF1D0D(unk_0xF6EA6ED8FFB5B505()))
				{
					if (!unk_0x81A4DE5D88AD9A2C(unk_0xF6EA6ED8FFB5B505(), 1))
					{
						if (unk_0x790D2A28F6320CC8(unk_0xF6EA6ED8FFB5B505(), 1) > 0.1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_177, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_177, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_177, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_135++;
			break;
		
		case 2:
			if (unk_0xCA8794CE207FC6D5(iLocal_58, 0))
			{
				if (unk_0x53170344050F2301(iLocal_52, iLocal_58, 0))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_56))
					{
						unk_0xF40D4EBDC0BA2C26(iLocal_56, iLocal_58, 10f, 786599);
						unk_0xA1E4BA3B17C6D931(iLocal_56, 1);
					}
					unk_0x9BE3CF0D916E6F6A(iLocal_58, 1);
					iLocal_135++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_123 = true;
			}
			break;
	}
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6D1105B605F9B478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
		iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (bParam0)
		{
			if (unk_0xE5D56342B0FF1D0D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE5D56342B0FF1D0D(iVar0))
			{
				if (unk_0xE634CB9EE7094537(iVar0, -1) != unk_0x507DA4994C3D8EBD())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0xEE28BD1C8F477A55(iVar0) < 0.95f || unk_0xEE28BD1C8F477A55(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	if (!unk_0x352008B5469ACC31(unk_0xAF65E5A58BE87D95()))
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
			if (unk_0x8FE221761D524CFE(-1014.154f, 4881.411f, 245.0001f, unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), 0), 1) < 400f)
			{
				if (!Global_24683)
				{
					unk_0xF74C93D9036BCC1E("AC_EN_ROUTE_CULT");
					Global_24683 = 1;
					if (!Global_24682)
					{
						Global_24682 = 1;
						return 1;
					}
				}
			}
			else if (Global_24683)
			{
				unk_0xF74C93D9036BCC1E("AC_LEFT_AREA");
				Global_24683 = 0;
			}
		}
	}
	return 0;
}

int func_50(struct<3> Param0)
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_24681)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Param0) > (fLocal_46 + 200f) || unk_0x8FE221761D524CFE(-1014.154f, 4881.411f, 245.0001f, unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_51()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			unk_0xE2E6B3E5187DD69C(iLocal_52, 1, 1);
			unk_0xCBA47B699F417E4D(iLocal_52);
		}
		if (func_55("REBU2_LV2_9") || iLocal_71 > 1)
		{
			unk_0xE2E6B3E5187DD69C(iLocal_52, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_71)
		{
			case 0:
				func_70(&uLocal_177, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 1:
				iLocal_72 = unk_0xF976C624234A4AA8() + 1500;
				iLocal_71++;
				break;
			
			case 2:
				if (iLocal_72 < unk_0xF976C624234A4AA8())
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_71++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 4:
				iLocal_72 = unk_0xF976C624234A4AA8() + 500;
				iLocal_71++;
				break;
			
			case 5:
				if (iLocal_72 < unk_0xF976C624234A4AA8())
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_71++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 7:
				func_70(&uLocal_177, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 9:
				func_70(&uLocal_177, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 11:
				func_70(&uLocal_177, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 13:
				func_70(&uLocal_177, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 15:
				func_70(&uLocal_177, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_71++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_71++;
				break;
			
			case 17:
				iLocal_72 = unk_0xF976C624234A4AA8() + 1000;
				iLocal_71++;
				break;
			
			case 18:
				if (iLocal_72 < unk_0xF976C624234A4AA8())
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_71++;
				}
				break;
			
			case 19:
				iLocal_72 = unk_0xF976C624234A4AA8() + 2500;
				iLocal_71++;
				break;
			
			case 20:
				if (iLocal_72 < unk_0xF976C624234A4AA8())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_71++;
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
		if (unk_0xA858564DC37EED5E(sParam0, &uVar0))
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
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_55(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (unk_0xA858564DC37EED5E(sParam0, &uVar0))
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
	if (Global_15692 == 4)
	{
		iVar6 = unk_0xB578A5EEDCABA08F();
		iVar6 = (iVar6 + Global_16702);
		if (iVar6 > -1)
		{
			return Global_14560[iVar6 /*6*/];
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
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if (!iLocal_132)
		{
			if (!unk_0xE5D56342B0FF1D0D(unk_0xF6EA6ED8FFB5B505()))
			{
				if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), unk_0xF6EA6ED8FFB5B505(), 1) && unk_0x53170344050F2301(iLocal_52, unk_0xF6EA6ED8FFB5B505(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_103();
						unk_0x4EDE34FBADD967A6(0);
						func_70(&uLocal_177, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_132 = 1;
					}
				}
			}
		}
		else if (!unk_0xE5D56342B0FF1D0D(unk_0xF6EA6ED8FFB5B505()))
		{
			if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), unk_0xF6EA6ED8FFB5B505(), 0) && unk_0x53170344050F2301(iLocal_52, unk_0xF6EA6ED8FFB5B505(), 0))
			{
				iLocal_132 = 0;
			}
		}
		if (!iLocal_133)
		{
			if (unk_0x865FD939154C0034(unk_0x507DA4994C3D8EBD()))
			{
				func_81(0);
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_133 = 1;
			}
		}
		else if (!unk_0x865FD939154C0034(unk_0x507DA4994C3D8EBD()))
		{
			iLocal_133 = 0;
		}
		if (!iLocal_134)
		{
			if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
			{
				func_81(0);
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
		{
			iLocal_134 = 0;
		}
	}
}

void func_58()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
		{
			if (!func_61())
			{
				if (unk_0xBE55B130951EF5CA(iLocal_52))
				{
					unk_0xA2A854DDCAB3A06F(iLocal_52);
				}
				if (unk_0xEC043AB2FEE0E94F(iLocal_52, 1227113341) != 1 && unk_0xEC043AB2FEE0E94F(iLocal_52, 1227113341) != 0)
				{
					unk_0xA3C87095904A382C(iLocal_52, unk_0x507DA4994C3D8EBD(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x2A24448FF232F834(iLocal_52, 0))
				{
					unk_0x48367A1F7C9A1041(iLocal_52, 0, 4194304);
				}
				if (!iLocal_131)
				{
					func_81(0);
					func_103();
					unk_0x4EDE34FBADD967A6(0);
					iLocal_131 = 1;
					if (!func_60())
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_131 = 0;
				if (((unk_0xEC043AB2FEE0E94F(iLocal_52, 1227113341) == 1 || unk_0xEC043AB2FEE0E94F(iLocal_52, 1227113341) == 0) || unk_0xEC043AB2FEE0E94F(iLocal_52, 242628503) == 1) || unk_0xEC043AB2FEE0E94F(iLocal_52, 242628503) == 0)
				{
					unk_0xAC57FBF981AB03F4(iLocal_52);
				}
			}
		}
		else if (((!unk_0xBE55B130951EF5CA(iLocal_52) && !unk_0x2A24448FF232F834(iLocal_52, 0)) && unk_0xEC043AB2FEE0E94F(iLocal_52, 242628503) != 1) && unk_0xEC043AB2FEE0E94F(iLocal_52, 242628503) != 0)
		{
			unk_0x2D5B9F52D7E174CF(iLocal_52, func_59());
			unk_0x8A7FF20217891392(iLocal_52, 1);
			unk_0xA01476C01CE2E552(iLocal_52, 0);
		}
	}
}

var func_59()
{
	return unk_0x36A590B33049FCAF(unk_0x4D82797EF5035A9F());
}

int func_60()
{
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
	{
		if (unk_0xCA8794CE207FC6D5(unk_0x527D4CB4E8181391(unk_0x507DA4994C3D8EBD()), 1))
		{
			if ((unk_0xD70F47541E70FD47(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 1))) || unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 1)))) || unk_0x99F5A208CDBDA518(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (unk_0xCA8794CE207FC6D5(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0))
		{
			if (((((!unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()) && !unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD())) && !unk_0x70A314BA86AFCBFA(unk_0x507DA4994C3D8EBD())) && !unk_0x202FB250328FD056(unk_0x507DA4994C3D8EBD())) && !unk_0xA94EC3763C55FF12(unk_0x507DA4994C3D8EBD())) && !unk_0x70955799BE2F456F(unk_0x507DA4994C3D8EBD(), joaat("rhino")))
			{
				if (unk_0xF7D9833F1E3C722B(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
	{
		if (unk_0xCA8794CE207FC6D5(unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD()), 0))
		{
			if ((((!unk_0x6149FC3B1572A5B9(unk_0x26EA758C2A691D06(unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD()))) && !unk_0x9652AA5F22572EA4(unk_0x26EA758C2A691D06(unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD())))) && !unk_0x9C14CED64BA9A516(unk_0x26EA758C2A691D06(unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD())))) && !unk_0x0A0852014FD513B3(unk_0x26EA758C2A691D06(unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD())))) && unk_0x26EA758C2A691D06(unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if (unk_0x73B082A8BFC119BA(iLocal_52))
		{
			if (!iLocal_169)
			{
				iLocal_170 = unk_0xF976C624234A4AA8();
				iLocal_169 = 1;
			}
			else
			{
				iLocal_171 = unk_0xF976C624234A4AA8();
			}
		}
		else
		{
			iLocal_169 = 0;
		}
	}
	if ((iLocal_171 - iLocal_170) > 180000)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
		{
			if (unk_0xBE55B130951EF5CA(iLocal_52))
			{
				unk_0xA2A854DDCAB3A06F(iLocal_52);
				if (unk_0x594EB70937EC1486(iLocal_52, Local_138, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x3F07E364A21EBC20(iLocal_52, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0xA1E4BA3B17C6D931(iLocal_52, 1);
				}
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()
{
	if (unk_0x3428BABF05B108EE(unk_0x507DA4994C3D8EBD()))
	{
		if (!iLocal_172)
		{
			iLocal_173 = unk_0xF976C624234A4AA8();
			iLocal_172 = 1;
		}
		else
		{
			iLocal_174 = unk_0xF976C624234A4AA8();
		}
	}
	else
	{
		iLocal_172 = 0;
	}
	if ((iLocal_174 - iLocal_173) > 120000)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
		{
			if (unk_0xBE55B130951EF5CA(iLocal_52))
			{
				unk_0xA2A854DDCAB3A06F(iLocal_52);
				if (unk_0x594EB70937EC1486(iLocal_52, Local_138, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x3F07E364A21EBC20(iLocal_52, Local_138, 1f, -1, 1048576000, 0, 1193033728);
					unk_0xA1E4BA3B17C6D931(iLocal_52, 1);
				}
				else
				{
					unk_0x48367A1F7C9A1041(iLocal_52, 0, 4194304);
				}
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_52, 8f, 8f, 8f, 0, 1, 0) || unk_0x7AA4BD1E05DEDC0E(unk_0x507DA4994C3D8EBD()))
		{
			if ((unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && !unk_0x53170344050F2301(iLocal_52, unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0)) && !unk_0x7AA4BD1E05DEDC0E(unk_0x507DA4994C3D8EBD()))
			{
				if (!unk_0xD361727124133DF3(uLocal_113))
				{
					uLocal_113 = func_67(iLocal_52, 0, 145);
				}
				if (unk_0xD361727124133DF3(uLocal_136))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_136);
				}
			}
			else
			{
				if (!unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD361727124133DF3(uLocal_113))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_113);
					}
				}
				if (!unk_0xD361727124133DF3(uLocal_136))
				{
					uLocal_136 = func_65(Local_138, 1);
				}
			}
		}
		else if (!unk_0xD361727124133DF3(uLocal_113))
		{
			uLocal_113 = func_67(iLocal_52, 0, 145);
		}
		if (!unk_0xBE55B130951EF5CA(iLocal_52))
		{
			if (!unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_52, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xAC57FBF981AB03F4(iLocal_52);
				unk_0x2D5B9F52D7E174CF(iLocal_52, func_59());
				unk_0x8A7FF20217891392(iLocal_52, 1);
				unk_0xA01476C01CE2E552(iLocal_52, 0);
			}
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
			{
				unk_0xAC57FBF981AB03F4(iLocal_52);
				unk_0x2D5B9F52D7E174CF(iLocal_52, func_59());
				unk_0x8A7FF20217891392(iLocal_52, 1);
				unk_0xA01476C01CE2E552(iLocal_52, 0);
			}
		}
		if (!unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_52, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

var func_65(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0x1D8833C0F155BFE7(uVar0, func_66(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
	unk_0x43F7D508C655CBA3(uVar0, iParam3);
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
	if ((iParam2 != 145 && unk_0xD361727124133DF3(uVar0)) && unk_0xD177A95825B53731(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0x2B271F66198227B7(uVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_66(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(uVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_66(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(uVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_66(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_69()
{
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		iLocal_168 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (unk_0xCA8794CE207FC6D5(iLocal_168, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
			{
				if (unk_0x764E7360C13E7383(iLocal_52, iLocal_168))
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
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_71(sParam2, iParam3, 0);
}

int func_71(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD858EC6FECDB4B3F(0);
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
					func_79();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_77();
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
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_76();
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
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_75())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_73();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_72();
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_73()
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
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_74()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_44();
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

void func_77()
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

bool func_78(int iParam0, int iParam1)
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
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_79()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
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

void func_81(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_148)
		{
			if (!unk_0x8FA72E132AAFA62F(&Local_155))
			{
				if (func_84(&uLocal_177, "REBU2AU", &Local_155, &Local_149, 8, 0, 0))
				{
					iLocal_148 = 0;
				}
			}
			else
			{
				iLocal_148 = 0;
			}
		}
	}
	else if ((!iLocal_148 && func_12()) && !func_52())
	{
		Local_155 = { func_54() };
		Local_149 = { func_56() };
		func_82();
		iLocal_148 = 1;
	}
}

void func_82()
{
	Global_14558 = 0;
	func_83();
}

void func_83()
{
	if (unk_0xF611D1BB58990143())
	{
		unk_0xA2A4AD85BA2F7ADD();
		Global_16703 = 0;
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
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
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_71(sParam2, iParam4, 0);
}

void func_85()
{
	if (unk_0xFD68187442384158(iLocal_52))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
		{
			unk_0xE131FC34DA8AD63F(iLocal_52, 394, 1);
		}
		if (unk_0x6255AE2591FE7603(iLocal_52, unk_0x507DA4994C3D8EBD(), 1))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
			{
				unk_0xA859D289EEB2D72A(iLocal_52, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
				unk_0xA1E4BA3B17C6D931(iLocal_52, 1);
			}
			if (!unk_0x9F94F2CFDCA78C55(iLocal_56))
			{
				unk_0xCA4EA7D4F6DCCD43(5, iLocal_176, joaat("player"));
				unk_0x247B2966C6C2A4C1(iLocal_56, unk_0x507DA4994C3D8EBD(), 0, 16);
				unk_0xA1E4BA3B17C6D931(iLocal_56, 1);
			}
			func_103();
			unk_0x4EDE34FBADD967A6(0);
			func_70(&uLocal_177, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_50 = 4;
		}
		if (unk_0xFD68187442384158(iLocal_56))
		{
			if (unk_0x6255AE2591FE7603(iLocal_56, unk_0x507DA4994C3D8EBD(), 1))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
				{
					unk_0xA859D289EEB2D72A(iLocal_52, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
					unk_0xA1E4BA3B17C6D931(iLocal_52, 1);
				}
				if (!unk_0x9F94F2CFDCA78C55(iLocal_56))
				{
					unk_0xCA4EA7D4F6DCCD43(5, iLocal_176, joaat("player"));
					unk_0x247B2966C6C2A4C1(iLocal_56, unk_0x507DA4994C3D8EBD(), 0, 16);
					unk_0xA1E4BA3B17C6D931(iLocal_56, 1);
				}
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_50 = 4;
			}
		}
	}
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 1)
		{
			unk_0xA859D289EEB2D72A(iLocal_52, unk_0x507DA4994C3D8EBD(), 150f, -1, 0, 0);
			unk_0xA1E4BA3B17C6D931(iLocal_52, 1);
			func_103();
			unk_0x4EDE34FBADD967A6(0);
			func_70(&uLocal_177, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_50 = 4;
		}
	}
}

void func_86()
{
	int iVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if ((unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_52, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD())) && !unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_129 = true;
				if (!iLocal_114)
				{
					func_93(1, 1, 1, 0);
					unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 24);
					unk_0x4A4C1A1BC79EFE8F(1);
					unk_0x330ABD0F05E764BB(0);
					unk_0x255259988FBEFACC(0);
					unk_0xB0CAF046D7045AFD(unk_0x507DA4994C3D8EBD(), 1);
					if (unk_0xFD68187442384158(unk_0xF6EA6ED8FFB5B505()))
					{
						unk_0xBAE5DF507EEC53C8(unk_0xF6EA6ED8FFB5B505(), 1, 0);
						if (unk_0xEF57771119A32DB2(unk_0xF6EA6ED8FFB5B505()))
						{
							func_92(unk_0xF6EA6ED8FFB5B505());
							unk_0x240BBFD908B5DA09(unk_0xF6EA6ED8FFB5B505(), 200f);
						}
						if (unk_0x2F406E91B59DB558(unk_0xF6EA6ED8FFB5B505(), iLocal_52, 5f, 5f, 5f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0xF6EA6ED8FFB5B505(), Local_87, 5f, 5f, 5f, 0, 1, 0))
						{
							unk_0xF85858E5CBF4D9F0(unk_0xF6EA6ED8FFB5B505(), unk_0xBF1B13057E5119A4(iLocal_52, 1) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!unk_0xE5D56342B0FF1D0D(unk_0xF6EA6ED8FFB5B505()))
							{
								unk_0xD90C30D269B19096(unk_0xF6EA6ED8FFB5B505());
							}
						}
					}
					if (unk_0xFD68187442384158(iLocal_57))
					{
						if (unk_0xEF57771119A32DB2(iLocal_57))
						{
							func_92(iLocal_57);
							unk_0x240BBFD908B5DA09(iLocal_57, 200f);
						}
						if (unk_0x2F406E91B59DB558(iLocal_57, iLocal_52, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0xF85858E5CBF4D9F0(iLocal_57, Local_87, 0, 0, 0, 1);
							if (!unk_0xE5D56342B0FF1D0D(iLocal_57))
							{
								unk_0xD90C30D269B19096(iLocal_57);
							}
						}
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
					{
						iLocal_168 = unk_0x9A67DC5FE3A03F32(unk_0xBF1B13057E5119A4(iLocal_52, 1), 5f, 0, 2);
						if (!unk_0xE5D56342B0FF1D0D(iLocal_168))
						{
							if (unk_0xEF57771119A32DB2(iLocal_168))
							{
								func_92(iLocal_168);
								unk_0x240BBFD908B5DA09(iLocal_168, 200f);
							}
							unk_0xF85858E5CBF4D9F0(iLocal_168, unk_0xBF1B13057E5119A4(iLocal_52, 1) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					unk_0xB895F3A5E3A84693(Local_77, 10f);
					unk_0x13196E39740F8C20(Local_77, 10f, 0);
					unk_0x407F91A831576A66(Local_77, 4.5f, 0, 0, 0, 0, 0);
					unk_0xF85858E5CBF4D9F0(iLocal_52, Local_77, 1, 0, 0, 1);
					unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Local_77, 1, 0, 0, 1);
					if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_53)
					{
						if (unk_0xFD68187442384158(iLocal_53[iVar0]))
						{
							if (unk_0x594EB70937EC1486(iLocal_53[iVar0], unk_0xBF1B13057E5119A4(iLocal_52, 0), 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								unk_0x8019BB3BA236A900(&(iLocal_53[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
					{
						uLocal_342 = unk_0x1BEDF9ACAEAB15F8(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						uLocal_76 = unk_0x07A7435490ED9AAB("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0xB754DFF4436CE5FF(uLocal_76, uLocal_342, "untie_cam", "random@burial");
						unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
						unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 18.2311f);
						unk_0x3E16CE93BAE616EE(iLocal_52, 200);
						unk_0x5E3892A28C879327(iLocal_52, 0);
						unk_0x898359B91EB2E0B1(iLocal_52, 0);
						unk_0xCEBD1B99CF343672(iLocal_52);
						unk_0x206610E40EE4D7D9(iLocal_52, uLocal_342, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0x243553B40CC46CFE(iLocal_52, 0, 0);
						unk_0x206610E40EE4D7D9(unk_0x507DA4994C3D8EBD(), uLocal_342, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 0, 0);
						unk_0x763BBCB2253879B8(uLocal_60[0], uLocal_342, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x763BBCB2253879B8(uLocal_60[1], uLocal_342, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x6F430D0F1783A56E(uLocal_76, 1);
						unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
						iLocal_119 = unk_0xF976C624234A4AA8();
						iLocal_114 = 1;
					}
				}
			}
		}
	}
	if (iLocal_114 && !iLocal_116)
	{
		unk_0x0DCB93E7DEB1CC3F();
		if (unk_0x1955A5B9B65FEEBD(uLocal_342))
		{
			if ((unk_0x6385FE4ECBDF05D2(uLocal_342) > 0.115f && unk_0x6385FE4ECBDF05D2(uLocal_342) < 0.12f) || (unk_0x6385FE4ECBDF05D2(uLocal_342) > 0.355f && unk_0x6385FE4ECBDF05D2(uLocal_342) < 0.36f))
			{
				unk_0x84795EA8F54230A1(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (unk_0x6385FE4ECBDF05D2(uLocal_342) > 0.6f)
			{
				if (!iLocal_115)
				{
					func_103();
					unk_0x4EDE34FBADD967A6(0);
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_115 = 1;
					}
				}
			}
		}
		iLocal_118 = unk_0xF976C624234A4AA8();
		if (((iLocal_118 - iLocal_119) > 9700 && !iLocal_122) && unk_0x25A5D05A7AF9563B() == 4)
		{
			unk_0x8EEEED91D5DD768C("CamPushInNeutral", 0, 0);
			unk_0x84795EA8F54230A1(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_122 = 1;
		}
		if ((iLocal_118 - iLocal_119) > 10000)
		{
			iLocal_116 = 1;
		}
		if (func_90(1000))
		{
			func_103();
			unk_0x7C69A4879766A867(800);
			while (unk_0xF468278E75CA2341())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_116 = 1;
			bLocal_117 = true;
		}
	}
	if (iLocal_116 && !bLocal_121)
	{
		unk_0x330ABD0F05E764BB(1);
		unk_0x255259988FBEFACC(1);
		unk_0x39ABDEE52B08CBD2(uLocal_342, 1f);
		unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
		unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 0, 0);
		unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 256.7693f);
		if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
		{
			unk_0xCEBD1B99CF343672(iLocal_52);
			unk_0x243553B40CC46CFE(iLocal_52, 0, 0);
			unk_0x6A8A5F1A990BB700(iLocal_52, 1);
			unk_0xF85858E5CBF4D9F0(iLocal_52, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(iLocal_52, 73.449f);
		}
		unk_0xBE5E0E5A454F4D6A(26.1578f);
		unk_0x77CB1AAAF31275BE(-8.1198f, 1065353216);
		unk_0x6F430D0F1783A56E(uLocal_76, 0);
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		unk_0x44151B6071157DDD(uLocal_76, 0);
		unk_0xB0CAF046D7045AFD(unk_0x507DA4994C3D8EBD(), 0);
		if (bLocal_117)
		{
			unk_0x662E87A876F1069D(800);
			while (unk_0xC17F446CF864854D())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		bLocal_121 = true;
	}
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		if (bLocal_121)
		{
			if (!iLocal_120)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0xCA4EA7D4F6DCCD43(1, iLocal_176, joaat("player"));
					unk_0xCA4EA7D4F6DCCD43(1, joaat("player"), iLocal_176);
					unk_0xB5DC017AFD430D1B(&uLocal_64);
					unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 2048, 2);
					unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 4000);
					if (unk_0xCA8794CE207FC6D5(unk_0xF6EA6ED8FFB5B505(), 0))
					{
						if (unk_0x2F406E91B59DB558(iLocal_52, unk_0xF6EA6ED8FFB5B505(), 20f, 20f, 20f, 0, 1, 0) && unk_0xF7D9833F1E3C722B(unk_0xF6EA6ED8FFB5B505()) > 0)
						{
							unk_0x36B42DB2912118E2(0, unk_0xF6EA6ED8FFB5B505(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0xBE55B130951EF5CA(iLocal_52))
						{
							unk_0x2D5B9F52D7E174CF(iLocal_52, func_59());
							unk_0x8A7FF20217891392(iLocal_52, 1);
							unk_0xA01476C01CE2E552(iLocal_52, 0);
						}
					}
					else if (!unk_0xBE55B130951EF5CA(iLocal_52))
					{
						unk_0x2D5B9F52D7E174CF(iLocal_52, func_59());
						unk_0x8A7FF20217891392(iLocal_52, 1);
						unk_0xA01476C01CE2E552(iLocal_52, 0);
					}
					unk_0x6EE8A5CF9AC75F12(uLocal_64);
					unk_0x8229311A391A4EC6(iLocal_52, uLocal_64);
					unk_0x9F77DFFC61FCB68C(&uLocal_64);
					if (unk_0xD361727124133DF3(uLocal_113))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_113);
					}
					if (!unk_0xD361727124133DF3(uLocal_136))
					{
						uLocal_136 = func_65(Local_138, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!unk_0xD361727124133DF3(uLocal_137))
						{
							uLocal_137 = func_65(Local_141, 0);
							unk_0x01DF6D56C47E7482(uLocal_137, 269);
							func_88();
						}
					}
					func_87();
					iLocal_130 = 1;
					iLocal_120 = 1;
					unk_0xC1B1E9A034A63A62(0);
					unk_0xFF2066264E0F3BD4(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f);
					unk_0xC198E0954F22A27D(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0, 1);
					func_93(0, 1, 1, 0);
					unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 4);
					unk_0x7CEA616AE5D86DF7(unk_0x507DA4994C3D8EBD());
					iLocal_48 = 4;
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
			Global_24678 = 1;
		}
	}
}

void func_88()
{
	if (func_44() == 2)
	{
		if (!Global_24680)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

int func_90(int iParam0)
{
	if (unk_0x8D4100BAA46EE198())
	{
		if ((unk_0xF976C624234A4AA8() - Global_27) > iParam0)
		{
			Global_26 = unk_0xF976C624234A4AA8();
		}
		Global_27 = unk_0xF976C624234A4AA8();
		if ((unk_0xF976C624234A4AA8() - Global_26) > iParam0)
		{
			if (func_91())
			{
				Global_26 = unk_0xF976C624234A4AA8();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
{
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 0;
	}
	if (unk_0x58FC9C7DF8FE009B(0, 18) || unk_0x58FC9C7DF8FE009B(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			if (unk_0xEF57771119A32DB2(iParam0))
			{
				unk_0x0146A47ED2C5B980(iParam0);
				unk_0x3E16CE93BAE616EE(iParam0, unk_0x5D422B4764FA2ACA(iParam0) + 200);
				unk_0x240BBFD908B5DA09(iParam0, (unk_0xBA2FAB683F225FF0(iParam0) + 200f));
				unk_0xD9C8A48B8EE646C7(iParam0, (unk_0x6E8B0986A202BDDE(iParam0) + 200f));
				unk_0xB895F3A5E3A84693(unk_0xBF1B13057E5119A4(iParam0, 1), 5f);
				unk_0x4BCBC9058A5CECE1(unk_0xBF1B13057E5119A4(iParam0, 1), 2.5f, 1, 0, 0, 0);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_99(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_74())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_98(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_99(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_98(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_94(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_94(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return 1;
	}
	if (func_95())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_95()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_96(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_97(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_97(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_98(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_99(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

void func_100()
{
	if (!unk_0xE5D56342B0FF1D0D(iLocal_52))
	{
		switch (iLocal_167)
		{
			case 0:
				if (iLocal_105 < unk_0xF976C624234A4AA8())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(4000, 5500));
						iLocal_167++;
					}
				}
				break;
			
			case 1:
				if (iLocal_105 < unk_0xF976C624234A4AA8())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(4000, 5500));
						iLocal_167++;
					}
				}
				break;
			
			case 2:
				if (iLocal_105 < unk_0xF976C624234A4AA8())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(4000, 5500));
						iLocal_167++;
					}
				}
				break;
			
			case 3:
				if (iLocal_105 < unk_0xF976C624234A4AA8())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(4000, 5500));
						iLocal_167 = 0;
					}
				}
				break;
			}
	}
}

void func_101(var uParam0, char* sParam1, int iParam2)
{
	unk_0xF3E45A7DABC97254(uParam0, sParam1, func_102(iParam2), 1);
}

int func_102(int iParam0)
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

void func_103()
{
	Global_14558 = 0;
	func_104();
}

void func_104()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

void func_105()
{
	if (!iLocal_66 && unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_106, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
		{
			if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_66 = 1;
			}
		}
	}
	if (unk_0xCA8794CE207FC6D5(iLocal_57, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
		{
			unk_0x9C373E78BA27BAA4(iLocal_53[0], iLocal_57, unk_0x507DA4994C3D8EBD(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0xA1E4BA3B17C6D931(iLocal_53[0], 1);
		}
		if (!unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
		{
			unk_0x36B42DB2912118E2(iLocal_53[1], iLocal_57, -1, 0, 3f, 1, 0);
			unk_0xA1E4BA3B17C6D931(iLocal_53[1], 1);
		}
	}
	else
	{
		iLocal_63 = 0;
		while (iLocal_63 <= 1)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_53[iLocal_63]))
			{
				unk_0xA859D289EEB2D72A(iLocal_53[iLocal_63], unk_0x507DA4994C3D8EBD(), 250f, -1, 0, 0);
				unk_0xA1E4BA3B17C6D931(iLocal_53[iLocal_63], 1);
			}
			iLocal_63++;
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	func_4();
}

void func_106()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
	{
		if (!unk_0x06B91ED8EB0DE484(iLocal_53[0]) && !unk_0x06B91ED8EB0DE484(iLocal_53[1]))
		{
			if (func_70(&uLocal_177, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0xEB4AE93098956715(iLocal_53[1]))
				{
					unk_0xAC57FBF981AB03F4(iLocal_53[1]);
					unk_0x164444F49EF1FE97(iLocal_53[1], unk_0x507DA4994C3D8EBD(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
	iLocal_48 = 7;
}

void func_107()
{
	float fVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
	{
		if (!iLocal_68)
		{
			if (!iLocal_67)
			{
				unk_0xB5DC017AFD430D1B(&uLocal_64);
				unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 2048, 2);
				unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_64);
				unk_0x8229311A391A4EC6(iLocal_53[1], uLocal_64);
				unk_0x9F77DFFC61FCB68C(&uLocal_64);
				iLocal_67 = 1;
			}
			if (unk_0x849DBD2D635C99D5(iLocal_53[1], unk_0x507DA4994C3D8EBD(), 90f))
			{
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
				{
					fVar0 = func_109(iLocal_53[0], unk_0x507DA4994C3D8EBD(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0x5B97F41A7BE54877(iLocal_59, 0, 1);
					unk_0x26030664C7D28388(iLocal_59, iLocal_53[0], unk_0xA8918EDB277FC51C(iLocal_53[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xAC57FBF981AB03F4(iLocal_53[0]);
					unk_0xB5DC017AFD430D1B(&uLocal_64);
					unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 2048, 2);
					unk_0xEC0A546609840086(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
					unk_0x6EE8A5CF9AC75F12(uLocal_64);
					unk_0x8229311A391A4EC6(iLocal_53[0], uLocal_64);
					unk_0x9F77DFFC61FCB68C(&uLocal_64);
					unk_0x0A000D03DB5B545F(iLocal_53[1], joaat("weapon_sawnoffshotgun"), 1);
					unk_0xAC57FBF981AB03F4(iLocal_53[1]);
					unk_0xB5DC017AFD430D1B(&uLocal_64);
					unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 2048, 2);
					unk_0xA3C87095904A382C(0, unk_0x507DA4994C3D8EBD(), -1, fVar0, 1f, 1073741824, 0);
					unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
					unk_0x6EE8A5CF9AC75F12(uLocal_64);
					unk_0x8229311A391A4EC6(iLocal_53[1], uLocal_64);
					unk_0x9F77DFFC61FCB68C(&uLocal_64);
					iLocal_68 = 1;
				}
			}
		}
		if (unk_0xFD68187442384158(iLocal_59))
		{
			if (unk_0xDF75DAAACD32E49E(iLocal_59))
			{
				if (unk_0x22605DE2E6933CF2(iLocal_53[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x5B97F41A7BE54877(iLocal_59, 1, 1);
					}
				}
			}
		}
		if (iLocal_68 && !iLocal_164)
		{
			if (func_70(&uLocal_177, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0xB5DC017AFD430D1B(&uLocal_64);
				unk_0x68D196451292305F(0, unk_0x507DA4994C3D8EBD(), unk_0x507DA4994C3D8EBD(), 1f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xCDBB862D670BA90E(0, unk_0x507DA4994C3D8EBD(), -1, 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_64);
				unk_0x8229311A391A4EC6(iLocal_53[1], uLocal_64);
				unk_0x9F77DFFC61FCB68C(&uLocal_64);
				unk_0xF74C93D9036BCC1E("RE6_START");
				iLocal_164 = 1;
			}
		}
		if (iLocal_164 && !iLocal_165)
		{
			if (func_70(&uLocal_177, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_53[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_53[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xCDBB862D670BA90E(iLocal_53[0], unk_0x507DA4994C3D8EBD(), -1, 0);
				}
				iLocal_165 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (iLocal_165 && !bLocal_166)
		{
			if (unk_0xC9D9444186B5A374() > 15000 && !func_12())
			{
				if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_53[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_53[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xDE75E9DE5B6221E1(iLocal_53[0], unk_0x507DA4994C3D8EBD(), 0);
					unk_0xDE75E9DE5B6221E1(iLocal_53[1], unk_0x507DA4994C3D8EBD(), 0);
					func_70(&uLocal_177, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_166 = true;
				}
			}
		}
		if (((!iLocal_69 && iLocal_164) && !unk_0x9F94F2CFDCA78C55(iLocal_53[0])) && !unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
		{
			if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_53[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_53[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_108())
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0xB5DC017AFD430D1B(&uLocal_64);
				unk_0xA3C87095904A382C(0, iLocal_53[1], -1, 2f, 1f, 1073741824, 0);
				unk_0xDE75E9DE5B6221E1(0, iLocal_53[1], 0);
				unk_0x371C90C63129A983(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x6EE8A5CF9AC75F12(uLocal_64);
				unk_0x8229311A391A4EC6(iLocal_53[0], uLocal_64);
				unk_0x9F77DFFC61FCB68C(&uLocal_64);
				unk_0xB5DC017AFD430D1B(&uLocal_64);
				unk_0xA3C87095904A382C(0, iLocal_53[0], -1, 2f, 1f, 1073741824, 0);
				unk_0xDE75E9DE5B6221E1(0, iLocal_53[0], 0);
				unk_0x371C90C63129A983(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x6EE8A5CF9AC75F12(uLocal_64);
				unk_0x8229311A391A4EC6(iLocal_53[1], uLocal_64);
				unk_0x9F77DFFC61FCB68C(&uLocal_64);
				unk_0x5AE11BC36633DE4E(15000);
				iLocal_144 = 0;
				iLocal_165 = 1;
				iLocal_69 = 1;
			}
		}
		if (bLocal_166)
		{
			func_11();
			func_111();
		}
		if (((unk_0x2A71687AF0AE817B(iLocal_53[0], unk_0x507DA4994C3D8EBD()) || unk_0x2A71687AF0AE817B(iLocal_53[1], unk_0x507DA4994C3D8EBD())) || unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_53[0])) || unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_53[1]))
		{
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 4) && !unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 3))
			{
				if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
				{
					if (!iLocal_75)
					{
						func_103();
						unk_0x4EDE34FBADD967A6(0);
						if (func_70(&uLocal_177, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_75 = 1;
							func_111();
						}
					}
				}
			}
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 3) && !unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 4))
			{
				if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
				{
					if (!iLocal_75)
					{
						func_103();
						unk_0x4EDE34FBADD967A6(0);
						if (func_70(&uLocal_177, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_75 = 1;
							func_111();
						}
					}
				}
			}
			if (unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()) || unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
			{
				func_111();
			}
		}
	}
}

int func_108()
{
	if (unk_0x61D8FEAF64881CDA(unk_0x4D3E68F73B727E49(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_109(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

int func_110()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (unk_0xCA8794CE207FC6D5(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0))
			{
				if ((((unk_0x70955799BE2F456F(unk_0x507DA4994C3D8EBD(), joaat("rhino")) || unk_0x98DA9B25A89BC9B9(unk_0x507DA4994C3D8EBD())) || unk_0x70955799BE2F456F(unk_0x507DA4994C3D8EBD(), joaat("annihilator"))) || unk_0x70955799BE2F456F(unk_0x507DA4994C3D8EBD(), joaat("buzzard"))) || unk_0x7E94D7B1F9207611(unk_0x507DA4994C3D8EBD()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_111()
{
	func_11();
	unk_0xF74C93D9036BCC1E("RE6_START");
	if (!iLocal_144)
	{
		if (unk_0xFD68187442384158(iLocal_53[0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
			{
				unk_0xE131FC34DA8AD63F(iLocal_53[0], 156, 1);
				if (unk_0xFD68187442384158(iLocal_59))
				{
					unk_0xDC06C29AA1C2E756(iLocal_53[0]);
					if (unk_0xDF75DAAACD32E49E(iLocal_59))
					{
						if (!iLocal_69)
						{
							unk_0x5B97F41A7BE54877(iLocal_59, 0, 1);
							unk_0x26030664C7D28388(iLocal_59, iLocal_53[0], unk_0xA8918EDB277FC51C(iLocal_53[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0xAC57FBF981AB03F4(iLocal_53[0]);
							unk_0xB5DC017AFD430D1B(&uLocal_64);
							unk_0xCBA47B699F417E4D(0);
							unk_0xEC0A546609840086(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
							unk_0x6EE8A5CF9AC75F12(uLocal_64);
							unk_0x8229311A391A4EC6(iLocal_53[0], uLocal_64);
							unk_0x9F77DFFC61FCB68C(&uLocal_64);
							unk_0xA1E4BA3B17C6D931(iLocal_53[0], 1);
							unk_0x243553B40CC46CFE(iLocal_53[0], 0, 0);
							iLocal_144 = 1;
						}
					}
					else
					{
						unk_0xB5DC017AFD430D1B(&uLocal_64);
						unk_0xCBA47B699F417E4D(0);
						unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
						unk_0x6EE8A5CF9AC75F12(uLocal_64);
						unk_0x8229311A391A4EC6(iLocal_53[0], uLocal_64);
						unk_0x9F77DFFC61FCB68C(&uLocal_64);
						unk_0xA1E4BA3B17C6D931(iLocal_53[0], 1);
						iLocal_144 = 1;
					}
				}
			}
			else
			{
				iLocal_144 = 1;
			}
		}
		else
		{
			iLocal_144 = 1;
		}
	}
	if (unk_0xFD68187442384158(iLocal_59))
	{
		if (unk_0xDF75DAAACD32E49E(iLocal_59))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
			{
				if (unk_0x22605DE2E6933CF2(iLocal_53[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x5B97F41A7BE54877(iLocal_59, 1, 1);
					}
				}
			}
		}
	}
	if (!iLocal_145)
	{
		if (unk_0xFD68187442384158(iLocal_53[1]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
			{
				unk_0xE131FC34DA8AD63F(iLocal_53[1], 156, 1);
				unk_0xDC06C29AA1C2E756(iLocal_53[1]);
				unk_0xB5DC017AFD430D1B(&uLocal_64);
				unk_0xCBA47B699F417E4D(0);
				unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 500);
				unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
				unk_0x6EE8A5CF9AC75F12(uLocal_64);
				unk_0x8229311A391A4EC6(iLocal_53[1], uLocal_64);
				unk_0x9F77DFFC61FCB68C(&uLocal_64);
				unk_0xA1E4BA3B17C6D931(iLocal_53[1], 1);
				iLocal_145 = 1;
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
	if (iLocal_145 && iLocal_144)
	{
		iLocal_105 = unk_0xF976C624234A4AA8() + 8500;
		unk_0xC1B1E9A034A63A62(0);
		iLocal_48 = 7;
	}
}

int func_112(int iParam0)
{
	if (func_115())
	{
		Global_97163 = 1;
		Global_97160 = unk_0xF976C624234A4AA8();
		if (func_25(Global_97162))
		{
			func_113(0);
		}
		unk_0xAABDA3B6E57B068A(1, "RE_TITLE");
		if (iParam0 && func_25(Global_97162))
		{
			unk_0x2EFA6B02E866355A();
		}
		return 1;
	}
	return 0;
}

void func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_89(func_114(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 1))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_89(func_114(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 2))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_89(func_114(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 2);
				}
			}
			break;
	}
}

char* func_114(int iParam0)
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

int func_115()
{
	switch (func_116(&Global_24503, 0, 5, 0, unk_0xF682120D0C324317()))
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

int func_116(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_120(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x60D71C675384BFB1(unk_0x4D82797EF5035A9F(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6C786E2F6583AF3(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_118(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_117(uParam0, iParam4);
		}
	}
	return 2;
}

void func_117(var uParam0, int iParam1)
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

bool func_118(int iParam0)
{
	return func_119(iParam0, Global_34909);
}

int func_119(int iParam0, int iParam1)
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

int func_120(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_118(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_121()
{
	if (unk_0xD361727124133DF3(uLocal_162))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_162);
	}
	if (!unk_0xD361727124133DF3(uLocal_113))
	{
		if (!unk_0xE5D56342B0FF1D0D(iLocal_52))
		{
			uLocal_113 = func_67(iLocal_52, 0, 145);
		}
	}
	iLocal_63 = 0;
	while (iLocal_63 <= 1)
	{
		if (!unk_0xD361727124133DF3(uLocal_110[iLocal_63]))
		{
			if (!unk_0xE5D56342B0FF1D0D(iLocal_53[iLocal_63]))
			{
				uLocal_110[iLocal_63] = func_67(iLocal_53[iLocal_63], 1, 145);
			}
		}
		iLocal_63++;
	}
}

void func_122()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
	{
		switch (iLocal_167)
		{
			case 0:
				if (iLocal_105 < unk_0xF976C624234A4AA8())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(4500, 6500));
						iLocal_167++;
					}
				}
				break;
			
			case 1:
				if (iLocal_105 < unk_0xF976C624234A4AA8())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(4500, 6500));
						iLocal_167++;
					}
				}
				break;
			
			case 2:
				if (iLocal_105 < unk_0xF976C624234A4AA8())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(4500, 6500));
						iLocal_167++;
					}
				}
				break;
			
			case 3:
				if (iLocal_105 < unk_0xF976C624234A4AA8())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(4500, 6500));
						iLocal_167 = 0;
					}
				}
				break;
			}
	}
}

void func_123()
{
	switch (iLocal_109)
	{
		case 0:
			if (func_70(&uLocal_177, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_109++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_177, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_109++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_177, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_109++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_177, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_109++;
				}
			}
			break;
		
		case 4:
			iLocal_105 = unk_0xF976C624234A4AA8() + 3000;
			iLocal_109++;
			break;
		
		case 5:
			break;
	}
}

void func_124()
{
	if (unk_0xFD68187442384158(iLocal_59))
	{
		if (unk_0xDF75DAAACD32E49E(iLocal_59))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]))
			{
				if (unk_0x22605DE2E6933CF2(iLocal_53[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial_stop") > 0.124f && unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0x8BCDEA8221B6D08A("scr_burial_dirt", iLocal_59, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0x22605DE2E6933CF2(iLocal_53[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") > 0.04f && unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") < 0.043f) || (unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") > 0.24f && unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") < 0.243f)) || (unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") > 0.44f && unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") < 0.443f)) || (unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") > 0.64f && unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") < 0.643f)) || (unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") > 0.84f && unk_0x5132EC78980FBED7(iLocal_53[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0x8BCDEA8221B6D08A("scr_burial_dirt", iLocal_59, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_125()
{
	if (!iLocal_128)
	{
		if (unk_0x0982F2F40B035E77(Local_87, 100f, 1) || unk_0x0982F2F40B035E77(Local_87, 100f, 1))
		{
			if (unk_0x9F94F2CFDCA78C55(iLocal_53[0]) || unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
			{
				iLocal_50 = 1;
				return 1;
			}
			else if (!unk_0x0982F2F40B035E77(Local_87, 100f, 1) || !unk_0x0982F2F40B035E77(Local_87, 100f, 1))
			{
				iLocal_50 = 1;
				return 1;
			}
		}
		if (((((((((unk_0xD6478E72C9640744(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0xD6478E72C9640744(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0xD6478E72C9640744(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0xD6478E72C9640744(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0xD6478E72C9640744(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0xD6478E72C9640744(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0xD6478E72C9640744(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0x656425C603F673C9(2, Local_87 - Vector(100f, 100f, 100f), Local_87 + Vector(100f, 100f, 100f))) || unk_0x656425C603F673C9(4, Local_87 - Vector(100f, 100f, 100f), Local_87 + Vector(100f, 100f, 100f))) || unk_0x656425C603F673C9(0, Local_87 - Vector(100f, 100f, 100f), Local_87 + Vector(100f, 100f, 100f)))
		{
			iLocal_50 = 1;
			return 1;
		}
		if (unk_0xFD68187442384158(iLocal_57))
		{
			if (!unk_0xE5D56342B0FF1D0D(iLocal_57))
			{
				if (unk_0x6255AE2591FE7603(iLocal_57, unk_0x507DA4994C3D8EBD(), 1) || unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_57, 0))
				{
					unk_0x7CEA616AE5D86DF7(iLocal_57);
					func_111();
					iLocal_50 = 3;
					return 1;
				}
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					if (unk_0x70955799BE2F456F(unk_0x507DA4994C3D8EBD(), joaat("towtruck")) || unk_0x70955799BE2F456F(unk_0x507DA4994C3D8EBD(), joaat("towtruck2")))
					{
						if (unk_0x7FA9B9EC1CAEE692(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), iLocal_57))
						{
							func_111();
							iLocal_50 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_74)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
			{
				if ((((unk_0x2A71687AF0AE817B(iLocal_53[0], unk_0x507DA4994C3D8EBD()) || unk_0x2A71687AF0AE817B(iLocal_53[1], unk_0x507DA4994C3D8EBD())) || unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_53[0])) || unk_0xE131581629473E8F(unk_0xAF65E5A58BE87D95(), iLocal_53[1])) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_87 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0, 1, 0))
				{
					if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_87 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0, 1, 0))
					{
						iLocal_50 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_53[0]) && !unk_0x9F94F2CFDCA78C55(iLocal_53[1]))
			{
				if (!unk_0xE5D56342B0FF1D0D(unk_0xF6EA6ED8FFB5B505()))
				{
					if (unk_0x5D0DED2275F131C9(unk_0xF6EA6ED8FFB5B505(), iLocal_53[0]) || unk_0x5D0DED2275F131C9(unk_0xF6EA6ED8FFB5B505(), iLocal_53[1]))
					{
						iLocal_50 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
		{
			if (unk_0x6255AE2591FE7603(iLocal_52, unk_0x507DA4994C3D8EBD(), 0) || unk_0xEA4A2F1853D39672(iLocal_52, joaat("weapon_stungun"), 0))
			{
				iLocal_50 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_50 = 4;
			return 1;
		}
		if (unk_0xE5D56342B0FF1D0D(iLocal_53[0]) || unk_0xE5D56342B0FF1D0D(iLocal_53[1]))
		{
			iLocal_50 = 6;
			return 1;
		}
		if (iLocal_74)
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0xE5D56342B0FF1D0D(iParam0) && !bParam4)
	{
		if (unk_0x73B082A8BFC119BA(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0) && !bParam4)
		{
			Var3 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			Var6 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0x61D8FEAF64881CDA(iParam3, 3))
			{
				if (func_132(iParam0, iParam6))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_130(iParam0);
					return 1;
				}
			}
			if (!unk_0x61D8FEAF64881CDA(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x0982F2F40B035E77(Var6, fParam5, 1))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_130(iParam0);
					return 1;
				}
				if (unk_0xEE93FF4158B54B09(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_130(iParam0);
					return 1;
				}
			}
			if (!unk_0x61D8FEAF64881CDA(iParam3, 2))
			{
				fVar0 = unk_0x009E72A131A3CFE4(unk_0x507DA4994C3D8EBD());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
				{
					if (unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0) || unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0x15DEAA4402D18301(iParam0, unk_0x507DA4994C3D8EBD(), 17))
							{
								func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_131("	aggro Ped knows player is pointing gun\n");
								func_127("		lockOnTimer = ", *uParam2);
								func_131("\n");
								func_127("		time since not LockedOn = ", (unk_0xF976C624234A4AA8() - iLocal_18));
								func_131("\n");
								bVar2 = true;
								if (unk_0xF976C624234A4AA8() > (iLocal_18 + *uParam2))
								{
									func_131("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_130(iParam0);
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
			if (!unk_0x61D8FEAF64881CDA(iParam3, 0))
			{
				if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_130(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_18 = unk_0xF976C624234A4AA8();
	}
	return 0;
}

void func_127(char* sParam0, int iParam1)
{
	func_129(sParam0);
	func_128(iParam1);
}

void func_128(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_129(char* sParam0)
{
	if (unk_0xA858564DC37EED5E(uParam0, uParam0))
	{
	}
}

void func_130(int iParam0)
{
	unk_0x7416091E97852604(iParam0);
}

void func_131(char* sParam0)
{
	func_129(sParam0);
}

int func_132(int iParam0, int iParam1)
{
	if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
	{
		if ((unk_0xD7873D6F1741A9A4(iParam0) - unk_0x5D422B4764FA2ACA(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_133()
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_135(39, 1);
	func_135(40, 1);
	func_135(41, 1);
	func_135(42, 1);
	func_135(43, 1);
	unk_0x92832F671263F8E0(Local_138 - Vector(20f, 40f, 40f), Local_138 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0x92832F671263F8E0(Local_77 - Vector(20f, 50f, 60f), Local_77 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0x941F924D5E9C2140(iLocal_104, 1);
	unk_0xB8265112BB26591B(5, 0);
	unk_0xB8265112BB26591B(3, 0);
	unk_0xA54C914AEB391F49(0f);
	iLocal_52 = unk_0x7B88529CAE3B7F15(26, iLocal_101, Local_77, fLocal_96, 1, 1);
	unk_0x2DC5B31EBB810396(iLocal_52, 1);
	unk_0x6A750A31D18DA81A(iLocal_52, 0);
	unk_0xB2B080B88A4144B7(iLocal_52, 2, 0);
	unk_0xB2B080B88A4144B7(iLocal_52, 128, 1);
	unk_0x3A1E687904400847(iLocal_52, 1, 0);
	unk_0x3A1E687904400847(iLocal_52, 6, 0);
	unk_0x7FEDD088E489CE41(iLocal_52, 206, 1);
	unk_0x7FEDD088E489CE41(iLocal_52, 318, 0);
	unk_0x7FEDD088E489CE41(iLocal_52, 118, 0);
	unk_0x7FEDD088E489CE41(iLocal_52, 208, 1);
	unk_0xFF467904A8A12BBE(iLocal_101);
	unk_0x3E16CE93BAE616EE(iLocal_52, iLocal_124);
	unk_0xA769A4326FC5BBEA(unk_0x507DA4994C3D8EBD(), 0);
	unk_0x46B6351EE89452C8("rghKidnappers", &iLocal_175);
	unk_0x46B6351EE89452C8("rghVictim", &iLocal_176);
	unk_0xE440546F94B26235(iLocal_52, iLocal_176);
	iLocal_63 = 0;
	while (iLocal_63 <= 1)
	{
		iLocal_53[iLocal_63] = unk_0x7B88529CAE3B7F15(26, iLocal_102, Local_80[iLocal_63 /*3*/], fLocal_97[iLocal_63], 1, 1);
		unk_0x2DC5B31EBB810396(iLocal_53[iLocal_63], 1);
		unk_0x15DE8332B7C67C99(iLocal_53[iLocal_63], 1);
		unk_0x3A1E687904400847(iLocal_53[iLocal_63], 0, 1);
		unk_0xB2B080B88A4144B7(iLocal_53[iLocal_63], 2, 0);
		unk_0xB2B080B88A4144B7(iLocal_53[iLocal_63], 128, 1);
		unk_0x7FEDD088E489CE41(iLocal_53[iLocal_63], 42, 1);
		unk_0x48FFA098B5BE8ED0(iLocal_53[0], 2);
		unk_0x3A1E687904400847(iLocal_53[0], 50, 1);
		unk_0x82BD6614CF6D5ED4(iLocal_53[iLocal_63], 50);
		unk_0xE7962295F4C99484(iLocal_53[iLocal_63], 13);
		unk_0x3C2614E45AB2F499(iLocal_53[iLocal_63], 1);
		unk_0xE440546F94B26235(iLocal_53[iLocal_63], iLocal_175);
		unk_0xFBF796BC19E6FC23(iLocal_53[iLocal_63], unk_0x4D3E68F73B727E49(800, 2000));
		iLocal_63++;
	}
	unk_0xFF467904A8A12BBE(iLocal_103);
	unk_0xFF467904A8A12BBE(iLocal_102);
	unk_0x82BD6614CF6D5ED4(iLocal_53[1], 100);
	unk_0x17851927364BD706(iLocal_53[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	unk_0xCA4EA7D4F6DCCD43(5, iLocal_175, joaat("player"));
	unk_0x3F9EDC2D18464273(iLocal_53[0], joaat("weapon_pistol"), -1, 0, 1);
	unk_0x3F9EDC2D18464273(iLocal_53[1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
	iLocal_57 = unk_0x546974B676313326(iLocal_104, Local_87, fLocal_100, 1, 1);
	unk_0xD90C30D269B19096(iLocal_57);
	unk_0x82A70865B4EF1184(iLocal_57, 3);
	unk_0xE25E46198A369207(iLocal_57, 5, 0, 0);
	unk_0xFF467904A8A12BBE(iLocal_104);
	iLocal_59 = unk_0xCEC985247737A30E(joaat("prop_ld_shovel"), Local_106, 1, 1, 0);
	unk_0xFF467904A8A12BBE(joaat("prop_ld_shovel"));
	uLocal_60[0] = unk_0xCEC985247737A30E(joaat("p_arm_bind_cut_s"), Local_106, 1, 1, 0);
	uLocal_60[1] = unk_0xCEC985247737A30E(joaat("p_arm_bind_cut_s"), Local_106 + Vector(1f, 1f, 1f), 1, 1, 0);
	unk_0xCBE6AC5010E5CE5C(joaat("p_arm_bind_cut_s"));
	unk_0x26030664C7D28388(iLocal_59, iLocal_53[0], unk_0xA8918EDB277FC51C(iLocal_53[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0xF2685765B7BEBCB0(iLocal_53[0], 0, 0, 0, 0);
	unk_0xF2685765B7BEBCB0(iLocal_53[0], 3, 0, 1, 0);
	unk_0xF2685765B7BEBCB0(iLocal_53[0], 4, 1, 0, 0);
	unk_0xF2685765B7BEBCB0(iLocal_53[1], 0, 0, 2, 0);
	unk_0xF2685765B7BEBCB0(iLocal_53[1], 3, 2, 1, 0);
	unk_0xF2685765B7BEBCB0(iLocal_53[1], 4, 1, 1, 0);
	Var0 = { Local_77 };
	Var3 = { -2f, -4f, 18f };
	uLocal_342 = unk_0x1BEDF9ACAEAB15F8(Var0, Var3, 2);
	unk_0x206610E40EE4D7D9(iLocal_52, uLocal_342, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0x763BBCB2253879B8(uLocal_60[0], uLocal_342, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x763BBCB2253879B8(uLocal_60[1], uLocal_342, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x15B365C4645F79B8(uLocal_342, 1);
	unk_0xA1E4BA3B17C6D931(iLocal_52, 1);
	unk_0xEC0A546609840086(iLocal_53[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xEC0A546609840086(iLocal_53[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x857B2B6B54BD2AC3(iLocal_53[0], Local_90, Local_93, 2.75f, 0, 0);
	unk_0x857B2B6B54BD2AC3(iLocal_53[1], Local_90, Local_93, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_134(&uLocal_177, 0, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_134(&uLocal_177, 1, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_134(&uLocal_177, 2, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
	}
	unk_0x454E090239AFF6E8(iLocal_53[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x454E090239AFF6E8(iLocal_53[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x454E090239AFF6E8(iLocal_52, "KIDNAPPEDFEMALE");
	func_134(&uLocal_177, 4, iLocal_53[0], "KIDNAPPER2", 0, 1);
	func_134(&uLocal_177, 3, iLocal_53[1], "KIDNAPPER1", 0, 1);
	func_134(&uLocal_177, 5, iLocal_52, "KIDNAPPEDFEMALE", 0, 1);
}

void func_134(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
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
		unk_0xCD27BF29FB9012E2(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_20() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0xCD27BF29FB9012E2(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, uParam1, iParam3);
	}
}

int func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
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
	uVar0 = Global_2454190[iParam0 /*6*/][func_138(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
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
			return 814;
			break;
		
		case 1:
			return 815;
			break;
		
		case 2:
			return 816;
			break;
		
		case 3:
			return 817;
			break;
		
		case 4:
			return 818;
			break;
		
		case 5:
			return 819;
			break;
		
		case 6:
			return 820;
			break;
		
		case 7:
			return 821;
			break;
		
		case 8:
			return 822;
			break;
		
		case 9:
			return 823;
			break;
		
		case 10:
			return 824;
			break;
		
		case 11:
			return 825;
			break;
		
		case 12:
			return 826;
			break;
		
		case 13:
			return 827;
			break;
		
		case 14:
			return 828;
			break;
		
		case 15:
			return 830;
			break;
		
		case 16:
			return 831;
			break;
		
		case 17:
			return 832;
			break;
		
		case 18:
			return 833;
			break;
		
		case 19:
			return 834;
			break;
		
		case 20:
			return 835;
			break;
		
		case 21:
			return 836;
			break;
		
		case 22:
			return 837;
			break;
		
		case 23:
			return 838;
			break;
		
		case 24:
			return 839;
			break;
		
		case 25:
			return 840;
			break;
		
		case 26:
			return 841;
			break;
		
		case 27:
			return 842;
			break;
		
		case 28:
			return 843;
			break;
		
		case 29:
			return 844;
			break;
		
		case 30:
			return 845;
			break;
		
		case 31:
			return 846;
			break;
		
		case 32:
			return 847;
			break;
		
		case 33:
			return 848;
			break;
		
		case 34:
			return 849;
			break;
		
		case 35:
			return 850;
			break;
		
		case 36:
			return 851;
			break;
		
		case 37:
			return 852;
			break;
		
		case 38:
			return 853;
			break;
		
		case 39:
			return 854;
			break;
		
		case 40:
			return 858;
			break;
		
		case 41:
			return 859;
			break;
		
		case 42:
			return 860;
			break;
		
		case 43:
			return 861;
			break;
		
		default:
			break;
	}
	return 2829;
}

void func_141(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_20() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0x3DBE2A7AF9E71C82(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x61D8FEAF64881CDA(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_20() == 0)
		{
			return unk_0x61D8FEAF64881CDA(func_139(func_140(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_143()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
	{
		uVar0 = unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD());
		if (unk_0xCA8794CE207FC6D5(uVar0, 0))
		{
			iVar1 = unk_0xE634CB9EE7094537(iVar0, 0);
			if (!unk_0x9F94F2CFDCA78C55(iVar1))
			{
				if (iVar1 != unk_0x507DA4994C3D8EBD())
				{
					if (unk_0x73E2404DC70203CD(iVar1))
					{
						if (!unk_0x6E7B0D66F3838319(iVar1, unk_0x507DA4994C3D8EBD()))
						{
							unk_0x8E759206778E571F(iVar1, unk_0x507DA4994C3D8EBD(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_144()
{
	unk_0xCBE6AC5010E5CE5C(iLocal_101);
	unk_0xCBE6AC5010E5CE5C(iLocal_103);
	unk_0xCBE6AC5010E5CE5C(iLocal_102);
	unk_0xCBE6AC5010E5CE5C(iLocal_104);
	unk_0xCBE6AC5010E5CE5C(joaat("prop_ld_shovel"));
	unk_0xCBE6AC5010E5CE5C(joaat("p_arm_bind_cut_s"));
	unk_0x395C5D98343F0040("random@burial");
	unk_0x903BC66D86D2CC1E();
	unk_0xF08CFB68522305B2("ROPE_CUT", 0);
	unk_0x6DBAEBEF2111B0C1("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0xD291857D0C9C7FEC(iLocal_101) && unk_0xD291857D0C9C7FEC(iLocal_103)) && unk_0xD291857D0C9C7FEC(iLocal_102)) && unk_0xD291857D0C9C7FEC(iLocal_104)) && unk_0xD291857D0C9C7FEC(joaat("prop_ld_shovel"))) && unk_0xD291857D0C9C7FEC(joaat("p_arm_bind_cut_s"))) && unk_0xCE40391AB65FE305("random@burial")) && unk_0x09B3E74864C634DA()) && unk_0xF08CFB68522305B2("ROPE_CUT", 0)) && unk_0x6DBAEBEF2111B0C1("RE6_BOTH_DEAD_OS"))
	{
		bLocal_51 = true;
	}
	else
	{
		unk_0xCBE6AC5010E5CE5C(iLocal_101);
		unk_0xCBE6AC5010E5CE5C(iLocal_103);
		unk_0xCBE6AC5010E5CE5C(iLocal_102);
		unk_0xCBE6AC5010E5CE5C(iLocal_104);
		unk_0xCBE6AC5010E5CE5C(joaat("prop_ld_shovel"));
		unk_0xCBE6AC5010E5CE5C(joaat("p_arm_bind_cut_s"));
		unk_0x395C5D98343F0040("random@burial");
		unk_0x903BC66D86D2CC1E();
		unk_0xF08CFB68522305B2("ROPE_CUT", 0);
		unk_0x6DBAEBEF2111B0C1("RE6_BOTH_DEAD_OS");
	}
}

void func_145()
{
	iLocal_101 = joaat("u_f_y_mistress");
	iLocal_102 = joaat("a_m_m_salton_01");
	iLocal_103 = joaat("a_m_m_salton_01");
	iLocal_104 = joaat("bison");
	Local_77 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_96 = 0f;
	Local_80[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_97[0] = 297.0056f;
	Local_80[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_97[1] = 193.3866f;
	Local_87 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_100 = 265.6862f;
	Local_90 = { 164.0896f, 6836.923f, 19.03899f };
	Local_93 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_65 = 1;
}

int func_146()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_157())
		{
			return 0;
		}
	}
	if (func_153())
	{
		return 1;
	}
	if (func_147(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_147(float fParam0, bool bParam1)
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
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (func_33(func_44()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_148(iVar32, &Var0);
					fVar35 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var0.f_6, 1);
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

void func_148(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_149(uParam1, "Abigail1", func_151(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 1:
			func_149(uParam1, "Abigail2", func_151(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 2:
			func_149(uParam1, "Barry1", func_151(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 3:
			func_149(uParam1, "Barry2", func_151(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 4:
			func_149(uParam1, "Barry3", func_151(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 5:
			func_149(uParam1, "Barry3A", func_151(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 6:
			func_149(uParam1, "Barry3C", func_151(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 7:
			func_149(uParam1, "Barry4", func_151(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_150(iParam0), 0, 0);
			break;
		
		case 8:
			func_149(uParam1, "Dreyfuss1", func_151(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 9:
			func_149(uParam1, "Epsilon1", func_151(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 10:
			func_149(uParam1, "Epsilon2", func_151(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 11:
			func_149(uParam1, "Epsilon3", func_151(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 12:
			func_149(uParam1, "Epsilon4", func_151(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 13:
			func_149(uParam1, "Epsilon5", func_151(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 14:
			func_149(uParam1, "Epsilon6", func_151(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 15:
			func_149(uParam1, "Epsilon7", func_151(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 16:
			func_149(uParam1, "Epsilon8", func_151(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 17:
			func_149(uParam1, "Extreme1", func_151(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 18:
			func_149(uParam1, "Extreme2", func_151(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 19:
			func_149(uParam1, "Extreme3", func_151(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 20:
			func_149(uParam1, "Extreme4", func_151(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 21:
			func_149(uParam1, "Fanatic1", func_151(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_150(iParam0), 1, 0);
			break;
		
		case 22:
			func_149(uParam1, "Fanatic2", func_151(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_150(iParam0), 1, 0);
			break;
		
		case 23:
			func_149(uParam1, "Fanatic3", func_151(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_150(iParam0), 0, 1);
			break;
		
		case 24:
			func_149(uParam1, "Hao1", func_151(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_150(iParam0), 0, 1);
			break;
		
		case 25:
			func_149(uParam1, "Hunting1", func_151(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 26:
			func_149(uParam1, "Hunting2", func_151(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 27:
			func_149(uParam1, "Josh1", func_151(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 28:
			func_149(uParam1, "Josh2", func_151(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 29:
			func_149(uParam1, "Josh3", func_151(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 30:
			func_149(uParam1, "Josh4", func_151(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 31:
			func_149(uParam1, "Maude1", func_151(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 32:
			func_149(uParam1, "Minute1", func_151(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 33:
			func_149(uParam1, "Minute2", func_151(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 34:
			func_149(uParam1, "Minute3", func_151(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 35:
			func_149(uParam1, "MrsPhilips1", func_151(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 36:
			func_149(uParam1, "MrsPhilips2", func_151(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 37:
			func_149(uParam1, "Nigel1", func_151(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 38:
			func_149(uParam1, "Nigel1A", func_151(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 39:
			func_149(uParam1, "Nigel1B", func_151(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_150(iParam0), 1, 1);
			break;
		
		case 40:
			func_149(uParam1, "Nigel1C", func_151(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_150(iParam0), 1, 1);
			break;
		
		case 41:
			func_149(uParam1, "Nigel1D", func_151(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_150(iParam0), 1, 1);
			break;
		
		case 42:
			func_149(uParam1, "Nigel2", func_151(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 43:
			func_149(uParam1, "Nigel3", func_151(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 44:
			func_149(uParam1, "Omega1", func_151(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 45:
			func_149(uParam1, "Omega2", func_151(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 46:
			func_149(uParam1, "Paparazzo1", func_151(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 47:
			func_149(uParam1, "Paparazzo2", func_151(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 48:
			func_149(uParam1, "Paparazzo3", func_151(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 49:
			func_149(uParam1, "Paparazzo3A", func_151(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 50:
			func_149(uParam1, "Paparazzo3B", func_151(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 51:
			func_149(uParam1, "Paparazzo4", func_151(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 52:
			func_149(uParam1, "Rampage1", func_151(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 54:
			func_149(uParam1, "Rampage3", func_151(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 55:
			func_149(uParam1, "Rampage4", func_151(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 56:
			func_149(uParam1, "Rampage5", func_151(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 53:
			func_149(uParam1, "Rampage2", func_151(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 57:
			func_149(uParam1, "TheLastOne", func_151(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 58:
			func_149(uParam1, "Tonya1", func_151(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 59:
			func_149(uParam1, "Tonya2", func_151(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 60:
			func_149(uParam1, "Tonya3", func_151(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 61:
			func_149(uParam1, "Tonya4", func_151(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 62:
			func_149(uParam1, "Tonya5", func_151(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_149(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_150(int iParam0)
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

struct<2> func_151(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_152(iParam0) };
	if (unk_0x8FA72E132AAFA62F(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_152(int iParam0)
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

int func_153()
{
	if (func_156() && !func_157())
	{
		return 1;
	}
	if (func_155() && func_154())
	{
		return 1;
	}
	return 0;
}

bool func_154()
{
	return Global_96891 > 0;
}

int func_155()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_156()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_157()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0xE6BC404A1178AB93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_158()
{
	if (!func_118(5))
	{
		return 1;
	}
	if (func_153())
	{
		return 1;
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_157())
		{
			return 0;
		}
	}
	if (func_147(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_159()
{
	if ((Global_97162 == func_39() && unk_0x7BCE01926E77105A()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_162(iParam0);
	unk_0x4F2CE8E787B36129(0);
	unk_0xD50D943D0D4E5EF1(1);
	Global_97159 = 0;
	func_161();
}

void func_161()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			unk_0x941F924D5E9C2140(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)), 1);
		}
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
	}
}

void func_162(int iParam0)
{
	Global_97162 = iParam0;
}

int func_163(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
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
		if (!func_204())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_157())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_153())
		{
			return 0;
		}
		if (func_203())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_147(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_202(iParam3))
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_201(func_44()) == 4 || func_201(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_200(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_199(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xF976C624234A4AA8() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_198())
		{
			return 0;
		}
		if (unk_0x4E6BA6FF244D94A8())
		{
			return 0;
		}
		if (unk_0x7BCE01926E77105A())
		{
			return 0;
		}
		if (!func_189(4))
		{
			return 0;
		}
		if (!func_118(5))
		{
			return 0;
		}
		if (func_188(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x93AF5BB44F9A2E1B(unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD())))
		{
			if ((unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(377.153f, -717.567f, 10.0536f) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(320.9934f, 265.2515f, 82.1221f)) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_188(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_202(30) && !func_188(30, 0))
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
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_187(iVar8))
				{
					if (func_165(iVar4))
					{
						if (!func_164(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var5) < (210f * 210f))
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

bool func_164(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_166(iVar0);
}

int func_166(int iParam0)
{
	return func_167(iParam0, 1);
}

int func_167(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_187(iParam0))
	{
		return 0;
	}
	func_168(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_168(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_169(func_180(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_169(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_179(iParam0, iParam1))
	{
		iVar0 = func_178(iParam1);
		iVar1 = func_176(iParam0);
		iVar2 = (func_176(iParam0) - func_176(iParam1));
		iVar3 = (func_178(iParam0) - func_178(iParam1));
		iVar4 = (func_175(iParam0) - func_175(iParam1));
		iVar5 = (func_174(iParam0) - func_174(iParam1));
		iVar6 = (func_173(iParam0) - func_173(iParam1));
		iVar7 = (func_172(iParam0) - func_172(iParam1));
	}
	else
	{
		iVar0 = func_178(iParam0);
		iVar1 = func_176(iParam1);
		iVar2 = (func_176(iParam1) - func_176(iParam0));
		iVar3 = (func_178(iParam1) - func_178(iParam0));
		iVar4 = (func_175(iParam1) - func_175(iParam0));
		iVar5 = (func_174(iParam1) - func_174(iParam0));
		iVar6 = (func_173(iParam1) - func_173(iParam0));
		iVar7 = (func_172(iParam1) - func_172(iParam0));
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
		iVar4 = (iVar4 + func_171(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_170(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_170(float fParam0, float fParam1, float fParam2)
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

int func_171(int iParam0, int iParam1)
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

int func_172(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_173(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_174(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_175(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_176(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_177(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(int iParam0)
{
	return iParam0 & 15;
}

int func_179(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_187(iParam1) || !func_187(iParam0))
	{
		return 1;
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
	iVar0 = func_178(iParam0);
	iVar1 = func_178(iParam1);
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
	return 0;
}

int func_180()
{
	var uVar0;
	
	func_186(&uVar0, unk_0x2784A8234E9B4202());
	func_185(&uVar0, unk_0x06F66CEDC24218A4());
	func_184(&uVar0, unk_0xE76C684D1C903A71());
	func_183(&uVar0, unk_0xA277D6C04B4B44C8());
	func_182(&uVar0, unk_0x1285C2DD1E4945FF());
	func_181(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

void func_181(var uParam0, int iParam1)
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

void func_182(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_183(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_176(*uParam0);
	if (iParam1 < 1 || iParam1 > func_171(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_186(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_187(int iParam0)
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
	iVar0 = func_172(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_173(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_174(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_176(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_178(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_175(iParam0);
	if (iVar5 < 1 || iVar5 > func_171(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_188(int iParam0, int iParam1)
{
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)
{
	int iVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
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
						if (((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_197()) || Global_96220) || Global_24446) || func_196()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1) || func_197()) || Global_24446) || func_196()) || func_78(8, -1)) || func_193()) || func_195()) || func_194()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_197()) || Global_96220) || Global_24446) || func_196()) || func_78(8, -1)) || func_193()) || func_195()) || func_194()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_197()) || Global_96220) || Global_24446) || func_196()) || func_78(8, -1)) || func_195()) || func_194()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_197() || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || func_78(8, -1)) || func_192()) || func_191()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_195()) || func_194()) || func_191()) || func_190())
						{
							return 0;
						}
						if ((unk_0xA4ADA92842355D33() && unk_0x4B08838D3C4A40AA() != 3) && unk_0x34F66A7928F4DB93() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
						{
							if ((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_197()) || Global_24446) || func_196()) || func_78(8, -1)) || func_194()) || func_193()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || func_197()) || func_194()) || Global_96220) || Global_24446) || func_196()) || Global_35953) || func_78(8, -1)) || func_193()) || func_191()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_197()) || Global_96220) || Global_24446) || func_196()) || func_78(8, -1)) || func_193()) || func_191()) || func_195()) || func_194()) || func_192())
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

var func_190()
{
	return Global_89823.f_1;
}

int func_191()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_192()
{
	if (unk_0x25531002BCF0D968(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_193()
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

bool func_194()
{
	return Global_89836.f_291 > 0;
}

bool func_195()
{
	return Global_89836.f_290 > 0;
}

var func_196()
{
	return Global_1315898;
}

int func_197()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_198()
{
	func_76();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_199(int iParam0)
{
	return func_179(func_180(), iParam0);
}

int func_200(int iParam0, int iParam1, int iParam2)
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

int func_201(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_202(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_204())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_203()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (unk_0xCA8794CE207FC6D5(uVar0, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0xE634CB9EE7094537(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_205()
{
	int iVar0;
	
	if (iLocal_161)
	{
		func_218(0);
		unk_0x8473059B7180712A();
		unk_0x12B3DEDD1DB99EFA("RE6_BOTH_DEAD_OS");
		if (iLocal_144 || iLocal_164)
		{
			if (Global_24682)
			{
				unk_0xF74C93D9036BCC1E("AC_STOP");
			}
			else
			{
				unk_0xF74C93D9036BCC1E("RE6_END");
			}
		}
		func_217();
		unk_0xCA4EA7D4F6DCCD43(255, iLocal_176, joaat("player"));
		unk_0xCA4EA7D4F6DCCD43(255, joaat("player"), iLocal_176);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_52))
			{
				unk_0x7FEDD088E489CE41(iLocal_52, 317, 1);
				if (!unk_0x2A24448FF232F834(iLocal_52, 0))
				{
					unk_0xBC8F72DD87BC210F(iLocal_52);
				}
				if (unk_0xBE55B130951EF5CA(iLocal_52))
				{
					unk_0xA2A854DDCAB3A06F(iLocal_52);
				}
				unk_0x2DC5B31EBB810396(iLocal_52, 0);
				unk_0x6A750A31D18DA81A(iLocal_52, 1);
			}
			else if (!unk_0xE5D56342B0FF1D0D(iLocal_52))
			{
				unk_0x5E3892A28C879327(iLocal_52, 1);
				unk_0x898359B91EB2E0B1(iLocal_52, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_53)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_53[iVar0]) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				unk_0xDC06C29AA1C2E756(iLocal_53[iVar0]);
				if (iLocal_68 || iLocal_75)
				{
					unk_0x247B2966C6C2A4C1(iLocal_53[iVar0], unk_0x507DA4994C3D8EBD(), 0, 16);
				}
				else
				{
					unk_0xA859D289EEB2D72A(iLocal_53[iVar0], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
					func_103();
				}
				unk_0xA1E4BA3B17C6D931(iLocal_53[iVar0], 1);
			}
			iVar0++;
		}
		unk_0x4095FD029041DD48(&(uLocal_60[0]));
		unk_0x4095FD029041DD48(&(uLocal_60[1]));
		if (unk_0xFD68187442384158(iLocal_57))
		{
			unk_0xB67623A401171555(&iLocal_57);
		}
		if (unk_0xFD68187442384158(iLocal_59))
		{
			if (unk_0xDF75DAAACD32E49E(iLocal_59))
			{
				unk_0x5B97F41A7BE54877(iLocal_59, 1, 1);
			}
			unk_0x05DADA1340CBB893(&iLocal_59);
		}
		if (unk_0xD361727124133DF3(uLocal_162))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_162);
		}
		iLocal_63 = 0;
		while (iLocal_63 <= 1)
		{
			if (unk_0xD361727124133DF3(uLocal_110[iLocal_63]))
			{
				unk_0xA0A65B537B1F11EC(&(uLocal_110[iLocal_63]));
			}
			iLocal_63++;
		}
		if (unk_0xD361727124133DF3(uLocal_113))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_113);
		}
		if (unk_0x17D71902CA06091B(uLocal_76))
		{
			unk_0x44151B6071157DDD(uLocal_76, 0);
		}
		unk_0xB8265112BB26591B(5, 1);
		unk_0xB8265112BB26591B(3, 1);
		unk_0xA54C914AEB391F49(1f);
		unk_0xC198E0954F22A27D(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 1, 1);
	}
	func_206(-1);
	unk_0x883793591E631A3B();
}

void func_206(int iParam0)
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
	if (func_159())
	{
		func_210(iParam0);
		unk_0xAABDA3B6E57B068A(0, 0);
		Global_97164 = unk_0xF976C624234A4AA8();
		func_209(30000);
		StringCopy(&cVar0, func_208(Global_97162, 1), 64);
		if (func_38(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x7D8C98CDE178AB1B(&cVar0, Global_97159, (unk_0xF976C624234A4AA8() - Global_97160), 0);
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xCD27BF29FB9012E2(&Global_97169, 0);
	}
	func_207(&Global_24503);
	Global_97163 = 0;
	func_162(-1);
}

void func_207(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

char* func_208(int iParam0, bool bParam1)
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

void func_209(int iParam0)
{
	Global_35460 = (unk_0xF976C624234A4AA8() + iParam0);
}

void func_210(int iParam0)
{
	func_211(iParam0, 0, func_216(iParam0));
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_180();
	func_214(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_213(iParam0, &uVar0);
	Var1 = { func_212(&uVar0) };
}

struct<16> func_212(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar16 = func_172(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_175(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_178(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_176(*uParam0), 64);
	return Var0;
}

void func_213(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_214(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_176(*uParam0);
	iVar1 = func_178(*uParam0);
	iVar2 = func_175(*uParam0);
	iVar3 = func_174(*uParam0);
	iVar4 = func_173(*uParam0);
	iVar5 = func_172(*uParam0);
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
	iVar6 = func_171(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_171(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_215(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_186(uParam0, iParam1);
	func_185(uParam0, iParam2);
	func_184(uParam0, iParam3);
	func_183(uParam0, iParam4);
	func_182(uParam0, iParam5);
	func_181(uParam0, iParam6);
}

int func_216(int iParam0)
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

void func_217()
{
	Global_24678 = 0;
	Global_24679 = 0;
	Global_24681 = 0;
	Global_24682 = 0;
	Global_24683 = 0;
}

void func_218(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_135(iVar0, bParam0);
		iVar0++;
	}
}

