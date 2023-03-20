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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1000;
	var uLocal_29 = 1000;
	var uLocal_30 = 0;
	char* sLocal_31 = NULL;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 6;
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
	struct<3> Local_82 = { 0, 0, 0 } ;
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
	int iLocal_97 = 0;
	struct<3> Local_98 = { 0, 0, 0 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 16;
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
	var uLocal_286 = 0;
	var uLocal_287 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var12;
	
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
	sLocal_31 = "NULL";
	fLocal_32 = 0f;
	fLocal_36 = -0.0375f;
	fLocal_37 = 0.17f;
	iLocal_39 = 3;
	fLocal_42 = 80f;
	fLocal_43 = 140f;
	fLocal_44 = 180f;
	iLocal_50 = 1;
	iLocal_51 = 65;
	iLocal_52 = 49;
	iLocal_53 = 64;
	uLocal_76 = unk_0x1B46069E4C762829();
	uLocal_77 = unk_0xE2B564EB49C711B1();
	Local_82 = { 500f, 500f, 500f };
	iLocal_107 = -1;
	fLocal_110 = 0f;
	iLocal_116 = 1;
	bVar0 = false;
	iVar1 = 0;
	func_84(&(Global_97439.f_17351), 4);
	func_84(&(Global_97439.f_17351), 256);
	if (unk_0x2C897F101BA20806(82))
	{
		func_83();
	}
	func_82(16);
	while (true)
	{
		bVar0 = !func_81(0, 12);
		iVar2 = 0;
		if (bVar0 && iVar1 != 1)
		{
			iVar1 = 1;
		}
		if (iVar1 == 2)
		{
			if (func_80(9))
			{
				func_79(&uLocal_117);
				iVar1 = 1;
			}
		}
		switch (iVar1)
		{
			case 0:
				if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
				{
					iVar3 = func_78(unk_0xA16EC202D9D35357());
					if ((iVar3 == 0 || iVar3 == 2) || iVar3 == 1)
					{
						func_77();
						if (!func_76(Global_97439.f_17351, 64))
						{
							func_74(&(Global_97439.f_17351), 64);
						}
						func_73(&uLocal_123);
						iVar1 = 1;
						func_71(&uLocal_117);
					}
				}
				iVar2 = 100;
				break;
			
			case 1:
				if (func_70(1))
				{
					iLocal_108 = unk_0x09560C7DE2A384BD();
				}
				if (!func_69() && !Global_87375)
				{
					if (iVar1 != 2)
					{
						if ((!unk_0x1F5CEBCEE5E9FAE9() && !bVar0) && !func_68(5))
						{
							func_65();
							if (func_64())
							{
								if (!iLocal_112)
								{
									if (func_62() == 2)
									{
										if (!func_76(Global_97439.f_17351, 1))
										{
											switch (func_61("TC_H_TOODAMAGED"))
											{
												case 2:
													func_59("TC_H_TOODAMAGED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													func_74(&(Global_97439.f_17351), 1);
													break;
												}
										}
									}
									else
									{
										func_84(&(Global_97439.f_17351), 1);
									}
									iLocal_112 = 1;
								}
								if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) != 0)
								{
									iLocal_105 = 0;
								}
								else if (bLocal_113)
								{
									if (!func_76(Global_97439.f_17351, 16384))
									{
										switch (func_61("TC_ANOTHERJOB"))
										{
											case 2:
												func_59("TC_ANOTHERJOB", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_74(&(Global_97439.f_17351), 16384);
												break;
											}
									}
								}
								else if (!func_76(Global_97439.f_17351, 16))
								{
									if (!iLocal_115)
									{
										switch (func_61("TC_HOWTOSTART"))
										{
											case 2:
												func_59("TC_HOWTOSTART", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												iLocal_109 = unk_0x09560C7DE2A384BD();
												iLocal_115 = 1;
												if (func_58("TC_HOWTOSTART"))
												{
													Global_97439.f_17351.f_22[15]++;
												}
												if (Global_97439.f_17351.f_22[15] >= 5)
												{
													func_74(&(Global_97439.f_17351), 16);
												}
												break;
											}
										}
								}
								if (unk_0x5660C8AFDD9C1721(uLocal_104))
								{
									unk_0xB6FB9702660D84F6(&uLocal_104);
								}
								switch (iLocal_105)
								{
									case 0:
										if (func_62() == 0)
										{
											if (!func_57(&uLocal_117))
											{
												func_56(&uLocal_117);
											}
											if (func_57(&uLocal_120))
											{
												func_79(&uLocal_120);
											}
											if (func_53(&uLocal_117) > 20f)
											{
												if (!unk_0x11A809BBE3889742() && func_52())
												{
													iLocal_106 = 9;
													StringCopy(&Local_98, "Taxi_Procedural", 24);
													func_51(&uLocal_123, 8, 0, "TaxiDispatch", 0, 1);
													func_50(&uLocal_123, "OJTXAUD", "OJTX_PRO_OFF", 2, 0, 0, 0);
													func_71(&uLocal_117);
													iLocal_105 = 1;
												}
												else if (!func_52())
												{
													if ((unk_0x09560C7DE2A384BD() % 1000) < 50)
													{
													}
												}
											}
										}
										break;
									
									case 1:
										if (!func_57(&uLocal_117))
										{
											func_56(&uLocal_117);
										}
										if (func_53(&uLocal_117) >= 6f)
										{
											switch (func_61("TC_JOBOFFERED"))
											{
												case 2:
													func_59("TC_JOBOFFERED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													iLocal_111 = 1;
													func_71(&uLocal_117);
													iLocal_105 = 2;
													break;
											}
											if ((unk_0x09560C7DE2A384BD() % 1000) < 50)
											{
											}
										}
										break;
									
									case 2:
										if (!func_57(&uLocal_117))
										{
											func_56(&uLocal_117);
										}
										if (func_53(&uLocal_117) > 15f)
										{
											if (!func_76(Global_97439.f_17351, 32))
											{
												func_49("TC_MISSEDJOB", -1);
												func_74(&(Global_97439.f_17351), 32);
											}
											fLocal_110 = (unk_0x1E253A1A83763D22(10f, 40f) + func_53(&uLocal_117));
											iLocal_105 = 3;
										}
										else if (iLocal_111)
										{
											if (func_53(&uLocal_117) > 6f)
											{
												iLocal_111 = 0;
												unk_0xFD1E0AEC770DAF2E(1);
											}
										}
										break;
									
									case 3:
										if (!func_57(&uLocal_117))
										{
											func_56(&uLocal_117);
										}
										if (func_53(&uLocal_117) > fLocal_110)
										{
											func_79(&uLocal_117);
											iLocal_105 = 0;
										}
										break;
								}
								if (((unk_0xF49761626882E968(0, 86) && !unk_0xF2530FE8E8353E7B(unk_0xA16EC202D9D35357())) && !Global_24597) && (unk_0x09560C7DE2A384BD() - iLocal_108) > 3000)
								{
									iVar4 = func_62();
									if (iVar4 == 0)
									{
										if (iLocal_105 == 0 || iLocal_105 == 3)
										{
											func_73(&uLocal_123);
											iLocal_106 = 9;
											func_33(iLocal_106, &Local_98, &uLocal_123, 0);
											iLocal_114 = 1;
											iVar1 = 4;
										}
										else
										{
											unk_0xEDC11454B9658FE1();
											unk_0xFD1E0AEC770DAF2E(1);
											if (!func_76(Global_97439.f_17351, 128))
											{
												func_74(&(Global_97439.f_17351), 128);
											}
											iVar1 = 4;
										}
										unk_0x19DD85EFF70867D4(&Local_98);
										func_79(&uLocal_117);
										iVar2 = 0;
									}
									else if (iVar4 == 2)
									{
										if (!unk_0x11A809BBE3889742())
										{
											func_49("TXC_HEALTH_GONE", -1);
										}
									}
									else if (iVar4 == 3)
									{
										if (!unk_0x11A809BBE3889742())
										{
											if (!func_58("TXC_WANTED_WARN"))
											{
												if (!func_76(Global_97439.f_17351, 32768))
												{
													func_49("TXC_WANTED_WARN", -1);
													func_74(&(Global_97439.f_17351), 32768);
												}
											}
										}
									}
								}
							}
							else
							{
								if (!func_57(&uLocal_120))
								{
									func_56(&uLocal_120);
								}
								else
								{
									if (func_53(&uLocal_120) < 10f)
									{
										if ((unk_0x09560C7DE2A384BD() % 1000) < 50)
										{
										}
									}
									if (func_53(&uLocal_120) > 10f && iLocal_105 != 0)
									{
										iLocal_105 = 0;
									}
								}
								if (func_32("TC_HOWTOSTART"))
								{
									func_28("TC_HOWTOSTART", 1);
								}
								if (func_32("TC_JOBOFFERED"))
								{
									func_28("TC_JOBOFFERED", 1);
								}
								if (func_32("TC_H_TOODAMAGED"))
								{
									func_28("TC_H_TOODAMAGED", 1);
								}
								if (func_32("TC_ANOTHERJOB"))
								{
									func_28("TC_ANOTHERJOB", 1);
								}
								if (((unk_0x09560C7DE2A384BD() - iLocal_109) > 60000 && !func_58("TC_HOWTOSTART")) && iLocal_115)
								{
									iLocal_115 = 0;
								}
								if (bLocal_113)
								{
									bLocal_113 = false;
								}
								iLocal_112 = 0;
								func_79(&uLocal_117);
							}
						}
					}
				}
				else if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) != 0)
				{
					iLocal_105 = 0;
				}
				break;
			
			case 4:
				if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					unk_0x5F586A40C2987BCF(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 1);
				}
				if (unk_0x3EBB3CB89FC2CE55(&Local_98))
				{
					iVar5 = func_24(&iLocal_107, 2, 9, 0, 0);
					if (iVar5 == 1)
					{
						Global_96494 = 1;
						if (iLocal_114)
						{
							iVar1 = 5;
						}
						else
						{
							iVar1 = 7;
						}
						iVar2 = 0;
					}
					else if (iVar5 == 0)
					{
						iLocal_105 = 0;
						iVar1 = 11;
					}
					else
					{
						func_23("PROCESS_TAXI_DBG_SKIP = Scene is loading.", &iLocal_116, 1000);
					}
				}
				break;
			
			case 5:
				StringCopy(&Var6, "OJTX_PLRDE1", 24);
				func_22(&Var6, 1);
				func_50(&uLocal_123, "OJTXAUD", &Var6, 8, 0, 0, 0);
				iVar1 = 6;
				break;
			
			case 6:
				if (!func_21())
				{
					func_50(&uLocal_123, "OJTXAUD", "OJTX_DIS_JOB", 8, 0, 0, 0);
					iVar1 = 7;
				}
				break;
			
			case 7:
				if (!func_21())
				{
					StringCopy(&Var12, "OJTX_ACCEPT", 24);
					func_22(&Var12, 1);
					func_73(&uLocal_123);
					func_50(&uLocal_123, "OJTXAUD", &Var12, 8, 0, 0, 0);
					iVar1 = 8;
				}
				break;
			
			case 8:
				if (func_64())
				{
					if (!func_21())
					{
						bLocal_113 = false;
						if (func_32("TC_HOWTOSTART"))
						{
							func_28("TC_HOWTOSTART", 1);
						}
						iLocal_97 = unk_0xE81651AD79516E48(&Local_98, 17000);
						unk_0xF8FDF7446A3DA9B4(&Local_98);
						if (!func_76(Global_97439.f_17351, 4))
						{
							func_74(&(Global_97439.f_17351), 4);
							unk_0x32DC163A33A4AB6D(func_20(), 1);
						}
						func_74(&(Global_97439.f_17351), 256);
						StringCopy(&Local_98, "", 24);
						iLocal_114 = 0;
						iVar1 = 10;
						iLocal_105 = 0;
					}
				}
				else
				{
					if (func_21())
					{
						func_18();
					}
					bLocal_113 = false;
					iLocal_114 = 0;
					unk_0xF8FDF7446A3DA9B4(&Local_98);
					func_74(&(Global_97439.f_17351), 256);
					StringCopy(&Local_98, "", 24);
					iLocal_105 = 0;
					iVar1 = 10;
				}
				break;
			
			case 10:
				if (!unk_0xDECCEB462707CB3E(iLocal_97))
				{
					func_84(&(Global_97439.f_17351), 2048);
					if (func_76(Global_97439.f_17351, 4))
					{
						func_84(&(Global_97439.f_17351), 4);
						unk_0x32DC163A33A4AB6D(func_20(), 0);
					}
					Global_96494 = 0;
					iLocal_106 = -1;
					iVar1 = 11;
					iVar2 = 0;
				}
				else if (func_76(Global_97439.f_17351, 1024))
				{
					func_84(&(Global_97439.f_17351), 1024);
					func_11(func_17(iLocal_106), 0, 0);
					bLocal_113 = true;
					func_9(iLocal_106, bLocal_113);
					func_8(1, 0);
					func_5();
				}
				break;
			
			case 11:
				if (func_76(Global_97439.f_17351, 256))
				{
					func_84(&(Global_97439.f_17351), 256);
					func_4(&iLocal_107);
				}
				iLocal_107 = -1;
				if (!func_3())
				{
					func_8(0, 0);
					func_2();
					StringCopy(&Local_98, "", 24);
					if (iLocal_97 != 0)
					{
						if (unk_0xDECCEB462707CB3E(iLocal_97))
						{
							unk_0xA2630CA69391DAD5(iLocal_97);
							iLocal_97 = 0;
						}
					}
					func_79(&uLocal_117);
					func_1(0);
					iLocal_105 = 0;
					iVar1 = 1;
					iVar2 = 0;
				}
				break;
			
			case 12:
				func_83();
				break;
			
			default:
				func_83();
				break;
		}
		unk_0x4EDE34FBADD967A6(iVar2);
	}
}

void func_1(int iParam0)
{
	Global_68585 = iParam0;
	Global_68586 = iParam0;
}

void func_2()
{
	char cVar0[24];
	
	if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
	{
		unk_0x012365AC00FE1314(StackVal, 0, 0, 0);
	}
	else if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x5FD676841BE4531E(0, &cVar0);
	}
}

bool func_3()
{
	return Global_90081.f_1;
}

void func_4(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34877)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
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
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_8(int iParam0, int iParam1)
{
	Global_90081.f_7 = iParam0;
	Global_90081.f_8 = iParam1;
}

void func_9(int iParam0, bool bParam1)
{
	func_10();
	if (bParam1)
	{
		Global_97439.f_17351.f_1[iParam0 /*2*/] = 1;
		Global_97439.f_17351.f_1[iParam0 /*2*/].f_1 = 0;
	}
	else
	{
		Global_97439.f_17351.f_1[iParam0 /*2*/] = 0;
		Global_97439.f_17351.f_1[iParam0 /*2*/].f_1 = 1;
	}
}

void func_10()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_97439.f_17351.f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
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
		func_15((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_12();
	}
}

void func_12()
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
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_14(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_13() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_6();
				}
			}
		}
	}
}

int func_13()
{
	return Global_24446;
}

int func_14(int iParam0, int iParam1)
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

int func_15(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_16()
{
	return Global_1312729;
}

int func_17(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

void func_18()
{
	Global_14559 = 0;
	func_19();
}

void func_19()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

int func_20()
{
	return joaat("taxi");
}

int func_21()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

void func_22(char* sParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_78(unk_0xA16EC202D9D35357());
	if (iVar0 == 0)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "M", 24);
		}
		else
		{
			StringConCat(sParam0, "_2", 24);
		}
	}
	else if (iVar0 == 2)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "T", 24);
		}
		else
		{
			StringConCat(sParam0, "_3", 24);
		}
	}
	else if (iVar0 == 1)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "F", 24);
		}
		else
		{
			StringConCat(sParam0, "_4", 24);
		}
	}
}

void func_23(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x09560C7DE2A384BD() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x09560C7DE2A384BD();
}

int func_24(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87925.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_80(0))
		{
			return 0;
		}
		Global_34879++;
		*iParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *iParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_26(iParam2))
		{
			return 0;
		}
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*iParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
		if (iParam4 != 0)
		{
			func_25(iParam0, iParam4);
		}
	}
	return 2;
}

void func_25(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, Global_34915);
}

int func_27(int iParam0, int iParam1)
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

void func_28(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_96081 && iParam1)
	{
		if (func_58(sParam0) && !unk_0xFFD644770C34BB52())
		{
			unk_0xFD1E0AEC770DAF2E(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(sParam0, &(Global_97439.f_23635[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_97439.f_23635.f_145 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_97439.f_23635.f_145 - 1));
			Global_97439.f_23635.f_145 = (Global_97439.f_23635.f_145 - 1);
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_30(int iParam0)
{
	StringCopy(&(Global_97439.f_23635[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_97439.f_23635[iParam0 /*16*/].f_4), "", 16);
	Global_97439.f_23635[iParam0 /*16*/].f_8 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_9 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_11 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_10 = -1;
	Global_97439.f_23635[iParam0 /*16*/].f_12 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_13 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_14 = 0;
	Global_97439.f_23635[iParam0 /*16*/].f_15 = 0;
}

void func_31(int iParam0, int iParam1)
{
	Global_97439.f_23635[iParam0 /*16*/] = { Global_97439.f_23635[iParam1 /*16*/] };
	Global_97439.f_23635[iParam0 /*16*/].f_4 = { Global_97439.f_23635[iParam1 /*16*/].f_4 };
	Global_97439.f_23635[iParam0 /*16*/].f_8 = Global_97439.f_23635[iParam1 /*16*/].f_8;
	Global_97439.f_23635[iParam0 /*16*/].f_10 = Global_97439.f_23635[iParam1 /*16*/].f_10;
	Global_97439.f_23635[iParam0 /*16*/].f_9 = Global_97439.f_23635[iParam1 /*16*/].f_9;
	Global_97439.f_23635[iParam0 /*16*/].f_11 = Global_97439.f_23635[iParam1 /*16*/].f_11;
	Global_97439.f_23635[iParam0 /*16*/].f_12 = Global_97439.f_23635[iParam1 /*16*/].f_12;
	Global_97439.f_23635[iParam0 /*16*/].f_13 = Global_97439.f_23635[iParam1 /*16*/].f_13;
	Global_97439.f_23635[iParam0 /*16*/].f_14 = Global_97439.f_23635[iParam1 /*16*/].f_14;
	Global_97439.f_23635[iParam0 /*16*/].f_15 = Global_97439.f_23635[iParam1 /*16*/].f_15;
}

int func_32(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(sParam0, &(Global_97439.f_23635[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(int iParam0, char* sParam1, var uParam2, bool bParam3)
{
	struct<6> Var0;
	char cVar6[24];
	
	if (iParam0 == 0)
	{
		StringCopy(sParam1, "Taxi_NeedExcitement", 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(sParam1, "Taxi_TakeItEasy", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(sParam1, "Taxi_Deadline", 24);
	}
	else if (iParam0 == 3)
	{
		StringCopy(sParam1, "Taxi_GotYourBack", 24);
	}
	else if (iParam0 == 4)
	{
		StringCopy(sParam1, "Taxi_TakeToBest", 24);
	}
	else if (iParam0 == 5)
	{
		StringCopy(sParam1, "Taxi_CutYouIn", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(sParam1, "Taxi_GotYouNow", 24);
	}
	else if (iParam0 == 7)
	{
		StringCopy(sParam1, "Taxi_ClownCar", 24);
	}
	else if (iParam0 == 8)
	{
		StringCopy(sParam1, "Taxi_FollowCar", 24);
	}
	else if (iParam0 == 9)
	{
		StringCopy(sParam1, "Taxi_Procedural", 24);
	}
	if (bParam3)
	{
		StringCopy(&Var0, func_48(iParam0), 24);
		cVar6 = { Var0 };
		StringConCat(&cVar6, "_1", 24);
		func_73(uParam2);
		func_34(uParam2, "OJTXAUD", &Var0, &cVar6, 8, 0, 0);
	}
}

int func_34(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 1;
	Global_16686 = 0;
	Global_16690 = 0;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_35(sParam2, iParam4, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
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
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_46(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_45();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_40();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_39())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_38())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_37();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_36();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
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

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_37()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_38()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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

void func_40()
{
	if (func_68(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_41();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_41()
{
	func_42();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_42()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_44(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_78(unk_0xA16EC202D9D35357());
			if (func_43(iVar0) && (!func_68(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_43(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_43(int iParam0)
{
	return iParam0 < 3;
}

int func_44(int iParam0)
{
	if (func_43(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

char* func_48(int iParam0)
{
	if (iParam0 == 0)
	{
		return "OJTX_EXC_OFF";
	}
	else if (iParam0 == 1)
	{
		return "OJTX_TIE_OFF";
	}
	else if (iParam0 == 2)
	{
		return "OJTX_DL_OFF";
	}
	else if (iParam0 == 3)
	{
		return "OJTX_GB_OFF";
	}
	else if (iParam0 == 4)
	{
		return "OJTX_TB_OFF";
	}
	else if (iParam0 == 5)
	{
		return "OJTX_CI_OFF";
	}
	else if (iParam0 == 6)
	{
		return "OJTX_GN_OFF";
	}
	else if (iParam0 == 7)
	{
		return "OJTX_CC_OFF";
	}
	else if (iParam0 == 8)
	{
		return "OJTX_FC_OFF";
	}
	else if (iParam0 == 9)
	{
		return "OJTX_PRO_OFF";
	}
	return "";
}

void func_49(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

int func_50(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_35(sParam2, iParam3, 0);
}

void func_51(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

int func_52()
{
	int iVar0;
	
	iVar0 = unk_0x09560C7DE2A384BD();
	if (Global_15693 == 0)
	{
		if ((iVar0 - Global_16715) > 3000)
		{
			if (unk_0xD47B332729054512() == 0)
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
	return 0;
}

float func_53(var uParam0)
{
	if (func_57(uParam0))
	{
		if (func_55(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_54(unk_0x889D01384B54BCE3(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_54(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		iVar0 = unk_0x519586565311459B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
}

bool func_55(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 2);
}

void func_56(var uParam0)
{
	if (!func_57(uParam0))
	{
		func_71(uParam0);
	}
}

bool func_57(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 1);
}

bool func_58(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_60(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_60(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_29();
	}
}

int func_61(char* sParam0)
{
	if (unk_0x9BA82E09A986BA4B(sParam0, &Global_96084))
	{
		return 1;
	}
	if (func_32(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_62()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_64())
	{
		return 1;
	}
	else
	{
		uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		iVar1 = unk_0xF2DB717A73826179(unk_0x1356C15C4E3843BF(uVar0));
		iVar2 = unk_0x6360D2FA3AD62AD1(uVar0);
		if (iVar1 < 100 || iVar2 < 100)
		{
			return 2;
		}
		if (!func_63(uVar0))
		{
			return 2;
		}
		if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
		{
			return 3;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x46BB957748356042(uParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x46BB957748356042(uParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x46BB957748356042(uParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x46BB957748356042(uParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xD548A98EDA33C15A(unk_0xA609E58449080951(uParam0)))
	{
		iVar1 = 0;
		if (!unk_0xD13672BF2D3C4CB1(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xD13672BF2D3C4CB1(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xD13672BF2D3C4CB1(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xD13672BF2D3C4CB1(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_64()
{
	var uVar0;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			if (unk_0xECFECDAD51A6184F(uVar0, 0))
			{
				if (unk_0xD8A521688BDBE867(uVar0, -1) == unk_0xA16EC202D9D35357())
				{
					if (unk_0x2C53E9EE23994172(uVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_65()
{
	if (!func_76(Global_97439.f_17351, 8192))
	{
		if (func_64())
		{
			func_74(&(Global_97439.f_17351), 8192);
			func_67();
		}
	}
	else if (!func_64())
	{
		func_84(&(Global_97439.f_17351), 8192);
		func_66();
	}
}

void func_66()
{
	var uVar0;
	
	uVar0 = unk_0xB49BA83A5C224F40();
	if (unk_0xECFECDAD51A6184F(uVar0, 0))
	{
		unk_0x9AF4B23C594DCEE5(-1, "Radio_Off", uVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_67()
{
	var uVar0;
	
	uVar0 = unk_0xB49BA83A5C224F40();
	if (unk_0xECFECDAD51A6184F(uVar0, 0))
	{
		unk_0x9AF4B23C594DCEE5(-1, "Radio_On", uVar0, "TAXI_SOUNDS", 0, 0);
	}
}

bool func_68(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_69()
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	return 1;
}

int func_70(bool bParam0)
{
	if (Global_17099.f_130)
	{
		return 0;
	}
	if (unk_0x51104159A21A8E40(0, 19) || (!bParam0 && unk_0xAFD068D020C517F6(0, 19)))
	{
		return 1;
	}
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x51104159A21A8E40(0, 166))
		{
			if ((!unk_0xF49761626882E968(0, 167) && !unk_0xF49761626882E968(0, 168)) && !unk_0xF49761626882E968(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0x51104159A21A8E40(0, 167))
		{
			if ((!unk_0xF49761626882E968(0, 166) && !unk_0xF49761626882E968(0, 168)) && !unk_0xF49761626882E968(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0x51104159A21A8E40(0, 168))
		{
			if ((!unk_0xF49761626882E968(0, 166) && !unk_0xF49761626882E968(0, 167)) && !unk_0xF49761626882E968(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0x51104159A21A8E40(0, 169))
		{
			if ((!unk_0xF49761626882E968(0, 166) && !unk_0xF49761626882E968(0, 167)) && !unk_0xF49761626882E968(0, 168))
			{
				return 1;
			}
		}
		if (!bParam0)
		{
			if (unk_0xAFD068D020C517F6(0, 166))
			{
				if ((!unk_0x4E151C54AB29940C(0, 167) && !unk_0x4E151C54AB29940C(0, 168)) && !unk_0x4E151C54AB29940C(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0xAFD068D020C517F6(0, 167))
			{
				if ((!unk_0x4E151C54AB29940C(0, 166) && !unk_0x4E151C54AB29940C(0, 168)) && !unk_0x4E151C54AB29940C(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0xAFD068D020C517F6(0, 168))
			{
				if ((!unk_0x4E151C54AB29940C(0, 166) && !unk_0x4E151C54AB29940C(0, 167)) && !unk_0x4E151C54AB29940C(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0xAFD068D020C517F6(0, 169))
			{
				if ((!unk_0x4E151C54AB29940C(0, 166) && !unk_0x4E151C54AB29940C(0, 167)) && !unk_0x4E151C54AB29940C(0, 168))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_71(var uParam0)
{
	func_72(uParam0, 0f);
}

void func_72(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_54(unk_0x889D01384B54BCE3(*uParam0, 4)) - fParam1);
	unk_0xD0E2BFCE93AE3ABD(uParam0, 1);
	unk_0x29DB79DD4D939B38(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_73(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_78(unk_0xA16EC202D9D35357());
	if (iVar0 == 0)
	{
		func_51(uParam0, 0, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_51(uParam0, 0, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_51(uParam0, 0, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_51(uParam0, 0, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_51(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_74(var uParam0, int iParam1)
{
	func_75(uParam0, iParam1);
}

void func_75(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_76(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_77()
{
	int iVar0;
	
	if (func_76(Global_97439.f_17351, 2048))
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			Global_97439.f_17351.f_1[0 /*2*/] = 0;
			Global_97439.f_17351.f_1[0 /*2*/].f_1 = 0;
			iVar0++;
		}
	}
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_44(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_79(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_80(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_26(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_81(int iParam0, int iParam1)
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
	bVar0 = unk_0x889D01384B54BCE3(Global_97439.f_7341.f_99.f_217[iParam0], iParam1);
	return bVar0;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x889D01384B54BCE3(Global_97439.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

void func_83()
{
	if (func_76(Global_97439.f_17351, 4))
	{
		func_84(&(Global_97439.f_17351), 4);
		unk_0x32DC163A33A4AB6D(func_20(), 0);
	}
	if (func_76(Global_97439.f_17351, 256))
	{
		func_84(&(Global_97439.f_17351), 256);
		func_4(&iLocal_107);
	}
	if (iLocal_97 != 0)
	{
		if (unk_0xDECCEB462707CB3E(iLocal_97))
		{
			unk_0xA2630CA69391DAD5(iLocal_97);
			iLocal_97 = 0;
		}
	}
	if (unk_0x77FAE22505910E89(&Local_98) != 0)
	{
		unk_0xF8FDF7446A3DA9B4(&Local_98);
	}
	if (unk_0x5660C8AFDD9C1721(uLocal_104))
	{
		unk_0xB6FB9702660D84F6(&uLocal_104);
	}
	unk_0x82706E6C897B0FA1();
}

void func_84(var uParam0, int iParam1)
{
	func_85(uParam0, iParam1);
}

void func_85(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

