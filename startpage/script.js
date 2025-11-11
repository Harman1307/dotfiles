// Update time and date
function updateTime() {
    const now = new Date();
    const timeString = now.toLocaleTimeString('en-US', { 
        hour: '2-digit', 
        minute: '2-digit',
        hour12: false 
    });
    const dateString = now.toLocaleDateString('en-US', { 
        weekday: 'long', 
        year: 'numeric', 
        month: 'long', 
        day: 'numeric' 
    });
    
    document.getElementById('time').textContent = timeString;
    document.getElementById('date').textContent = dateString;
}

updateTime();
setInterval(updateTime, 1000);

// Search functionality
const searchInput = document.getElementById('search');
searchInput.addEventListener('keypress', (e) => {
    if (e.key === 'Enter') {
        const query = searchInput.value;
        if (query) {
            window.location.href = `https://google.com/search?q=${encodeURIComponent(query)}`;
        }
    }
});

// Vim-like keybindings
document.addEventListener('keydown', (e) => {
    // Focus search with /
    if (e.key === '/' && document.activeElement !== searchInput) {
        e.preventDefault();
        searchInput.focus();
    }
    
    // Escape to blur
    if (e.key === 'Escape') {
        searchInput.blur();
    }
});
