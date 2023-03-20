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
	if (unk_0xC11469DCA6FC3BB5(11))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_52))
		{
			if (unk_0x5D6C6BD519D63337(iLocal_52))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_52);
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
		unk_0x5E8B6D17FF91CD59();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x4F4FF2F3B81506A7() || iLocal_130)
		{
			if (!func_159())
			{
				if (func_158())
				{
					func_205();
				}
			}
			unk_0xCBBDAEEE9AB391E3("RE_BU", 0);
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
					if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
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
											if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_77, 50f, 35f, 50f, 0, 1, 0))
											{
												func_123();
											}
											if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_77, 80f, 65f, 50f, 0, 1, 0))
											{
												func_122();
											}
											if (!unk_0x7D5B1F88E7504BBA(iLocal_57))
											{
												if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, 1, 0) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_87 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0, 1, 0))
												{
													func_121();
													if (unk_0xCD82FA174080B3B1(uLocal_113))
													{
														unk_0x8BB337CC6CD674F2(uLocal_113, 0);
													}
													iLocal_63 = 0;
													while (iLocal_63 <= 1)
													{
														if (unk_0xCD82FA174080B3B1(uLocal_110[iLocal_63]))
														{
															unk_0x8BB337CC6CD674F2(uLocal_110[iLocal_63], 0);
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
									if (unk_0xCD82FA174080B3B1(uLocal_113))
									{
										unk_0x8BB337CC6CD674F2(uLocal_113, 1);
									}
									iLocal_63 = 0;
									while (iLocal_63 <= 1)
									{
										if (unk_0xCD82FA174080B3B1(uLocal_110[iLocal_63]))
										{
											unk_0x8BB337CC6CD674F2(uLocal_110[iLocal_63], 1);
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
									if (unk_0xCD82FA174080B3B1(uLocal_113))
									{
										unk_0x8BB337CC6CD674F2(uLocal_113, 1);
									}
									iLocal_63 = 0;
									while (iLocal_63 <= 1)
									{
										if (unk_0xCD82FA174080B3B1(uLocal_110[iLocal_63]))
										{
											unk_0x8BB337CC6CD674F2(uLocal_110[iLocal_63], 1);
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
												if (!unk_0x6CFF81397164A1D3(iLocal_53[0]))
												{
													func_101(iLocal_53[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x6CFF81397164A1D3(iLocal_53[1]))
												{
													func_101(iLocal_53[1], "GENERIC_WAR_CRY", 24);
												}
												func_111();
												break;
											
											case 6:
												func_103();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x6CFF81397164A1D3(iLocal_53[0]))
												{
													func_101(iLocal_53[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x6CFF81397164A1D3(iLocal_53[1]))
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
											if (!unk_0x6CFF81397164A1D3(iLocal_53[iVar0]))
											{
												unk_0x69FA1DA03568499C(iLocal_53[iVar0], 5, 0, 0);
												unk_0x06C6AD4F38E8412D(iLocal_53[iVar0], unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
												unk_0x2AD4789CBFD829EC(iLocal_53[iVar0], 1);
												if (unk_0xD42BD6EB2E0F1677(iLocal_59))
												{
													if (unk_0xEE6AD63ABF59C0B7(iLocal_59))
													{
														unk_0x64CDE9D6BF8ECAD3(iLocal_59, 1, 1);
													}
												}
												if (unk_0xCD82FA174080B3B1(uLocal_110[iVar0]))
												{
													unk_0xF2C3C9DA47AAA54A(&(uLocal_110[iVar0]));
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
								if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_106, 100f, 100f, 100f, 1, 1, 0))
								{
									unk_0xD7FA719CB54866C2(1f);
									if (unk_0xD42BD6EB2E0F1677(iLocal_53[0]) && unk_0xD42BD6EB2E0F1677(iLocal_53[1]))
									{
										unk_0xEB7C3FF98F454165(&(iLocal_53[0]));
										unk_0xEB7C3FF98F454165(&(iLocal_53[1]));
									}
								}
								if (!unk_0xD42BD6EB2E0F1677(iLocal_56))
								{
									if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_138, 200f, 200f, 200f, 1, 1, 0))
									{
										unk_0xFA28FE3A6246FC30(joaat("s_m_m_highsec_01"));
										unk_0xFA28FE3A6246FC30(joaat("granger"));
										if (unk_0x1283B8B89DD5D1B6(joaat("s_m_m_highsec_01")) && unk_0x1283B8B89DD5D1B6(joaat("granger")))
										{
											iLocal_58 = unk_0xF757863E1E2D8F12(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, 1);
											unk_0x5FB407F0A7C877BF(iLocal_58, 200);
											unk_0x5F5E2B1B9EAECC0F(iLocal_58, 1.5f);
											iLocal_56 = unk_0x63FC6DA06F97F02C(iLocal_58, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
											unk_0x584EEBEECD248926(iLocal_56, 0, 0, 2, 0);
											unk_0x584EEBEECD248926(iLocal_56, 3, 0, 0, 0);
											unk_0x584EEBEECD248926(iLocal_56, 4, 0, 0, 0);
											unk_0x5F07E4B73A7FA39C(iLocal_56, joaat("weapon_pistol"), -1, 1, 1);
											unk_0x6ECBACF91786FB7A(iLocal_56, iLocal_176);
										}
									}
								}
								if (!unk_0x6CFF81397164A1D3(iLocal_52))
								{
									if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
									{
										if (unk_0xA9C55F1C15E62E06(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)) < 1)
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
									if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_138, Global_21, 1, 1, 0) && unk_0xC057F02B837A27F6(iLocal_52, unk_0x096275889B8E0EE0(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0x5D6C6BD519D63337(iLocal_52))
										{
											if (unk_0xCD82FA174080B3B1(uLocal_136))
											{
												unk_0xF2C3C9DA47AAA54A(&uLocal_136);
											}
											if (unk_0xCD82FA174080B3B1(uLocal_137))
											{
												unk_0xF2C3C9DA47AAA54A(&uLocal_137);
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
								if (unk_0xD42BD6EB2E0F1677(iLocal_59))
								{
									if (unk_0xEE6AD63ABF59C0B7(iLocal_59))
									{
										if (!unk_0x6CFF81397164A1D3(iLocal_53[0]))
										{
											if (unk_0xDEE49D5CA6C49148(iLocal_53[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0x64CDE9D6BF8ECAD3(iLocal_59, 1, 1);
												}
											}
											else
											{
												unk_0x64CDE9D6BF8ECAD3(iLocal_59, 1, 1);
											}
										}
									}
								}
								if (unk_0x6CFF81397164A1D3(iLocal_53[0]) || unk_0x6CFF81397164A1D3(iLocal_53[1]))
								{
									bLocal_146 = true;
								}
								if (bLocal_146)
								{
									if (unk_0xB86D29B10F627379(iLocal_57, 0))
									{
										if (!unk_0x6CFF81397164A1D3(iLocal_53[0]))
										{
											unk_0x9C7D603CBFC4C591(iLocal_53[0]);
											if (unk_0x80DDCCB2F4A3EB57(iLocal_53[0], iLocal_57, -1, 0, 0) || unk_0x80DDCCB2F4A3EB57(iLocal_53[0], iLocal_57, 0, 0, 0))
											{
												if (!iLocal_163)
												{
													unk_0x0F1ABE64C3C18E5A(iLocal_53[0]);
													if (unk_0xD42BD6EB2E0F1677(iLocal_59))
													{
														if (unk_0xEE6AD63ABF59C0B7(iLocal_59))
														{
															unk_0x64CDE9D6BF8ECAD3(iLocal_59, 1, 1);
														}
													}
													unk_0xF4BF3E3D7FE56705(&uLocal_64);
													unk_0x939C1E5F1840360D(0);
													unk_0x82B8B9AEEB7D5048(0, unk_0xC899C78DB72CCBCC(iLocal_57, -0.5f, 0.5f, 0f), unk_0x096275889B8E0EE0(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0x12C24A48BF610759(0, iLocal_57, -1, -1, 3f, 9, 0);
													unk_0x8B5A576784E393A4(0, iLocal_57, unk_0x096275889B8E0EE0(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0xFF7E39890B2840DD(uLocal_64);
													unk_0xD59C10966EB589EA(iLocal_53[0], uLocal_64);
													unk_0x5EC7E18324A7D03D(&uLocal_64);
													unk_0x2AD4789CBFD829EC(iLocal_53[0], 1);
													unk_0x0723A01D741CF31D(iLocal_57, 1);
													iLocal_163 = 1;
												}
												else if (unk_0x04932A97CB319DE0(iLocal_53[0], 242628503) == 1)
												{
													if (unk_0x25E686EB2B4BE2B7(iLocal_53[0]) == 3)
													{
														if (!unk_0xC057F02B837A27F6(iLocal_53[0], unk_0x096275889B8E0EE0(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x5E58342602E94718(iLocal_53[0], Local_87, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0xEB7C3FF98F454165(&(iLocal_53[0]));
														}
													}
												}
											}
											else
											{
												unk_0xD46E4661E977AEE0(iLocal_53[0], unk_0x096275889B8E0EE0(), 0, 16);
												unk_0x2AD4789CBFD829EC(iLocal_53[0], 1);
											}
										}
										if (!unk_0x6CFF81397164A1D3(iLocal_53[1]))
										{
											unk_0x9C7D603CBFC4C591(iLocal_53[1]);
											if (unk_0x80DDCCB2F4A3EB57(iLocal_53[1], iLocal_57, -1, 0, 0) || unk_0x80DDCCB2F4A3EB57(iLocal_53[1], iLocal_57, 0, 0, 0))
											{
												if (!iLocal_163)
												{
													unk_0x0F1ABE64C3C18E5A(iLocal_53[1]);
													unk_0xF4BF3E3D7FE56705(&uLocal_64);
													unk_0x939C1E5F1840360D(0);
													unk_0x82B8B9AEEB7D5048(0, unk_0xC899C78DB72CCBCC(iLocal_57, -0.5f, 0.5f, 0f), unk_0x096275889B8E0EE0(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0x12C24A48BF610759(0, iLocal_57, -1, -1, 3f, 9, 0);
													unk_0x8B5A576784E393A4(0, iLocal_57, unk_0x096275889B8E0EE0(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0xFF7E39890B2840DD(uLocal_64);
													unk_0xD59C10966EB589EA(iLocal_53[1], uLocal_64);
													unk_0x5EC7E18324A7D03D(&uLocal_64);
													unk_0x2AD4789CBFD829EC(iLocal_53[1], 1);
													unk_0x0723A01D741CF31D(iLocal_57, 1);
													iLocal_163 = 1;
												}
												else if (unk_0x04932A97CB319DE0(iLocal_53[1], 242628503) == 1)
												{
													if (unk_0x25E686EB2B4BE2B7(iLocal_53[1]) == 3)
													{
														if (!unk_0xC057F02B837A27F6(iLocal_53[1], unk_0x096275889B8E0EE0(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x5E58342602E94718(iLocal_53[1], Local_87, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0xEB7C3FF98F454165(&(iLocal_53[1]));
														}
													}
												}
											}
											else
											{
												unk_0xD46E4661E977AEE0(iLocal_53[1], unk_0x096275889B8E0EE0(), 0, 16);
												unk_0x2AD4789CBFD829EC(iLocal_53[1], 1);
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
							if (!unk_0x6CFF81397164A1D3(iLocal_52))
							{
								if (unk_0x5E58342602E94718(iLocal_52, Local_141, 5f, 5f, 5f, 0, 1, 0))
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
							if (unk_0xD42BD6EB2E0F1677(iLocal_52))
							{
								unk_0xCC0EF140F99365C5(&iLocal_52);
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
								unk_0xF27F981A5EBAEFDB("RE6_BOTH_DEAD");
								if (!iLocal_73)
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_105 = unk_0x4F67E8ECA7D3F667() + 8500;
									iLocal_73 = 1;
								}
								if (!unk_0x6CFF81397164A1D3(iLocal_52))
								{
									if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_52, 20f, 20f, 20f, 0, 1, 1))
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
							if (!unk_0x6CFF81397164A1D3(iLocal_52))
							{
								if (!bLocal_129)
								{
									if (unk_0x04932A97CB319DE0(iLocal_52, 1785177548) != 1 && unk_0x04932A97CB319DE0(iLocal_52, 1785177548) != 0)
									{
										unk_0xFA8B88A1EF049B33(iLocal_52);
										uLocal_342 = unk_0x4D3B117F889EADDA(Local_77, -2f, -4f, 18f, 2);
										unk_0x3605588B4955CFAF(iLocal_52, uLocal_342, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0xCF307902D4A3A68C(uLocal_60[0], uLocal_342, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xCF307902D4A3A68C(uLocal_60[1], uLocal_342, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x074C419F65D01DE7(uLocal_342, 1);
										unk_0x2AD4789CBFD829EC(iLocal_52, 1);
									}
									if (unk_0x1BD7C371CE257C3E(iLocal_52))
									{
										unk_0x0778FFC4C3BCCA8A(iLocal_52, 1);
										unk_0x0125579249DAB847(iLocal_52, 1);
										unk_0xB25E22832517B44E(iLocal_52, 0);
									}
								}
								if ((unk_0x73BB763880CD23A6(iLocal_52) || unk_0x695D7C26DE65C423(iLocal_52)) || (iLocal_124 - unk_0x82368787EA73C0F7(iLocal_52)) >= 50)
								{
									unk_0x0778FFC4C3BCCA8A(iLocal_52, 1);
									unk_0x0125579249DAB847(iLocal_52, 1);
									unk_0xB25E22832517B44E(iLocal_52, 0);
								}
								if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && !unk_0x7D5B1F88E7504BBA(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)))
								{
									if (unk_0xFB6BA510A533DF81(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)) < 5f)
									{
									}
									else if (unk_0x9A2304A64C3C8423(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), iLocal_52))
									{
										unk_0x0778FFC4C3BCCA8A(iLocal_52, 1);
										unk_0x0125579249DAB847(iLocal_52, 1);
										unk_0xB25E22832517B44E(iLocal_52, 0);
									}
								}
								if (!unk_0x7D5B1F88E7504BBA(iLocal_57))
								{
									if (unk_0x9A2304A64C3C8423(iLocal_57, iLocal_52))
									{
										unk_0x0778FFC4C3BCCA8A(iLocal_52, 1);
										unk_0x0125579249DAB847(iLocal_52, 1);
										unk_0xB25E22832517B44E(iLocal_52, 0);
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
		if (!unk_0xD42BD6EB2E0F1677(iLocal_53[0]) && !unk_0xD42BD6EB2E0F1677(iLocal_53[1]))
		{
			return 1;
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_53[0]) && unk_0xD42BD6EB2E0F1677(iLocal_53[1]))
		{
			if (unk_0x6CFF81397164A1D3(iLocal_53[0]) && unk_0x6CFF81397164A1D3(iLocal_53[1]))
			{
				return 1;
			}
			if (unk_0x3F8C39449D4EA8F6(iLocal_53[0]) && unk_0x3F8C39449D4EA8F6(iLocal_53[1]))
			{
				return 1;
			}
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_53[0]) && !unk_0xD42BD6EB2E0F1677(iLocal_53[1]))
		{
			if (unk_0x6CFF81397164A1D3(iLocal_53[0]))
			{
				return 1;
			}
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_53[1]) && !unk_0xD42BD6EB2E0F1677(iLocal_53[0]))
		{
			if (unk_0x6CFF81397164A1D3(iLocal_53[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0x6CFF81397164A1D3(iLocal_53[0]))
	{
		if (unk_0xCD82FA174080B3B1(uLocal_110[0]))
		{
			if (unk_0xD42BD6EB2E0F1677(iLocal_59))
			{
				if (unk_0xEE6AD63ABF59C0B7(iLocal_59))
				{
					unk_0x64CDE9D6BF8ECAD3(iLocal_59, 1, 1);
				}
			}
			func_3(&uLocal_177, 4);
			unk_0xF2C3C9DA47AAA54A(&(uLocal_110[0]));
		}
	}
	if (unk_0x6CFF81397164A1D3(iLocal_53[1]))
	{
		if (unk_0xCD82FA174080B3B1(uLocal_110[1]))
		{
			func_3(&uLocal_177, 3);
			unk_0xF2C3C9DA47AAA54A(&(uLocal_110[1]));
		}
	}
	if (unk_0x6CFF81397164A1D3(iLocal_52))
	{
		if (!unk_0x7D5B1F88E7504BBA(iLocal_52))
		{
		}
		if (unk_0xCD82FA174080B3B1(uLocal_113))
		{
			func_3(&uLocal_177, 5);
			unk_0xF2C3C9DA47AAA54A(&uLocal_113);
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
	unk_0xF27F981A5EBAEFDB("RE6_END");
	func_205();
}

int func_5()
{
	if (unk_0x6CFF81397164A1D3(iLocal_52))
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
	Global_97339 = iParam0;
}

void func_8(int iParam0)
{
	Global_16703 = iParam0;
}

int func_9()
{
	if (Global_97353.f_28192.f_5 == 1000)
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
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_53[0]) || !unk_0x6CFF81397164A1D3(iLocal_53[1]))
		{
			if (!func_12())
			{
				switch (iLocal_167)
				{
					case 0:
						if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
						{
							if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(3500, 5000));
								iLocal_167++;
							}
						}
						break;
					
					case 1:
						if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
						{
							if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(3500, 5000));
								iLocal_167++;
							}
						}
						break;
					
					case 2:
						if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
						{
							if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(3500, 5000));
								iLocal_167++;
							}
						}
						break;
					
					case 3:
						if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
						{
							if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(3500, 5000));
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
	if (Global_15692 != 0 || unk_0x200E87988220C592())
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
	unk_0xECB87DE18F50911C(unk_0x217E9DC48139933D(), 1);
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
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
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
			Global_97353.f_28192.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_7(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
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
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_21(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_20() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
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
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
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
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_23()
{
	return Global_1312737;
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
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD3852F22AB713A1F(sParam0, ""))
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
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0xD3852F22AB713A1F(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (unk_0x4F67E8ECA7D3F667() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((unk_0x4F67E8ECA7D3F667() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_97353.f_1729.f_539.f_3213)
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
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_35(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_34(unk_0x096275889B8E0EE0());
			if (func_33(iVar0) && (!func_32(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_33(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_32(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
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
		return Global_97353.f_29774[iParam0 /*29*/];
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
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_28192.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x8F77B33B6A34D8BA(), 64);
	uVar16 = func_40(Var0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFD340785ADF8CFB7(&cParam0))
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
		if (unk_0x4ED6CFDFE8D4131A(iParam2, iParam3))
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
	if (Global_97353.f_5944.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_97353.f_5944.f_911 == Var0.f_0)
		{
			Global_97353.f_5944.f_911 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x4F67E8ECA7D3F667() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x7D1D4A3602B6AD4E(&(Var0.f_1), 1);
		unk_0x7D1D4A3602B6AD4E(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xF73FBE4845C43B5B(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xF73FBE4845C43B5B(&(Var0.f_1), 10);
		}
		Global_97353.f_5944[Global_97353.f_5944.f_136 /*15*/] = { Var0 };
		Global_97353.f_5944.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(iParam2, iVar15))
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
	while (iVar0 < Global_97353.f_5944.f_136)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_5944[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_97353.f_5944[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_97353.f_5944[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_97353.f_5944.f_764)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_5944.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_97353.f_5944.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_97353.f_5944.f_919[iParam0] = iVar1;
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
	return Global_97353.f_1729.f_539.f_3213;
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
			if (!unk_0x6CFF81397164A1D3(iLocal_52) && unk_0xB86D29B10F627379(iLocal_58, 0))
			{
				if (unk_0x5D6C6BD519D63337(iLocal_52))
				{
					unk_0x5BEB6DE8CD28F036(iLocal_52);
				}
				unk_0x49876BF356F39E66(iLocal_52, 0);
				unk_0x5E95290AF8605EA1(iLocal_52, 1);
				unk_0xF4BF3E3D7FE56705(&uLocal_64);
				unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 5000, 2048, 2);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 0);
				unk_0x12C24A48BF610759(0, iLocal_58, -1, 0, 1f, 1, 0);
				unk_0xFF7E39890B2840DD(uLocal_64);
				unk_0xD59C10966EB589EA(iLocal_52, uLocal_64);
				unk_0x5EC7E18324A7D03D(&uLocal_64);
				unk_0x2AD4789CBFD829EC(iLocal_52, 1);
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_135++;
			break;
		
		case 1:
			if (unk_0xB86D29B10F627379(iLocal_58, 0))
			{
				if (unk_0x9C8E4D238C999648(iLocal_52, iLocal_58, 0))
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_56))
					{
						unk_0x02C53261E93C1B87(iLocal_56, iLocal_57, 10f, 786599);
						unk_0x2AD4789CBFD829EC(iLocal_56, 1);
					}
					unk_0x0723A01D741CF31D(iLocal_58, 1);
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
			unk_0x9E0FEFE102840007(255, iLocal_176, joaat("player"));
			unk_0x9E0FEFE102840007(255, joaat("player"), iLocal_176);
			if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
			{
				unk_0x334357D0C82BAE3D(unk_0x2F96E7720B0B19EA(), 5f, 2, 0);
				if (!unk_0x6CFF81397164A1D3(iLocal_52) && unk_0xB86D29B10F627379(iLocal_58, 0))
				{
					if (unk_0x5D6C6BD519D63337(iLocal_52))
					{
						unk_0x5BEB6DE8CD28F036(iLocal_52);
					}
					unk_0x49876BF356F39E66(iLocal_52, 0);
					unk_0x5E95290AF8605EA1(iLocal_52, 1);
					unk_0xF4BF3E3D7FE56705(&uLocal_64);
					unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 5000, 2048, 2);
					unk_0x12C24A48BF610759(0, iLocal_58, -1, 0, 1f, 1, 0);
					unk_0xFF7E39890B2840DD(uLocal_64);
					unk_0xD59C10966EB589EA(iLocal_52, uLocal_64);
					unk_0x5EC7E18324A7D03D(&uLocal_64);
					unk_0x2AD4789CBFD829EC(iLocal_52, 1);
					func_103();
					unk_0x4EDE34FBADD967A6(0);
					func_70(&uLocal_177, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2700);
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
			iLocal_135++;
			break;
		
		case 1:
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && !unk_0x2B4DCDD8F91771D2(unk_0x096275889B8E0EE0()))
			{
				if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
				{
					if (!unk_0x569AC305E3306447(unk_0x2F96E7720B0B19EA(), 1))
					{
						if (unk_0xDE60142BF675A2AA(unk_0x2F96E7720B0B19EA(), 1) > 0.1f)
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
			if (unk_0xB86D29B10F627379(iLocal_58, 0))
			{
				if (unk_0x9C8E4D238C999648(iLocal_52, iLocal_58, 0))
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_56))
					{
						unk_0x02C53261E93C1B87(iLocal_56, iLocal_58, 10f, 786599);
						unk_0x2AD4789CBFD829EC(iLocal_56, 1);
					}
					unk_0x0723A01D741CF31D(iLocal_58, 1);
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
	
	if (unk_0xF4D8BCD052E7EA1B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		if (!unk_0x08B96A437661F1BC(unk_0x096275889B8E0EE0()))
		{
			return 0;
		}
		iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (bParam0)
		{
			if (unk_0x7D5B1F88E7504BBA(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x7D5B1F88E7504BBA(iVar0))
			{
				if (unk_0xD214895E39AA3787(iVar0, -1) != unk_0x096275889B8E0EE0())
				{
					return 0;
				}
			}
		}
		if (!unk_0x7D5B1F88E7504BBA(iVar0))
		{
			if (unk_0x56398BE65160C3BE(iVar0) < 0.95f || unk_0x56398BE65160C3BE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()))
	{
		return 0;
	}
	if (!unk_0x2DF170B1185AF777(unk_0x217E9DC48139933D()))
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
			if (unk_0x0BE7F4E3CDBAFB28(-1014.154f, 4881.411f, 245.0001f, unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4()), 0), 1) < 400f)
			{
				if (!Global_24683)
				{
					unk_0xF27F981A5EBAEFDB("AC_EN_ROUTE_CULT");
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
				unk_0xF27F981A5EBAEFDB("AC_LEFT_AREA");
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
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Param0) > (fLocal_46 + 200f) || unk_0x0BE7F4E3CDBAFB28(-1014.154f, 4881.411f, 245.0001f, unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4()), 0), 1) < 400f)
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
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			unk_0x121389EDF3165EFB(iLocal_52, 1, 1);
			unk_0x939C1E5F1840360D(iLocal_52);
		}
		if (func_55("REBU2_LV2_9") || iLocal_71 > 1)
		{
			unk_0x121389EDF3165EFB(iLocal_52, 0, 1);
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
				iLocal_72 = unk_0x4F67E8ECA7D3F667() + 1500;
				iLocal_71++;
				break;
			
			case 2:
				if (iLocal_72 < unk_0x4F67E8ECA7D3F667())
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
				iLocal_72 = unk_0x4F67E8ECA7D3F667() + 500;
				iLocal_71++;
				break;
			
			case 5:
				if (iLocal_72 < unk_0x4F67E8ECA7D3F667())
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
				iLocal_72 = unk_0x4F67E8ECA7D3F667() + 1000;
				iLocal_71++;
				break;
			
			case 18:
				if (iLocal_72 < unk_0x4F67E8ECA7D3F667())
				{
					func_70(&uLocal_177, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_71++;
				}
				break;
			
			case 19:
				iLocal_72 = unk_0x4F67E8ECA7D3F667() + 2500;
				iLocal_71++;
				break;
			
			case 20:
				if (iLocal_72 < unk_0x4F67E8ECA7D3F667())
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
		if (unk_0xD3852F22AB713A1F(sParam0, &uVar0))
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
		if (unk_0xD3852F22AB713A1F(sParam0, &uVar0))
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
		iVar6 = unk_0xEA4E13D1CA640059();
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
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
	{
		if (!iLocal_132)
		{
			if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
			{
				if (!unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), unk_0x2F96E7720B0B19EA(), 1) && unk_0x9C8E4D238C999648(iLocal_52, unk_0x2F96E7720B0B19EA(), 0))
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
		else if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
		{
			if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), unk_0x2F96E7720B0B19EA(), 0) && unk_0x9C8E4D238C999648(iLocal_52, unk_0x2F96E7720B0B19EA(), 0))
			{
				iLocal_132 = 0;
			}
		}
		if (!iLocal_133)
		{
			if (unk_0x38A6E30A4266B89C(unk_0x096275889B8E0EE0()))
			{
				func_81(0);
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_133 = 1;
			}
		}
		else if (!unk_0x38A6E30A4266B89C(unk_0x096275889B8E0EE0()))
		{
			iLocal_133 = 0;
		}
		if (!iLocal_134)
		{
			if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
			{
				func_81(0);
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
		{
			iLocal_134 = 0;
		}
	}
}

void func_58()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
		{
			if (!func_61())
			{
				if (unk_0x5D6C6BD519D63337(iLocal_52))
				{
					unk_0x5BEB6DE8CD28F036(iLocal_52);
				}
				if (unk_0x04932A97CB319DE0(iLocal_52, 1227113341) != 1 && unk_0x04932A97CB319DE0(iLocal_52, 1227113341) != 0)
				{
					unk_0xF553365A64BDFF94(iLocal_52, unk_0x096275889B8E0EE0(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x52BE10F427339B39(iLocal_52, 0))
				{
					unk_0x36DBE8E570B9FBCE(iLocal_52, 0, 4194304);
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
				if (((unk_0x04932A97CB319DE0(iLocal_52, 1227113341) == 1 || unk_0x04932A97CB319DE0(iLocal_52, 1227113341) == 0) || unk_0x04932A97CB319DE0(iLocal_52, 242628503) == 1) || unk_0x04932A97CB319DE0(iLocal_52, 242628503) == 0)
				{
					unk_0x0F1ABE64C3C18E5A(iLocal_52);
				}
			}
		}
		else if (((!unk_0x5D6C6BD519D63337(iLocal_52) && !unk_0x52BE10F427339B39(iLocal_52, 0)) && unk_0x04932A97CB319DE0(iLocal_52, 242628503) != 1) && unk_0x04932A97CB319DE0(iLocal_52, 242628503) != 0)
		{
			unk_0xC17B8A7D48C194DB(iLocal_52, func_59());
			unk_0xA8F442E84EF050FC(iLocal_52, 1);
			unk_0x4C60E33A2CB9B14D(iLocal_52, 0);
		}
	}
}

var func_59()
{
	return unk_0x9BAB31815159ABCF(unk_0x47E385B0D957C8D4());
}

int func_60()
{
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
	{
		if (unk_0xB86D29B10F627379(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 1))
		{
			if ((unk_0x2BA0AE672835A516(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1))) || unk_0x7331BD1F2125CC77(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1)))) || unk_0x7E9B1540150314F1(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		if (unk_0xB86D29B10F627379(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0))
		{
			if (((((!unk_0x53FA5F3E0569FD92(unk_0x096275889B8E0EE0()) && !unk_0x3B74D71F9EF41F83(unk_0x096275889B8E0EE0())) && !unk_0xC0655426C43A17F5(unk_0x096275889B8E0EE0())) && !unk_0x2C0C61DCBEB7E6F3(unk_0x096275889B8E0EE0())) && !unk_0x7122F97890EFE68D(unk_0x096275889B8E0EE0())) && !unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("rhino")))
			{
				if (unk_0xA9C55F1C15E62E06(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
	{
		if (unk_0xB86D29B10F627379(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0()), 0))
		{
			if ((((!unk_0xB9B56D169DBE14C0(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0()))) && !unk_0x6BD83A1CACAF87AD(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && !unk_0x799CFC7C5B743B15(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && !unk_0xFC08C8F8C1EDF174(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
	{
		if (unk_0x20EB7B80D61EEA56(iLocal_52))
		{
			if (!iLocal_169)
			{
				iLocal_170 = unk_0x4F67E8ECA7D3F667();
				iLocal_169 = 1;
			}
			else
			{
				iLocal_171 = unk_0x4F67E8ECA7D3F667();
			}
		}
		else
		{
			iLocal_169 = 0;
		}
	}
	if ((iLocal_171 - iLocal_170) > 180000)
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_52))
		{
			if (unk_0x5D6C6BD519D63337(iLocal_52))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_52);
				if (unk_0x5E58342602E94718(iLocal_52, Local_138, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x14A4402A811D03C0(iLocal_52, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x2AD4789CBFD829EC(iLocal_52, 1);
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
	if (unk_0x82A66DCC07835AD4(unk_0x096275889B8E0EE0()))
	{
		if (!iLocal_172)
		{
			iLocal_173 = unk_0x4F67E8ECA7D3F667();
			iLocal_172 = 1;
		}
		else
		{
			iLocal_174 = unk_0x4F67E8ECA7D3F667();
		}
	}
	else
	{
		iLocal_172 = 0;
	}
	if ((iLocal_174 - iLocal_173) > 120000)
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_52))
		{
			if (unk_0x5D6C6BD519D63337(iLocal_52))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_52);
				if (unk_0x5E58342602E94718(iLocal_52, Local_138, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x14A4402A811D03C0(iLocal_52, Local_138, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x2AD4789CBFD829EC(iLocal_52, 1);
				}
				else
				{
					unk_0x36DBE8E570B9FBCE(iLocal_52, 0, 4194304);
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
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
	{
		if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_52, 8f, 8f, 8f, 0, 1, 0) || unk_0x7B3FE8C8BC422763(unk_0x096275889B8E0EE0()))
		{
			if ((unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && !unk_0x9C8E4D238C999648(iLocal_52, unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0)) && !unk_0x7B3FE8C8BC422763(unk_0x096275889B8E0EE0()))
			{
				if (!unk_0xCD82FA174080B3B1(uLocal_113))
				{
					uLocal_113 = func_67(iLocal_52, 0, 145);
				}
				if (unk_0xCD82FA174080B3B1(uLocal_136))
				{
					unk_0xF2C3C9DA47AAA54A(&uLocal_136);
				}
			}
			else
			{
				if (!unk_0x20EB7B80D61EEA56(unk_0x096275889B8E0EE0()))
				{
					if (unk_0xCD82FA174080B3B1(uLocal_113))
					{
						unk_0xF2C3C9DA47AAA54A(&uLocal_113);
					}
				}
				if (!unk_0xCD82FA174080B3B1(uLocal_136))
				{
					uLocal_136 = func_65(Local_138, 1);
				}
			}
		}
		else if (!unk_0xCD82FA174080B3B1(uLocal_113))
		{
			uLocal_113 = func_67(iLocal_52, 0, 145);
		}
		if (!unk_0x5D6C6BD519D63337(iLocal_52))
		{
			if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_52, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0x0F1ABE64C3C18E5A(iLocal_52);
				unk_0xC17B8A7D48C194DB(iLocal_52, func_59());
				unk_0xA8F442E84EF050FC(iLocal_52, 1);
				unk_0x4C60E33A2CB9B14D(iLocal_52, 0);
			}
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
			{
				unk_0x0F1ABE64C3C18E5A(iLocal_52);
				unk_0xC17B8A7D48C194DB(iLocal_52, func_59());
				unk_0xA8F442E84EF050FC(iLocal_52, 1);
				unk_0x4C60E33A2CB9B14D(iLocal_52, 0);
			}
		}
		if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_52, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

var func_65(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xAFE7B0E5A6396BD2(Param0);
	unk_0x17D3E31025A05A57(uVar0, func_66(unk_0x03A753E2C8458335(), 1f, 1f));
	unk_0xA1BFA381D71B6D00(uVar0, iParam3);
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
	if ((iParam2 != 145 && unk_0xCD82FA174080B3B1(uVar0)) && unk_0x73C258C68D6F55B6(&(Global_97353.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x0A062D6D7C0B2C2C(uVar0, &(Global_97353.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xAF129458D90982F3(iParam0);
	if (unk_0xC3D96AF45FCCEC4C(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_66(unk_0x03A753E2C8458335(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x5F3268378F24D97B(uVar0, bParam1);
		}
		else
		{
			unk_0x2954B7F696FF4E2C(uVar0, 2);
		}
	}
	else if (unk_0xCF8176912DDA4EA5(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_66(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
		unk_0x5F3268378F24D97B(uVar0, bParam1);
	}
	else if (unk_0x0A27A546A375FDEF(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_66(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_69()
{
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		iLocal_168 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (unk_0xB86D29B10F627379(iLocal_168, 0))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_52))
			{
				if (unk_0xEB8F1713A0FC1B96(iLocal_52, iLocal_168))
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
					unk_0x89EEEEF0CEB4D045(0);
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
		if (unk_0x200E87988220C592())
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
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
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
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_75())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
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
	unk_0x89EEEEF0CEB4D045(0);
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
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
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
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
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
		if (Global_68245)
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
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

void func_79()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
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
			if (!unk_0x2CF12F9ACF18F048(&Local_155))
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
	if (unk_0x200E87988220C592())
	{
		unk_0x1DDACDCB7482E6F1();
		Global_16703 = 0;
		unk_0x89EEEEF0CEB4D045(1);
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
	if (unk_0xD42BD6EB2E0F1677(iLocal_52))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_52))
		{
			unk_0x28AC5FC91EA70789(iLocal_52, 394, 1);
		}
		if (unk_0x7B6E7BEC1143AC86(iLocal_52, unk_0x096275889B8E0EE0(), 1))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_52))
			{
				unk_0x06C6AD4F38E8412D(iLocal_52, unk_0x096275889B8E0EE0(), 150f, -1, 0, 0);
				unk_0x2AD4789CBFD829EC(iLocal_52, 1);
			}
			if (!unk_0x6CFF81397164A1D3(iLocal_56))
			{
				unk_0x9E0FEFE102840007(5, iLocal_176, joaat("player"));
				unk_0xD46E4661E977AEE0(iLocal_56, unk_0x096275889B8E0EE0(), 0, 16);
				unk_0x2AD4789CBFD829EC(iLocal_56, 1);
			}
			func_103();
			unk_0x4EDE34FBADD967A6(0);
			func_70(&uLocal_177, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_50 = 4;
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_56))
		{
			if (unk_0x7B6E7BEC1143AC86(iLocal_56, unk_0x096275889B8E0EE0(), 1))
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_52))
				{
					unk_0x06C6AD4F38E8412D(iLocal_52, unk_0x096275889B8E0EE0(), 150f, -1, 0, 0);
					unk_0x2AD4789CBFD829EC(iLocal_52, 1);
				}
				if (!unk_0x6CFF81397164A1D3(iLocal_56))
				{
					unk_0x9E0FEFE102840007(5, iLocal_176, joaat("player"));
					unk_0xD46E4661E977AEE0(iLocal_56, unk_0x096275889B8E0EE0(), 0, 16);
					unk_0x2AD4789CBFD829EC(iLocal_56, 1);
				}
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_50 = 4;
			}
		}
	}
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
	{
		if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 1)
		{
			unk_0x06C6AD4F38E8412D(iLocal_52, unk_0x096275889B8E0EE0(), 150f, -1, 0, 0);
			unk_0x2AD4789CBFD829EC(iLocal_52, 1);
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
	
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
	{
		if ((unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_52, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0x20EB7B80D61EEA56(unk_0x096275889B8E0EE0())) && !unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_129 = true;
				if (!iLocal_114)
				{
					func_93(1, 1, 1, 0);
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 24);
					unk_0x0BFC2C61FB5B6CA1(1);
					unk_0xD63FE3AF9FB3D53F(0);
					unk_0x1B3DA717B9AFF828(0);
					unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 1);
					if (unk_0xD42BD6EB2E0F1677(unk_0x2F96E7720B0B19EA()))
					{
						unk_0xDC19C288082E586E(unk_0x2F96E7720B0B19EA(), 1, 0);
						if (unk_0x1BD7C371CE257C3E(unk_0x2F96E7720B0B19EA()))
						{
							func_92(unk_0x2F96E7720B0B19EA());
							unk_0x8BDC5B998B4654EF(unk_0x2F96E7720B0B19EA(), 200f);
						}
						if (unk_0xC057F02B837A27F6(unk_0x2F96E7720B0B19EA(), iLocal_52, 5f, 5f, 5f, 0, 1, 0) || unk_0x5E58342602E94718(unk_0x2F96E7720B0B19EA(), Local_87, 5f, 5f, 5f, 0, 1, 0))
						{
							unk_0xF6A103413A202C37(unk_0x2F96E7720B0B19EA(), unk_0xA86D5F069399F44D(iLocal_52, 1) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
							{
								unk_0x7263332501E07F52(unk_0x2F96E7720B0B19EA());
							}
						}
					}
					if (unk_0xD42BD6EB2E0F1677(iLocal_57))
					{
						if (unk_0x1BD7C371CE257C3E(iLocal_57))
						{
							func_92(iLocal_57);
							unk_0x8BDC5B998B4654EF(iLocal_57, 200f);
						}
						if (unk_0xC057F02B837A27F6(iLocal_57, iLocal_52, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0xF6A103413A202C37(iLocal_57, Local_87, 0, 0, 0, 1);
							if (!unk_0x7D5B1F88E7504BBA(iLocal_57))
							{
								unk_0x7263332501E07F52(iLocal_57);
							}
						}
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_52))
					{
						iLocal_168 = unk_0x52F45D033645181B(unk_0xA86D5F069399F44D(iLocal_52, 1), 5f, 0, 2);
						if (!unk_0x7D5B1F88E7504BBA(iLocal_168))
						{
							if (unk_0x1BD7C371CE257C3E(iLocal_168))
							{
								func_92(iLocal_168);
								unk_0x8BDC5B998B4654EF(iLocal_168, 200f);
							}
							unk_0xF6A103413A202C37(iLocal_168, unk_0xA86D5F069399F44D(iLocal_52, 1) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					unk_0xDB38F247BD421708(Local_77, 10f);
					unk_0xD3BDEFB5C25B69C4(Local_77, 10f, 0);
					unk_0x894DDE7F2D919046(Local_77, 4.5f, 0, 0, 0, 0, 0);
					unk_0xF6A103413A202C37(iLocal_52, Local_77, 1, 0, 0, 1);
					unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), Local_77, 1, 0, 0, 1);
					if (!unk_0x6CFF81397164A1D3(iLocal_52))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_53)
					{
						if (unk_0xD42BD6EB2E0F1677(iLocal_53[iVar0]))
						{
							if (unk_0x5E58342602E94718(iLocal_53[iVar0], unk_0xA86D5F069399F44D(iLocal_52, 0), 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								unk_0xCC0EF140F99365C5(&(iLocal_53[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_52))
					{
						uLocal_342 = unk_0x4D3B117F889EADDA(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						uLocal_76 = unk_0xE72CDBA7F0A02DD6("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x6E3975B3F6954199(uLocal_76, uLocal_342, "untie_cam", "random@burial");
						unk_0xFA8B88A1EF049B33(unk_0x096275889B8E0EE0());
						unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), 18.2311f);
						unk_0xB25E22832517B44E(iLocal_52, 200);
						unk_0x0778FFC4C3BCCA8A(iLocal_52, 0);
						unk_0x0125579249DAB847(iLocal_52, 0);
						unk_0xFA8B88A1EF049B33(iLocal_52);
						unk_0x3605588B4955CFAF(iLocal_52, uLocal_342, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0x76BA60E29B3C3B96(iLocal_52, 0, 0);
						unk_0x3605588B4955CFAF(unk_0x096275889B8E0EE0(), uLocal_342, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x76BA60E29B3C3B96(unk_0x096275889B8E0EE0(), 0, 0);
						unk_0xCF307902D4A3A68C(uLocal_60[0], uLocal_342, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0xCF307902D4A3A68C(uLocal_60[1], uLocal_342, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x87295BCA613800C8(uLocal_76, 1);
						unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
						iLocal_119 = unk_0x4F67E8ECA7D3F667();
						iLocal_114 = 1;
					}
				}
			}
		}
	}
	if (iLocal_114 && !iLocal_116)
	{
		unk_0x36CDD81627A6FCD2();
		if (unk_0x0ACACDD53B4C4879(uLocal_342))
		{
			if ((unk_0x5D6C0F302EC49A67(uLocal_342) > 0.115f && unk_0x5D6C0F302EC49A67(uLocal_342) < 0.12f) || (unk_0x5D6C0F302EC49A67(uLocal_342) > 0.355f && unk_0x5D6C0F302EC49A67(uLocal_342) < 0.36f))
			{
				unk_0xB906B139171B1845(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (unk_0x5D6C0F302EC49A67(uLocal_342) > 0.6f)
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
		iLocal_118 = unk_0x4F67E8ECA7D3F667();
		if (((iLocal_118 - iLocal_119) > 9700 && !iLocal_122) && unk_0x420537F38720164C() == 4)
		{
			unk_0x4102732DF6B4005F("CamPushInNeutral", 0, 0);
			unk_0xB906B139171B1845(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_122 = 1;
		}
		if ((iLocal_118 - iLocal_119) > 10000)
		{
			iLocal_116 = 1;
		}
		if (func_90(1000))
		{
			func_103();
			unk_0x40C719A5E410B9E4(800);
			while (unk_0x02F39BEFE7B88D00())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_116 = 1;
			bLocal_117 = true;
		}
	}
	if (iLocal_116 && !bLocal_121)
	{
		unk_0xD63FE3AF9FB3D53F(1);
		unk_0x1B3DA717B9AFF828(1);
		unk_0xEF8E0121E6DA9F93(uLocal_342, 1f);
		unk_0xFA8B88A1EF049B33(unk_0x096275889B8E0EE0());
		unk_0x76BA60E29B3C3B96(unk_0x096275889B8E0EE0(), 0, 0);
		unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), 256.7693f);
		if (!unk_0x6CFF81397164A1D3(iLocal_52))
		{
			unk_0xFA8B88A1EF049B33(iLocal_52);
			unk_0x76BA60E29B3C3B96(iLocal_52, 0, 0);
			unk_0x98FB75840705964B(iLocal_52, 1);
			unk_0xF6A103413A202C37(iLocal_52, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(iLocal_52, 73.449f);
		}
		unk_0x5D1EB123EAC5D071(26.1578f);
		unk_0xFB760AF4F537B8BF(-8.1198f, 1065353216);
		unk_0x87295BCA613800C8(uLocal_76, 0);
		unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
		unk_0x4E67E0B6D7FD5145(uLocal_76, 0);
		unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 0);
		if (bLocal_117)
		{
			unk_0x6A053CF596F67DF7(800);
			while (unk_0x0CECCC63FFA2EF24())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		bLocal_121 = true;
	}
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
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
					unk_0x9E0FEFE102840007(1, iLocal_176, joaat("player"));
					unk_0x9E0FEFE102840007(1, joaat("player"), iLocal_176);
					unk_0xF4BF3E3D7FE56705(&uLocal_64);
					unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2048, 2);
					unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 4000);
					if (unk_0xB86D29B10F627379(unk_0x2F96E7720B0B19EA(), 0))
					{
						if (unk_0xC057F02B837A27F6(iLocal_52, unk_0x2F96E7720B0B19EA(), 20f, 20f, 20f, 0, 1, 0) && unk_0xA9C55F1C15E62E06(unk_0x2F96E7720B0B19EA()) > 0)
						{
							unk_0x12C24A48BF610759(0, unk_0x2F96E7720B0B19EA(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0x5D6C6BD519D63337(iLocal_52))
						{
							unk_0xC17B8A7D48C194DB(iLocal_52, func_59());
							unk_0xA8F442E84EF050FC(iLocal_52, 1);
							unk_0x4C60E33A2CB9B14D(iLocal_52, 0);
						}
					}
					else if (!unk_0x5D6C6BD519D63337(iLocal_52))
					{
						unk_0xC17B8A7D48C194DB(iLocal_52, func_59());
						unk_0xA8F442E84EF050FC(iLocal_52, 1);
						unk_0x4C60E33A2CB9B14D(iLocal_52, 0);
					}
					unk_0xFF7E39890B2840DD(uLocal_64);
					unk_0xD59C10966EB589EA(iLocal_52, uLocal_64);
					unk_0x5EC7E18324A7D03D(&uLocal_64);
					if (unk_0xCD82FA174080B3B1(uLocal_113))
					{
						unk_0xF2C3C9DA47AAA54A(&uLocal_113);
					}
					if (!unk_0xCD82FA174080B3B1(uLocal_136))
					{
						uLocal_136 = func_65(Local_138, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!unk_0xCD82FA174080B3B1(uLocal_137))
						{
							uLocal_137 = func_65(Local_141, 0);
							unk_0x74F74D3207ED525C(uLocal_137, 269);
							func_88();
						}
					}
					func_87();
					iLocal_130 = 1;
					iLocal_120 = 1;
					unk_0xC1B1E9A034A63A62(0);
					unk_0xC619A44639BC0CB4(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f);
					unk_0xBBB134FB9D50C0CC(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0, 1);
					func_93(0, 1, 1, 0);
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 4);
					unk_0xBB19AC7D4DCEFD0F(unk_0x096275889B8E0EE0());
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
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

int func_90(int iParam0)
{
	if (unk_0x37F9A426FBCF4AF2())
	{
		if ((unk_0x4F67E8ECA7D3F667() - Global_27) > iParam0)
		{
			Global_26 = unk_0x4F67E8ECA7D3F667();
		}
		Global_27 = unk_0x4F67E8ECA7D3F667();
		if ((unk_0x4F67E8ECA7D3F667() - Global_26) > iParam0)
		{
			if (func_91())
			{
				Global_26 = unk_0x4F67E8ECA7D3F667();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
{
	if (unk_0x535384D6067BA42E())
	{
		return 0;
	}
	if (unk_0xCCBB0BB9790E1F47(0, 18) || unk_0xCCBB0BB9790E1F47(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (!unk_0x7D5B1F88E7504BBA(iParam0))
		{
			if (unk_0x1BD7C371CE257C3E(iParam0))
			{
				unk_0x8390751DC40C1E98(iParam0);
				unk_0xB25E22832517B44E(iParam0, unk_0x82368787EA73C0F7(iParam0) + 200);
				unk_0x8BDC5B998B4654EF(iParam0, (unk_0x90DBFFAC43B22081(iParam0) + 200f));
				unk_0x6AB2918EE3BEC94C(iParam0, (unk_0x1E5A9B356D5098BE(iParam0) + 200f));
				unk_0xDB38F247BD421708(unk_0xA86D5F069399F44D(iParam0, 1), 5f);
				unk_0x3B882A96EA77D5B1(unk_0xA86D5F069399F44D(iParam0, 1), 2.5f, 1, 0, 0, 0);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x85E52FA5012D2428(unk_0x217E9DC48139933D());
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 1);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 1);
		func_99(1);
		unk_0x2C0D0B8454E927E2();
		unk_0x373F8B723BB81146();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x3AB7C52414B223F6())
			{
				unk_0x89EEEEF0CEB4D045(0);
			}
			if (!func_74())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_98(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_99(0);
		unk_0xF260DC644CD0CDE5();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x3062409186A3CED7();
		}
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 0);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 0);
		func_98(0, iParam3, iParam2);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !func_94(unk_0x217E9DC48139933D()))
		{
			unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 0);
		}
		Global_68243 = 0;
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
		if (iParam0 == unk_0x217E9DC48139933D())
		{
			return 1;
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_95()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2359301, 3);
}

bool func_96(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_97(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
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
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
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
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x63DCACC2E4B5C081() != iParam0 && uParam2)
		{
			unk_0x8572368C3F0D7221(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_99(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 13);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 13);
	}
}

void func_100()
{
	if (!unk_0x7D5B1F88E7504BBA(iLocal_52))
	{
		switch (iLocal_167)
		{
			case 0:
				if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4000, 5500));
						iLocal_167++;
					}
				}
				break;
			
			case 1:
				if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4000, 5500));
						iLocal_167++;
					}
				}
				break;
			
			case 2:
				if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4000, 5500));
						iLocal_167++;
					}
				}
				break;
			
			case 3:
				if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4000, 5500));
						iLocal_167 = 0;
					}
				}
				break;
			}
	}
}

void func_101(var uParam0, char* sParam1, int iParam2)
{
	unk_0x17033CDF9E0B42C6(uParam0, sParam1, func_102(iParam2), 1);
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
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

void func_105()
{
	if (!iLocal_66 && unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_106, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_53[1]))
		{
			if (func_70(&uLocal_177, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_66 = 1;
			}
		}
	}
	if (unk_0xB86D29B10F627379(iLocal_57, 0))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_53[0]))
		{
			unk_0x8B5A576784E393A4(iLocal_53[0], iLocal_57, unk_0x096275889B8E0EE0(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0x2AD4789CBFD829EC(iLocal_53[0], 1);
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_53[1]))
		{
			unk_0x12C24A48BF610759(iLocal_53[1], iLocal_57, -1, 0, 3f, 1, 0);
			unk_0x2AD4789CBFD829EC(iLocal_53[1], 1);
		}
	}
	else
	{
		iLocal_63 = 0;
		while (iLocal_63 <= 1)
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_53[iLocal_63]))
			{
				unk_0x06C6AD4F38E8412D(iLocal_53[iLocal_63], unk_0x096275889B8E0EE0(), 250f, -1, 0, 0);
				unk_0x2AD4789CBFD829EC(iLocal_53[iLocal_63], 1);
			}
			iLocal_63++;
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	func_4();
}

void func_106()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_53[0]) && !unk_0x6CFF81397164A1D3(iLocal_53[1]))
	{
		if (!unk_0x9934E9C42D52D87E(iLocal_53[0]) && !unk_0x9934E9C42D52D87E(iLocal_53[1]))
		{
			if (func_70(&uLocal_177, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0x69BBBA1223D4C644(iLocal_53[1]))
				{
					unk_0x0F1ABE64C3C18E5A(iLocal_53[1]);
					unk_0xD71FEE088E160031(iLocal_53[1], unk_0x096275889B8E0EE0(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
	iLocal_48 = 7;
}

void func_107()
{
	float fVar0;
	
	if (!unk_0x6CFF81397164A1D3(iLocal_53[0]) && !unk_0x6CFF81397164A1D3(iLocal_53[1]))
	{
		if (!iLocal_68)
		{
			if (!iLocal_67)
			{
				unk_0xF4BF3E3D7FE56705(&uLocal_64);
				unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2048, 2);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 0);
				unk_0xFF7E39890B2840DD(uLocal_64);
				unk_0xD59C10966EB589EA(iLocal_53[1], uLocal_64);
				unk_0x5EC7E18324A7D03D(&uLocal_64);
				iLocal_67 = 1;
			}
			if (unk_0x9B4CC17D919C8FC4(iLocal_53[1], unk_0x096275889B8E0EE0(), 90f))
			{
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_177, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x6CFF81397164A1D3(iLocal_53[0]) && !unk_0x6CFF81397164A1D3(iLocal_53[1]))
				{
					fVar0 = func_109(iLocal_53[0], unk_0x096275889B8E0EE0(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0x64CDE9D6BF8ECAD3(iLocal_59, 0, 1);
					unk_0x1B21CF9397F27FEE(iLocal_59, iLocal_53[0], unk_0xD1E5B4D09626571A(iLocal_53[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x0F1ABE64C3C18E5A(iLocal_53[0]);
					unk_0xF4BF3E3D7FE56705(&uLocal_64);
					unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2048, 2);
					unk_0x8DBC05C86F873CC9(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 0);
					unk_0xFF7E39890B2840DD(uLocal_64);
					unk_0xD59C10966EB589EA(iLocal_53[0], uLocal_64);
					unk_0x5EC7E18324A7D03D(&uLocal_64);
					unk_0xA1594471C8773FDD(iLocal_53[1], joaat("weapon_sawnoffshotgun"), 1);
					unk_0x0F1ABE64C3C18E5A(iLocal_53[1]);
					unk_0xF4BF3E3D7FE56705(&uLocal_64);
					unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2048, 2);
					unk_0xF553365A64BDFF94(0, unk_0x096275889B8E0EE0(), -1, fVar0, 1f, 1073741824, 0);
					unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 0);
					unk_0xFF7E39890B2840DD(uLocal_64);
					unk_0xD59C10966EB589EA(iLocal_53[1], uLocal_64);
					unk_0x5EC7E18324A7D03D(&uLocal_64);
					iLocal_68 = 1;
				}
			}
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_59))
		{
			if (unk_0xEE6AD63ABF59C0B7(iLocal_59))
			{
				if (unk_0xDEE49D5CA6C49148(iLocal_53[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x64CDE9D6BF8ECAD3(iLocal_59, 1, 1);
					}
				}
			}
		}
		if (iLocal_68 && !iLocal_164)
		{
			if (func_70(&uLocal_177, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0xF4BF3E3D7FE56705(&uLocal_64);
				unk_0xFDBC7EA2924FC7A6(0, unk_0x096275889B8E0EE0(), unk_0x096275889B8E0EE0(), 1f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), -1, 0);
				unk_0xFF7E39890B2840DD(uLocal_64);
				unk_0xD59C10966EB589EA(iLocal_53[1], uLocal_64);
				unk_0x5EC7E18324A7D03D(&uLocal_64);
				unk_0xF27F981A5EBAEFDB("RE6_START");
				iLocal_164 = 1;
			}
		}
		if (iLocal_164 && !iLocal_165)
		{
			if (func_70(&uLocal_177, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_53[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_53[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x0B11639CBB53F15F(iLocal_53[0], unk_0x096275889B8E0EE0(), -1, 0);
				}
				iLocal_165 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (iLocal_165 && !bLocal_166)
		{
			if (unk_0xC9D9444186B5A374() > 15000 && !func_12())
			{
				if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_53[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_53[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xFE920E72A4B34285(iLocal_53[0], unk_0x096275889B8E0EE0(), 0);
					unk_0xFE920E72A4B34285(iLocal_53[1], unk_0x096275889B8E0EE0(), 0);
					func_70(&uLocal_177, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_166 = true;
				}
			}
		}
		if (((!iLocal_69 && iLocal_164) && !unk_0x6CFF81397164A1D3(iLocal_53[0])) && !unk_0x6CFF81397164A1D3(iLocal_53[1]))
		{
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_53[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_53[1], 30f, 30f, 30f, 0, 1, 0))
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
				unk_0xF4BF3E3D7FE56705(&uLocal_64);
				unk_0xF553365A64BDFF94(0, iLocal_53[1], -1, 2f, 1f, 1073741824, 0);
				unk_0xFE920E72A4B34285(0, iLocal_53[1], 0);
				unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0xFF7E39890B2840DD(uLocal_64);
				unk_0xD59C10966EB589EA(iLocal_53[0], uLocal_64);
				unk_0x5EC7E18324A7D03D(&uLocal_64);
				unk_0xF4BF3E3D7FE56705(&uLocal_64);
				unk_0xF553365A64BDFF94(0, iLocal_53[0], -1, 2f, 1f, 1073741824, 0);
				unk_0xFE920E72A4B34285(0, iLocal_53[0], 0);
				unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0xFF7E39890B2840DD(uLocal_64);
				unk_0xD59C10966EB589EA(iLocal_53[1], uLocal_64);
				unk_0x5EC7E18324A7D03D(&uLocal_64);
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
		if (((unk_0xB6C3A42B887CE035(iLocal_53[0], unk_0x096275889B8E0EE0()) || unk_0xB6C3A42B887CE035(iLocal_53[1], unk_0x096275889B8E0EE0())) || unk_0xE2437D050D9402A1(unk_0x217E9DC48139933D(), iLocal_53[0])) || unk_0xE2437D050D9402A1(unk_0x217E9DC48139933D(), iLocal_53[1]))
		{
			if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 4) && !unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 3))
			{
				if (unk_0x20EB7B80D61EEA56(unk_0x096275889B8E0EE0()))
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
			if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 3) && !unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 4))
			{
				if (unk_0x20EB7B80D61EEA56(unk_0x096275889B8E0EE0()))
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
			if (unk_0x4605C66E0F935F83(unk_0x217E9DC48139933D()) || unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
			{
				func_111();
			}
		}
	}
}

int func_108()
{
	if (unk_0x4ED6CFDFE8D4131A(unk_0x9C1C462D7B1DD1F9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_109(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7D5B1F88E7504BBA(iParam0))
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 0) };
	}
	if (!unk_0x7D5B1F88E7504BBA(iParam1))
	{
		Var3 = { unk_0xA86D5F069399F44D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA86D5F069399F44D(iParam1, 0) };
	}
	return unk_0x0BE7F4E3CDBAFB28(Var0, Var3, iParam2);
}

int func_110()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if (unk_0xB86D29B10F627379(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0))
			{
				if ((((unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("rhino")) || unk_0xF00F3ACC20D97154(unk_0x096275889B8E0EE0())) || unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("annihilator"))) || unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("buzzard"))) || unk_0xC45209A56BDACAE8(unk_0x096275889B8E0EE0()))
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
	unk_0xF27F981A5EBAEFDB("RE6_START");
	if (!iLocal_144)
	{
		if (unk_0xD42BD6EB2E0F1677(iLocal_53[0]))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_53[0]))
			{
				unk_0x28AC5FC91EA70789(iLocal_53[0], 156, 1);
				if (unk_0xD42BD6EB2E0F1677(iLocal_59))
				{
					unk_0x9C7D603CBFC4C591(iLocal_53[0]);
					if (unk_0xEE6AD63ABF59C0B7(iLocal_59))
					{
						if (!iLocal_69)
						{
							unk_0x64CDE9D6BF8ECAD3(iLocal_59, 0, 1);
							unk_0x1B21CF9397F27FEE(iLocal_59, iLocal_53[0], unk_0xD1E5B4D09626571A(iLocal_53[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0x0F1ABE64C3C18E5A(iLocal_53[0]);
							unk_0xF4BF3E3D7FE56705(&uLocal_64);
							unk_0x939C1E5F1840360D(0);
							unk_0x8DBC05C86F873CC9(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
							unk_0xFF7E39890B2840DD(uLocal_64);
							unk_0xD59C10966EB589EA(iLocal_53[0], uLocal_64);
							unk_0x5EC7E18324A7D03D(&uLocal_64);
							unk_0x2AD4789CBFD829EC(iLocal_53[0], 1);
							unk_0x76BA60E29B3C3B96(iLocal_53[0], 0, 0);
							iLocal_144 = 1;
						}
					}
					else
					{
						unk_0xF4BF3E3D7FE56705(&uLocal_64);
						unk_0x939C1E5F1840360D(0);
						unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
						unk_0xFF7E39890B2840DD(uLocal_64);
						unk_0xD59C10966EB589EA(iLocal_53[0], uLocal_64);
						unk_0x5EC7E18324A7D03D(&uLocal_64);
						unk_0x2AD4789CBFD829EC(iLocal_53[0], 1);
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
	if (unk_0xD42BD6EB2E0F1677(iLocal_59))
	{
		if (unk_0xEE6AD63ABF59C0B7(iLocal_59))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_53[0]))
			{
				if (unk_0xDEE49D5CA6C49148(iLocal_53[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x64CDE9D6BF8ECAD3(iLocal_59, 1, 1);
					}
				}
			}
		}
	}
	if (!iLocal_145)
	{
		if (unk_0xD42BD6EB2E0F1677(iLocal_53[1]))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_53[1]))
			{
				unk_0x28AC5FC91EA70789(iLocal_53[1], 156, 1);
				unk_0x9C7D603CBFC4C591(iLocal_53[1]);
				unk_0xF4BF3E3D7FE56705(&uLocal_64);
				unk_0x939C1E5F1840360D(0);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 500);
				unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
				unk_0xFF7E39890B2840DD(uLocal_64);
				unk_0xD59C10966EB589EA(iLocal_53[1], uLocal_64);
				unk_0x5EC7E18324A7D03D(&uLocal_64);
				unk_0x2AD4789CBFD829EC(iLocal_53[1], 1);
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
		iLocal_105 = unk_0x4F67E8ECA7D3F667() + 8500;
		unk_0xC1B1E9A034A63A62(0);
		iLocal_48 = 7;
	}
}

int func_112(int iParam0)
{
	if (func_115())
	{
		Global_97343 = 1;
		Global_97340 = unk_0x4F67E8ECA7D3F667();
		if (func_25(Global_97342))
		{
			func_113(0);
		}
		unk_0x402669A4BDAA72DA(1, "RE_TITLE");
		if (iParam0 && func_25(Global_97342))
		{
			unk_0x4AF8018BE2CC3D3D();
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
			if (Global_97353.f_28192.f_2 < 3)
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_89(func_114(iParam0), -1);
					Global_97353.f_28192.f_2++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 1))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_89(func_114(iParam0), -1);
					Global_97353.f_28192.f_3++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 2))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_89(func_114(iParam0), -1);
					Global_97353.f_28192.f_4++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 2);
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
	switch (func_116(&Global_24503, 0, 5, 0, unk_0x55525C346BEF6960()))
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
		if (Global_87845.f_44 == 1)
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
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xFEBEEBC9CBDF4B12(unk_0x47E385B0D957C8D4(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x768C017FB878E4F4(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
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
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
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
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_118(int iParam0)
{
	return func_119(iParam0, Global_34913);
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
	if (Global_34913 == 15)
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
	if (unk_0xCD82FA174080B3B1(uLocal_162))
	{
		unk_0xF2C3C9DA47AAA54A(&uLocal_162);
	}
	if (!unk_0xCD82FA174080B3B1(uLocal_113))
	{
		if (!unk_0x7D5B1F88E7504BBA(iLocal_52))
		{
			uLocal_113 = func_67(iLocal_52, 0, 145);
		}
	}
	iLocal_63 = 0;
	while (iLocal_63 <= 1)
	{
		if (!unk_0xCD82FA174080B3B1(uLocal_110[iLocal_63]))
		{
			if (!unk_0x7D5B1F88E7504BBA(iLocal_53[iLocal_63]))
			{
				uLocal_110[iLocal_63] = func_67(iLocal_53[iLocal_63], 1, 145);
			}
		}
		iLocal_63++;
	}
}

void func_122()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_52))
	{
		switch (iLocal_167)
		{
			case 0:
				if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4500, 6500));
						iLocal_167++;
					}
				}
				break;
			
			case 1:
				if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4500, 6500));
						iLocal_167++;
					}
				}
				break;
			
			case 2:
				if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4500, 6500));
						iLocal_167++;
					}
				}
				break;
			
			case 3:
				if (iLocal_105 < unk_0x4F67E8ECA7D3F667())
				{
					if (func_70(&uLocal_177, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_105 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4500, 6500));
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
			iLocal_105 = unk_0x4F67E8ECA7D3F667() + 3000;
			iLocal_109++;
			break;
		
		case 5:
			break;
	}
}

void func_124()
{
	if (unk_0xD42BD6EB2E0F1677(iLocal_59))
	{
		if (unk_0xEE6AD63ABF59C0B7(iLocal_59))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_53[0]))
			{
				if (unk_0xDEE49D5CA6C49148(iLocal_53[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial_stop") > 0.124f && unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0xFF4C64C513388C12("scr_burial_dirt", iLocal_59, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0xDEE49D5CA6C49148(iLocal_53[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") > 0.04f && unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") < 0.043f) || (unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") > 0.24f && unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") < 0.243f)) || (unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") > 0.44f && unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") < 0.443f)) || (unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") > 0.64f && unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") < 0.643f)) || (unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") > 0.84f && unk_0x6B0B5671C53485D8(iLocal_53[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0xFF4C64C513388C12("scr_burial_dirt", iLocal_59, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
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
		if (unk_0xC652FD308772D79E(Local_87, 100f, 1) || unk_0xC652FD308772D79E(Local_87, 100f, 1))
		{
			if (unk_0x6CFF81397164A1D3(iLocal_53[0]) || unk_0x6CFF81397164A1D3(iLocal_53[1]))
			{
				iLocal_50 = 1;
				return 1;
			}
			else if (!unk_0xC652FD308772D79E(Local_87, 100f, 1) || !unk_0xC652FD308772D79E(Local_87, 100f, 1))
			{
				iLocal_50 = 1;
				return 1;
			}
		}
		if (((((((((unk_0x928431F4133CD3D4(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0x928431F4133CD3D4(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0x928431F4133CD3D4(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0x928431F4133CD3D4(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0x928431F4133CD3D4(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0x928431F4133CD3D4(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0x928431F4133CD3D4(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0x8391BA4313A25AD3(2, Local_87 - Vector(100f, 100f, 100f), Local_87 + Vector(100f, 100f, 100f))) || unk_0x8391BA4313A25AD3(4, Local_87 - Vector(100f, 100f, 100f), Local_87 + Vector(100f, 100f, 100f))) || unk_0x8391BA4313A25AD3(0, Local_87 - Vector(100f, 100f, 100f), Local_87 + Vector(100f, 100f, 100f)))
		{
			iLocal_50 = 1;
			return 1;
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_57))
		{
			if (!unk_0x7D5B1F88E7504BBA(iLocal_57))
			{
				if (unk_0x7B6E7BEC1143AC86(iLocal_57, unk_0x096275889B8E0EE0(), 1) || unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_57, 0))
				{
					unk_0xBB19AC7D4DCEFD0F(iLocal_57);
					func_111();
					iLocal_50 = 3;
					return 1;
				}
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					if (unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("towtruck")) || unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("towtruck2")))
					{
						if (unk_0x8877F18530736362(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), iLocal_57))
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
			if (!unk_0x6CFF81397164A1D3(iLocal_53[0]) && !unk_0x6CFF81397164A1D3(iLocal_53[1]))
			{
				if ((((unk_0xB6C3A42B887CE035(iLocal_53[0], unk_0x096275889B8E0EE0()) || unk_0xB6C3A42B887CE035(iLocal_53[1], unk_0x096275889B8E0EE0())) || unk_0xE2437D050D9402A1(unk_0x217E9DC48139933D(), iLocal_53[0])) || unk_0xE2437D050D9402A1(unk_0x217E9DC48139933D(), iLocal_53[1])) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_87 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0, 1, 0))
				{
					if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_87 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0, 1, 0))
					{
						iLocal_50 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_53[0]) && !unk_0x6CFF81397164A1D3(iLocal_53[1]))
			{
				if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
				{
					if (unk_0x9A2304A64C3C8423(unk_0x2F96E7720B0B19EA(), iLocal_53[0]) || unk_0x9A2304A64C3C8423(unk_0x2F96E7720B0B19EA(), iLocal_53[1]))
					{
						iLocal_50 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_52))
		{
			if (unk_0x7B6E7BEC1143AC86(iLocal_52, unk_0x096275889B8E0EE0(), 0) || unk_0x2D61BCF802FF96BA(iLocal_52, joaat("weapon_stungun"), 0))
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
		if (unk_0x7D5B1F88E7504BBA(iLocal_53[0]) || unk_0x7D5B1F88E7504BBA(iLocal_53[1]))
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
	if (!unk_0x7D5B1F88E7504BBA(iParam0) && !bParam4)
	{
		if (unk_0x20EB7B80D61EEA56(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		if (!unk_0x7D5B1F88E7504BBA(iParam0) && !bParam4)
		{
			Var3 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			Var6 = { unk_0xA86D5F069399F44D(iParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0x4ED6CFDFE8D4131A(iParam3, 3))
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
			if (!unk_0x4ED6CFDFE8D4131A(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xC652FD308772D79E(Var6, fParam5, 1))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_130(iParam0);
					return 1;
				}
				if (unk_0x05B0061EFDFC8941(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_130(iParam0);
					return 1;
				}
			}
			if (!unk_0x4ED6CFDFE8D4131A(iParam3, 2))
			{
				fVar0 = unk_0x455048DF52431A30(unk_0x096275889B8E0EE0());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
				{
					if (unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iParam0) || unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xD46F9DF1D1273423(iParam0, unk_0x096275889B8E0EE0(), 17))
							{
								func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_131("	aggro Ped knows player is pointing gun\n");
								func_127("		lockOnTimer = ", *uParam2);
								func_131("\n");
								func_127("		time since not LockedOn = ", (unk_0x4F67E8ECA7D3F667() - iLocal_18));
								func_131("\n");
								bVar2 = true;
								if (unk_0x4F67E8ECA7D3F667() > (iLocal_18 + *uParam2))
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
			if (!unk_0x4ED6CFDFE8D4131A(iParam3, 0))
			{
				if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
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
		iLocal_18 = unk_0x4F67E8ECA7D3F667();
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
	if (unk_0xD3852F22AB713A1F(uParam0, uParam0))
	{
	}
}

void func_130(int iParam0)
{
	unk_0x017C768876AE01E6(iParam0);
}

void func_131(char* sParam0)
{
	func_129(sParam0);
}

int func_132(int iParam0, int iParam1)
{
	if (unk_0x20EB7B80D61EEA56(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x7B6E7BEC1143AC86(iParam0, unk_0x096275889B8E0EE0(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x7B6E7BEC1143AC86(iParam0, unk_0x096275889B8E0EE0(), 1))
	{
		if ((unk_0x5741F02781727066(iParam0) - unk_0x82368787EA73C0F7(iParam0)) > iParam1)
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
	unk_0x55686F8055FF786B(Local_138 - Vector(20f, 40f, 40f), Local_138 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0x55686F8055FF786B(Local_77 - Vector(20f, 50f, 60f), Local_77 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0x57F925DF866E2CBD(iLocal_104, 1);
	unk_0x50E52637EF70EF77(5, 0);
	unk_0x50E52637EF70EF77(3, 0);
	unk_0xD7FA719CB54866C2(0f);
	iLocal_52 = unk_0x9066DFD4D92E6773(26, iLocal_101, Local_77, fLocal_96, 1, 1);
	unk_0x49876BF356F39E66(iLocal_52, 1);
	unk_0x5E95290AF8605EA1(iLocal_52, 0);
	unk_0xF6482620334B0094(iLocal_52, 2, 0);
	unk_0xF6482620334B0094(iLocal_52, 128, 1);
	unk_0x32A582AACCBCAEFE(iLocal_52, 1, 0);
	unk_0x32A582AACCBCAEFE(iLocal_52, 6, 0);
	unk_0x020E173F318C12DA(iLocal_52, 206, 1);
	unk_0x020E173F318C12DA(iLocal_52, 318, 0);
	unk_0x020E173F318C12DA(iLocal_52, 118, 0);
	unk_0x020E173F318C12DA(iLocal_52, 208, 1);
	unk_0x4AD96EF928BD4F9A(iLocal_101);
	unk_0xB25E22832517B44E(iLocal_52, iLocal_124);
	unk_0x2E04CFC44893F1CD(unk_0x096275889B8E0EE0(), 0);
	unk_0x352AB5EAB2338B18("rghKidnappers", &iLocal_175);
	unk_0x352AB5EAB2338B18("rghVictim", &iLocal_176);
	unk_0x6ECBACF91786FB7A(iLocal_52, iLocal_176);
	iLocal_63 = 0;
	while (iLocal_63 <= 1)
	{
		iLocal_53[iLocal_63] = unk_0x9066DFD4D92E6773(26, iLocal_102, Local_80[iLocal_63 /*3*/], fLocal_97[iLocal_63], 1, 1);
		unk_0x49876BF356F39E66(iLocal_53[iLocal_63], 1);
		unk_0x6372051A96F110A8(iLocal_53[iLocal_63], 1);
		unk_0x32A582AACCBCAEFE(iLocal_53[iLocal_63], 0, 1);
		unk_0xF6482620334B0094(iLocal_53[iLocal_63], 2, 0);
		unk_0xF6482620334B0094(iLocal_53[iLocal_63], 128, 1);
		unk_0x020E173F318C12DA(iLocal_53[iLocal_63], 42, 1);
		unk_0x34559010D1FB41F8(iLocal_53[0], 2);
		unk_0x32A582AACCBCAEFE(iLocal_53[0], 50, 1);
		unk_0x2A805ACC9D53F067(iLocal_53[iLocal_63], 50);
		unk_0x162D5BC3EB4F75B0(iLocal_53[iLocal_63], 13);
		unk_0x9B9EE31AED48072E(iLocal_53[iLocal_63], 1);
		unk_0x6ECBACF91786FB7A(iLocal_53[iLocal_63], iLocal_175);
		unk_0x92DA957FFDF2DA79(iLocal_53[iLocal_63], unk_0x9C1C462D7B1DD1F9(800, 2000));
		iLocal_63++;
	}
	unk_0x4AD96EF928BD4F9A(iLocal_103);
	unk_0x4AD96EF928BD4F9A(iLocal_102);
	unk_0x2A805ACC9D53F067(iLocal_53[1], 100);
	unk_0x23C6E7AAC2F620E0(iLocal_53[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	unk_0x9E0FEFE102840007(5, iLocal_175, joaat("player"));
	unk_0x5F07E4B73A7FA39C(iLocal_53[0], joaat("weapon_pistol"), -1, 0, 1);
	unk_0x5F07E4B73A7FA39C(iLocal_53[1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
	iLocal_57 = unk_0xF757863E1E2D8F12(iLocal_104, Local_87, fLocal_100, 1, 1);
	unk_0x7263332501E07F52(iLocal_57);
	unk_0x629F0A0E952CAE7D(iLocal_57, 3);
	unk_0x550CE392A4672412(iLocal_57, 5, 0, 0);
	unk_0x4AD96EF928BD4F9A(iLocal_104);
	iLocal_59 = unk_0x1A2D7464B1CAA1C8(joaat("prop_ld_shovel"), Local_106, 1, 1, 0);
	unk_0x4AD96EF928BD4F9A(joaat("prop_ld_shovel"));
	uLocal_60[0] = unk_0x1A2D7464B1CAA1C8(joaat("p_arm_bind_cut_s"), Local_106, 1, 1, 0);
	uLocal_60[1] = unk_0x1A2D7464B1CAA1C8(joaat("p_arm_bind_cut_s"), Local_106 + Vector(1f, 1f, 1f), 1, 1, 0);
	unk_0xFA28FE3A6246FC30(joaat("p_arm_bind_cut_s"));
	unk_0x1B21CF9397F27FEE(iLocal_59, iLocal_53[0], unk_0xD1E5B4D09626571A(iLocal_53[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x584EEBEECD248926(iLocal_53[0], 0, 0, 0, 0);
	unk_0x584EEBEECD248926(iLocal_53[0], 3, 0, 1, 0);
	unk_0x584EEBEECD248926(iLocal_53[0], 4, 1, 0, 0);
	unk_0x584EEBEECD248926(iLocal_53[1], 0, 0, 2, 0);
	unk_0x584EEBEECD248926(iLocal_53[1], 3, 2, 1, 0);
	unk_0x584EEBEECD248926(iLocal_53[1], 4, 1, 1, 0);
	Var0 = { Local_77 };
	Var3 = { -2f, -4f, 18f };
	uLocal_342 = unk_0x4D3B117F889EADDA(Var0, Var3, 2);
	unk_0x3605588B4955CFAF(iLocal_52, uLocal_342, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0xCF307902D4A3A68C(uLocal_60[0], uLocal_342, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xCF307902D4A3A68C(uLocal_60[1], uLocal_342, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x074C419F65D01DE7(uLocal_342, 1);
	unk_0x2AD4789CBFD829EC(iLocal_52, 1);
	unk_0x8DBC05C86F873CC9(iLocal_53[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x8DBC05C86F873CC9(iLocal_53[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x9A0C942B0623D396(iLocal_53[0], Local_90, Local_93, 2.75f, 0, 0);
	unk_0x9A0C942B0623D396(iLocal_53[1], Local_90, Local_93, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_134(&uLocal_177, 0, unk_0x096275889B8E0EE0(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_134(&uLocal_177, 1, unk_0x096275889B8E0EE0(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_134(&uLocal_177, 2, unk_0x096275889B8E0EE0(), "TREVOR", 0, 1);
	}
	unk_0xD937A3C5EF78C429(iLocal_53[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0xD937A3C5EF78C429(iLocal_53[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0xD937A3C5EF78C429(iLocal_52, "KIDNAPPEDFEMALE");
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
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
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
		unk_0x7D1D4A3602B6AD4E(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_20() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0x7D1D4A3602B6AD4E(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xA4DDF5DF95E65EED(iVar0, uParam1, iParam3);
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
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
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
	uVar0 = Global_2454605[iParam0 /*6*/][func_138(iParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
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
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

void func_141(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_20() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0xF73FBE4845C43B5B(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_20() == 0)
		{
			return unk_0x4ED6CFDFE8D4131A(func_139(func_140(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_143()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
	{
		uVar0 = unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0());
		if (unk_0xB86D29B10F627379(uVar0, 0))
		{
			iVar1 = unk_0xD214895E39AA3787(iVar0, 0);
			if (!unk_0x6CFF81397164A1D3(iVar1))
			{
				if (iVar1 != unk_0x096275889B8E0EE0())
				{
					if (unk_0x138190F64DB4BBD1(iVar1))
					{
						if (!unk_0xFD36BD478980EB87(iVar1, unk_0x096275889B8E0EE0()))
						{
							unk_0xD4648EA39998A07B(iVar1, unk_0x096275889B8E0EE0(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_144()
{
	unk_0xFA28FE3A6246FC30(iLocal_101);
	unk_0xFA28FE3A6246FC30(iLocal_103);
	unk_0xFA28FE3A6246FC30(iLocal_102);
	unk_0xFA28FE3A6246FC30(iLocal_104);
	unk_0xFA28FE3A6246FC30(joaat("prop_ld_shovel"));
	unk_0xFA28FE3A6246FC30(joaat("p_arm_bind_cut_s"));
	unk_0xA862A2AD321F94B4("random@burial");
	unk_0x001FF43843028E0C();
	unk_0x9C623A934CD60291("ROPE_CUT", 0);
	unk_0x5F2DFC25EF936BAC("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0x1283B8B89DD5D1B6(iLocal_101) && unk_0x1283B8B89DD5D1B6(iLocal_103)) && unk_0x1283B8B89DD5D1B6(iLocal_102)) && unk_0x1283B8B89DD5D1B6(iLocal_104)) && unk_0x1283B8B89DD5D1B6(joaat("prop_ld_shovel"))) && unk_0x1283B8B89DD5D1B6(joaat("p_arm_bind_cut_s"))) && unk_0x27FF6FE8009B40CA("random@burial")) && unk_0x13A3F30A9ED0BC31()) && unk_0x9C623A934CD60291("ROPE_CUT", 0)) && unk_0x5F2DFC25EF936BAC("RE6_BOTH_DEAD_OS"))
	{
		bLocal_51 = true;
	}
	else
	{
		unk_0xFA28FE3A6246FC30(iLocal_101);
		unk_0xFA28FE3A6246FC30(iLocal_103);
		unk_0xFA28FE3A6246FC30(iLocal_102);
		unk_0xFA28FE3A6246FC30(iLocal_104);
		unk_0xFA28FE3A6246FC30(joaat("prop_ld_shovel"));
		unk_0xFA28FE3A6246FC30(joaat("p_arm_bind_cut_s"));
		unk_0xA862A2AD321F94B4("random@burial");
		unk_0x001FF43843028E0C();
		unk_0x9C623A934CD60291("ROPE_CUT", 0);
		unk_0x5F2DFC25EF936BAC("RE6_BOTH_DEAD_OS");
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
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_157())
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
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (func_33(func_44()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 2) && !unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 3))
				{
					func_148(iVar32, &Var0);
					fVar35 = unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var0.f_6, 1);
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
	if (unk_0x2CF12F9ACF18F048(&cVar2))
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
	return Global_97071 > 0;
}

int func_155()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_156()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_157()
{
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x51E9BBB68A21C058() == 1f)
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
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_157())
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
	if ((Global_97342 == func_39() && unk_0x924D54E5698AE3E0()) && Global_97343)
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
	unk_0x7FE28E92FA9F21C3(0);
	unk_0xB1ADCCC4150C6473(1);
	Global_97339 = 0;
	func_161();
}

void func_161()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			unk_0x57F925DF866E2CBD(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)), 1);
		}
		unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 32, 0);
	}
}

void func_162(int iParam0)
{
	Global_97342 = iParam0;
}

int func_163(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
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
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			Var1 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_157())
			{
				return 0;
			}
		}
		if (!Global_97353.f_7341)
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
		if (Global_97342 != -1)
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
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !bParam6)
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
		if (!func_199(Global_97353.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x4F67E8ECA7D3F667() - Global_97344) < 150000)
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
		if (unk_0xB15CD1CF58771DE1())
		{
			return 0;
		}
		if (unk_0x924D54E5698AE3E0())
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
		if (unk_0x017C1B3159F79F6C(unk_0xB417689857646F61(unk_0x096275889B8E0EE0())))
		{
			if ((unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(377.153f, -717.567f, 10.0536f) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(320.9934f, 265.2515f, 82.1221f)) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(-1425.564f, -244.3f, 15.8053f))
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
				Var5 = { Global_97353.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97353.f_1729.f_539.f_1524[iVar4];
				if (func_187(iVar8))
				{
					if (func_165(iVar4))
					{
						if (!func_164(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_97353.f_1729.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_177(unk_0x4ED6CFDFE8D4131A(iParam0, 31), -1, 1)) + 2011;
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
	
	func_186(&uVar0, unk_0xB6101ABE62B5F080());
	func_185(&uVar0, unk_0x4E162231B823DBBF());
	func_184(&uVar0, unk_0xC82CF208C2B19199());
	func_183(&uVar0, unk_0xDF2FD796C54480A5());
	func_182(&uVar0, unk_0x2D44E8FC79EAB1AC());
	func_181(&uVar0, unk_0xE136DCA28C4A48BA());
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
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
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
						if (((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_197()) || Global_96400) || Global_24446) || func_196()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || func_192()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1) || func_197()) || Global_24446) || func_196()) || func_78(8, -1)) || func_193()) || func_195()) || func_194()) || func_192()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_197()) || Global_96400) || Global_24446) || func_196()) || func_78(8, -1)) || func_193()) || func_195()) || func_194()) || func_192()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_197()) || Global_96400) || Global_24446) || func_196()) || func_78(8, -1)) || func_195()) || func_194()) || func_192()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_197() || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || func_78(8, -1)) || func_192()) || func_191()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_195()) || func_194()) || func_191()) || func_190())
						{
							return 0;
						}
						if ((unk_0xED20CB1F5297791D() && unk_0x79065FCE8B636F38() != 3) && unk_0xEC4E85B30EC75438() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
						{
							if ((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_197()) || Global_24446) || func_196()) || func_78(8, -1)) || func_194()) || func_193()) || func_192()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || func_197()) || func_194()) || Global_96400) || Global_24446) || func_196()) || Global_35957) || func_78(8, -1)) || func_193()) || func_191()) || func_192()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_197()) || Global_96400) || Global_24446) || func_196()) || func_78(8, -1)) || func_193()) || func_191()) || func_195()) || func_194()) || func_192())
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
	return Global_90001.f_1;
}

int func_191()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_192()
{
	if (unk_0x8E34C953364A76DD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_194()
{
	return Global_90014.f_291 > 0;
}

bool func_195()
{
	return Global_90014.f_290 > 0;
}

var func_196()
{
	return Global_1315900;
}

int func_197()
{
	if (!unk_0x03A753E2C8458335())
	{
		return Global_87845.f_44 == 1;
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
	return Global_97353.f_5944.f_919[iParam0];
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
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_203()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (unk_0xB86D29B10F627379(uVar0, 0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0xD214895E39AA3787(iVar0, 0)))
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
	
	if (unk_0x678AD9D5AC57ADBF())
	{
		if (unk_0x4ED6CFDFE8D4131A(unk_0x59555B52B08EAD8E(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (unk_0x179A3B2BFCDDD9DF())
	{
		if (unk_0xBEA038AAF3BCAE99())
		{
			if (unk_0xB88CF9E7E0420A4A())
			{
				if (unk_0x678AD9D5AC57ADBF())
				{
					uVar0 = unk_0x59555B52B08EAD8E(866);
					unk_0xF73FBE4845C43B5B(&uVar0, 0);
					unk_0x6EDBA20BD26B698C(uVar0);
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
		unk_0x7E42B5424BF0E844();
		unk_0x1A06FD91B1672D09("RE6_BOTH_DEAD_OS");
		if (iLocal_144 || iLocal_164)
		{
			if (Global_24682)
			{
				unk_0xF27F981A5EBAEFDB("AC_STOP");
			}
			else
			{
				unk_0xF27F981A5EBAEFDB("RE6_END");
			}
		}
		func_217();
		unk_0x9E0FEFE102840007(255, iLocal_176, joaat("player"));
		unk_0x9E0FEFE102840007(255, joaat("player"), iLocal_176);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_52))
			{
				unk_0x020E173F318C12DA(iLocal_52, 317, 1);
				if (!unk_0x52BE10F427339B39(iLocal_52, 0))
				{
					unk_0xF75B54D7038487AF(iLocal_52);
				}
				if (unk_0x5D6C6BD519D63337(iLocal_52))
				{
					unk_0x5BEB6DE8CD28F036(iLocal_52);
				}
				unk_0x49876BF356F39E66(iLocal_52, 0);
				unk_0x5E95290AF8605EA1(iLocal_52, 1);
			}
			else if (!unk_0x7D5B1F88E7504BBA(iLocal_52))
			{
				unk_0x0778FFC4C3BCCA8A(iLocal_52, 1);
				unk_0x0125579249DAB847(iLocal_52, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_53)
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_53[iVar0]) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				unk_0x9C7D603CBFC4C591(iLocal_53[iVar0]);
				if (iLocal_68 || iLocal_75)
				{
					unk_0xD46E4661E977AEE0(iLocal_53[iVar0], unk_0x096275889B8E0EE0(), 0, 16);
				}
				else
				{
					unk_0x06C6AD4F38E8412D(iLocal_53[iVar0], unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
					func_103();
				}
				unk_0x2AD4789CBFD829EC(iLocal_53[iVar0], 1);
			}
			iVar0++;
		}
		unk_0x931914268722C263(&(uLocal_60[0]));
		unk_0x931914268722C263(&(uLocal_60[1]));
		if (unk_0xD42BD6EB2E0F1677(iLocal_57))
		{
			unk_0x6C9B2BE03BBD5C98(&iLocal_57);
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_59))
		{
			if (unk_0xEE6AD63ABF59C0B7(iLocal_59))
			{
				unk_0x64CDE9D6BF8ECAD3(iLocal_59, 1, 1);
			}
			unk_0x0AD8BB0ADAFEDEE5(&iLocal_59);
		}
		if (unk_0xCD82FA174080B3B1(uLocal_162))
		{
			unk_0xF2C3C9DA47AAA54A(&uLocal_162);
		}
		iLocal_63 = 0;
		while (iLocal_63 <= 1)
		{
			if (unk_0xCD82FA174080B3B1(uLocal_110[iLocal_63]))
			{
				unk_0xF2C3C9DA47AAA54A(&(uLocal_110[iLocal_63]));
			}
			iLocal_63++;
		}
		if (unk_0xCD82FA174080B3B1(uLocal_113))
		{
			unk_0xF2C3C9DA47AAA54A(&uLocal_113);
		}
		if (unk_0x153AD457764FD704(uLocal_76))
		{
			unk_0x4E67E0B6D7FD5145(uLocal_76, 0);
		}
		unk_0x50E52637EF70EF77(5, 1);
		unk_0x50E52637EF70EF77(3, 1);
		unk_0xD7FA719CB54866C2(1f);
		unk_0xBBB134FB9D50C0CC(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 1, 1);
	}
	func_206(-1);
	unk_0x5E8B6D17FF91CD59();
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
		unk_0x402669A4BDAA72DA(0, 0);
		Global_97344 = unk_0x4F67E8ECA7D3F667();
		func_209(30000);
		StringCopy(&cVar0, func_208(Global_97342, 1), 64);
		if (func_38(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		unk_0x937D8BBA51EBAAA8(&cVar0, Global_97339, (unk_0x4F67E8ECA7D3F667() - Global_97340), 0);
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97349, 0) && Global_97353.f_28192.f_2 < 3)
	{
		unk_0x7D1D4A3602B6AD4E(&Global_97349, 0);
	}
	func_207(&Global_24503);
	Global_97343 = 0;
	func_162(-1);
}

void func_207(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
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
	Global_35464 = (unk_0x4F67E8ECA7D3F667() + iParam0);
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
	Global_97353.f_28192.f_43[iParam0] = *uParam1;
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

