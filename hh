import React, { useEffect, useState } from 'react'
import Navbar from './components/Navbar'
import HeroSection from './components/HeroSection'
import FeaturesSection from './components/FeaturesSection'
import StatsSection from './components/StatsSection'
import AboutSection from './components/AboutSection'
import CTASection from './components/CTASection'
import Footer from './components/Footer'
import { AnimatePresence } from 'framer-motion'
import './index.css'
export function App() {
  const [scrollY, setScrollY] = useState(0)
  useEffect(() => {
    const handleScroll = () => {
      setScrollY(window.scrollY)
    }
    window.addEventListener('scroll', handleScroll, {
      passive: true,
    })
    return () => window.removeEventListener('scroll', handleScroll)
  }, [])
  return (
    <div className="w-full min-h-screen bg-black text-white overflow-hidden">
      <div className="absolute inset-0 bg-[radial-gradient(ellipse_at_top_right,_var(--tw-gradient-stops))] from-indigo-900/20 via-black to-black pointer-events-none z-0"></div>
      <div className="absolute inset-0 bg-[radial-gradient(ellipse_at_bottom_left,_var(--tw-gradient-stops))] from-purple-900/20 via-black to-black pointer-events-none z-0"></div>
      <AnimatePresence>
        <Navbar scrollY={scrollY} />
        <HeroSection />
        <FeaturesSection />
        <StatsSection />
        <AboutSection />
        <CTASection />
        <Footer />
      </AnimatePresence>
    </div>
  )
}
